from setuptools import find_packages
from setuptools import setup

package_name = 'ros2node'

setup(
    name=package_name,
    version='0.13.5',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/' + package_name, ['package.xml']),
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
    ],
    install_requires=['ros2cli'],
    zip_safe=True,
    author='Dirk Thomas',
    author_email='dthomas@osrfoundation.org',
    maintainer='Claire Wang, Mabel Zhang',
    maintainer_email='clairewang@openrobotics.org, mabel@openrobotics.org',
    url='https://github.com/ros2/ros2cli/tree/master/ros2node',
    download_url='https://github.com/ros2/ros2cli/releases',
    keywords=[],
    classifiers=[
        'Environment :: Console',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
    ],
    description='The node command for ROS 2 command line tools.',
    long_description="""\
The package provides the node command for the ROS 2 command line tools.""",
    license='Apache License, Version 2.0',
    tests_require=['pytest'],
    entry_points={
        'ros2cli.command': [
            'node = ros2node.command.node:NodeCommand',
        ],
        'ros2cli.extension_point': [
            'ros2node.verb = ros2node.verb:VerbExtension',
        ],
        'ros2node.verb': [
            'info = ros2node.verb.info:InfoVerb',
            'list = ros2node.verb.list:ListVerb',
        ],
    }
)
