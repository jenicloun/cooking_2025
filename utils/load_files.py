from functools import lru_cache
from pathlib import Path

@lru_cache
def workspace_dir():
    return Path(__file__).parents[1]