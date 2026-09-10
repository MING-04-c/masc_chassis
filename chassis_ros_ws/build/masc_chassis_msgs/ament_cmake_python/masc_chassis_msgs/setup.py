from setuptools import find_packages
from setuptools import setup

setup(
    name='masc_chassis_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('masc_chassis_msgs', 'masc_chassis_msgs.*')),
)
