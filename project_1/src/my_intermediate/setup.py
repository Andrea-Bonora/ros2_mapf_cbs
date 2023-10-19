from setuptools import find_packages, setup

package_name = 'my_intermediate'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='andrea',
    maintainer_email='andrea.bonora@studenti.unitn.it',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "plan_asker = my_intermediate.plan_asker:main",
            "multi_agent_plan_asker = my_intermediate.multi_agent_plan_asker:main",
            "collision_avoider = my_intermediate.collision_avoider:main",
            "fake_asker = my_intermediate.fake_asker:main",
            "map_discretizer = my_intermediate.map_discretizer:main"
        ],
    },
)
