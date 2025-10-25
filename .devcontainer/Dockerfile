# Use uma imagem base do Ubuntu
FROM ubuntu:22.04

# Instala o NASM e outras ferramentas
RUN apt-get update && \
    apt-get install -y nasm build-essential gdb && \
    rm -rf /var/lib/apt/lists/*