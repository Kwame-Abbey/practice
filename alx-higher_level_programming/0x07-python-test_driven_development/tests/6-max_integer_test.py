#!/usr/bin/python3
"""Unittest for max_integer([..])
"""
import unittest
max_integer = __import__('6-max_integer').max_integer

class TestMaxInteger(unittest.TestCase):

    def test_model(self):
        self.assertTrue(__import__('6-max_integer').max_integer)

    def test_integers(self):
        self.assertEqual(max_integer([1, 3, 5]), 5)
        self.assertEqual(max_integer([-1, -3, -5]), -1)
        self.assertEqual(max_integer([1, -3, 5]), 5)
        self.assertEqual(max_integer([2]), 2)

    def test_floats(self):
        self.assertEqual(max_integer([2.5, 5.6, 8.2]), 8.2)
        self.assertEqual(max_integer([-2.5, -5.6, -8.2]), -2.5)
        self.assertEqual(max_integer([-2.5, -5.6, 8.2]), 8.2)

    def test_empty_list(self):
        self.assertEqual(max_integer(), None)

    def test_string(self):
        self.assertEqual(max_integer(['a', 'b', 'c']), 'c')

    def test_string_and_integer(self):
        with self.assertRaises(TypeError):
            max_integer([1, 2, 3, 'a'])

    def test_matrix(self):
        self.assertEqual(max_integer([[1, 2, 3], [4, 5, 6]]), [4, 5, 6])
