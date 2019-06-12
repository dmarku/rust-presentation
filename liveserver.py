#!/usr/bin/env python
from livereload import Server, shell

server = Server()
server.watch('src/*.md', shell('make'))
server.serve()