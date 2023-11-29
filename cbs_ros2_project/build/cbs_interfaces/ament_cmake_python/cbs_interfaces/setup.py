from setuptools import find_packages
from setuptools import setup

setup(
    name='cbs_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('cbs_interfaces', 'cbs_interfaces.*')),
)
