#!/usr/bin/env python3
"""Defines a simple helper function"""


def index_range(page: int, page_size: int) -> tuple:
    """Returns a tuple of size two"""
    return (((page- 1) * page_size), (page * page_size))