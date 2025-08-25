from setuptools import setup, find_packages

setup(
    name='panda_move',
    version='0.0.0',
    packages=[
        'panda_move.panda_move',
        'panda_move.panda_move.planner',
        'panda_move.panda_move.domain',
        'panda_move.panda_move.problem',
        'panda_move.panda_move.object_level_motion'
    ],
    package_dir={'panda_move.panda_move': 'src/panda_move/panda_move',
                 'panda_move.panda_move.planner': 'src/panda_move/panda_move/planner',
                'panda_move.panda_move.domain': 'src/panda_move.panda_move.domain',
                'panda_move.panda_move.problem': 'src/panda_move.panda_move.problem',
                'panda_move.panda_move.object_level_motion' : 'src/panda_move.panda_move.object_level_motion'
                 },
    install_requires=['setuptools'],
    zip_safe=True,
    entry_points={
        'console_scripts': [
            'main_ros2 = panda_move.panda_move.main_ros2:main',  # 실행 스크립트만
        ],
    },
)
