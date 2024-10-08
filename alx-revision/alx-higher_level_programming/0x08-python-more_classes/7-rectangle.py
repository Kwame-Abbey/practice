#!/usr/bin/python3


class Rectangle:
    number_of_instances = 0
    print_symbol = '#'
    
    def __init__(self, width=0, height=0):
        Rectangle.number_of_instances += 1
        self.width = width
        self.height = height
        
    @property
    def width(self):
        return self.__width
    
    @width.setter
    def width(self, value):
        if type(value) is not int:
            raise TypeError('width must be an integer')
        if value < 0:
            raise ValueError('width must be >= 0')
        self.__width = value
        
    @property
    def height(self):
        return self.__height
    
    @height.setter
    def height(self, value):
        if type(value) is not int:
            raise TypeError('height must be an integer')
        if value < 0:
            raise ValueError('height must be >= 0')
        self.__height = value
        
    def area(self):
        return self.width * self.height
    
    def perimeter(self):
        if self.width == 0 or self.height == 0:
            return 0
        return (2 * self.width) + (2 * self.height)
    
    def __str__(self):
        string = ''
        if self.width == 0 or self.height == 0:
            return string
        for i in range(self.height):
            string += self.width * str(self.print_symbol)
            if i < self.height - 1:
                string += '\n'
        return string
    
    def __repr__(self):
        return "Rectangle({:d}, {:d})".format(self.width, self.height)
    
    def __del__(self):
        Rectangle.number_of_instances -= 1
        print('Bye rectangle...')