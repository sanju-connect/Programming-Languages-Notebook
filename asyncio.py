import asyncio

async def hello():
  print("Hello")
  await asyncio.sleep(1)
  print("Done")

asyncio.run(hello())

