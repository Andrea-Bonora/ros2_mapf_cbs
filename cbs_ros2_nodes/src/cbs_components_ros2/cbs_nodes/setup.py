from setuptools import find_packages, setup

package_name = 'cbs_nodes'

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
            "multi_agent_plan_asker = cbs_nodes.multi_agent_plan_asker:main",
            "collision_avoider = cbs_nodes.collision_avoider:main",
            "plan_asker = cbs_nodes.plan_asker:main",
            "baseline_asker = cbs_nodes.baseline_asker:main",
            "fake_asker = cbs_nodes.fake_asker:main",
        ],
    },
)
