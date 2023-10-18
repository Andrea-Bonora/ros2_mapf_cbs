from setuptools import find_packages
from setuptools import setup

setup(
    name='my_intermediate_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_intermediate_interfaces', 'my_intermediate_interfaces.*')),
)
