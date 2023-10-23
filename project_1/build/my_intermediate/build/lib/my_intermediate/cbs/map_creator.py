from PIL import Image
import yaml

class MapCreator(object):
    def __init__(self, path):
        self.path = path
        self.counter_ = 1

    def create_map(self, data, resolution, origin, width, height):
        self.create_pgm_file(data, width, height)
        self.create_yaml_file(resolution, origin)
        
    def create_pgm_file(self, data, width, height):
        image = Image.new("L", (width, height))
        # Set pixel values based on map data
        for y in range(height):
            for x in range(width):
                index = x + y * width
                # Convert occupancy values to grayscale (0-255)
                if data[index] == 100:
                    grayscale_value = 0
                elif data[index] == -1:
                    grayscale_value = 127
                else:
                    grayscale_value = 255
                image.putpixel((x, y), grayscale_value)

        # Save the image as a PGM file
        image.save(self.path + "map"+str(self.counter_)+".pgm")
        self.counter_ += 1

    def create_yaml_file(self, resolution, origin):
        # Define map metadata
        map_metadata = {
            "image": "map.pgm",
            "resolution": resolution,
            "origin": {
                "position": {"x": origin.position.x, "y": origin.position.y},
                "orientation": {"x": origin.orientation.x, "y": origin.orientation.y, "z": origin.orientation.z, "w": origin.orientation.w}
            },
            "negate": 0,
            "occupied_thresh": 0.65,
            "free_thresh": 0.196
        }

        # Save the map metadata to map.yaml
        with open(self.path + "map" +str(self.counter_)+".yaml", "w") as yaml_file:
            yaml.dump(map_metadata, yaml_file, default_flow_style=False)

    def __str__(self):
        return '(' + str(self.time) + ', ' + self.agent_1 + ', ' + self.agent_2 + \
             ', '+ str(self.location_1) + ', ' + str(self.location_2) + ')'