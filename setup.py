import os
from setuptools import setup, Extension

os.environ["CC"] = "clang"

SRCS = [
    "./src/python_module/labyrinth_generator.c",
    "./src/python_module/tile_class/tile_class.c",
    "./src/python_module/maze_class/maze_class.c",
    "./src/tile/tile.c",
    "./src/grid/grid.c",
    "./src/grid/data_structures/stack.c",
    "./src/grid/data_structures/random_container.c"
]

DIRS = [
    "./src/tile/",
    "./src/grid/",
    "./src/grid/data_structures",
    "./src/python_module/tile_class",
    "./src/python_module/grid_class",
]

CC_ARGS = [
    "-O2", "-Wall", "-pedantic"
]

extension = Extension(
    name='labyrinth_generator',
    sources=SRCS,
    include_dirs=DIRS,
    extra_compile_args=CC_ARGS
)


setup(
    name="labyrinth_generator",
    version="0.1",
    description="Lorem ipsum", # TODO write python module description
    ext_modules=[extension]
)
