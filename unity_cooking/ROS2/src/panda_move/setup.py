from setuptools import setup, find_packages

setup(
    name='panda_move',
    version='0.0.0',
    packages=find_packages(include=['panda_move', 'panda_move.*']),
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='your_name',
    maintainer_email='your_email',
    description='Panda Move package',
    license='License',
    entry_points={
        'console_scripts': [
            'main_ros2 = panda_move.main_ros2:main',
        ],
    },
)
