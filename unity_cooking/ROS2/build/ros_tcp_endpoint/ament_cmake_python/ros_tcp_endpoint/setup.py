from setuptools import find_packages
from setuptools import setup

setup(
    name='ros_tcp_endpoint',
    version='0.4.0',
    packages=find_packages(
        include=('ros_tcp_endpoint', 'ros_tcp_endpoint.*')),
)
