from Prog985t import MergeSort
import unittest
from time import perf_counter as current_time

class TestMergeSort(unittest.TestCase):
    def test_normal_case(self):
        input = [4, 2, 5, 1, 3]
        expected_output = [1, 2, 3, 4, 5]
        MergeSort.sort(input)
        self.assertEqual(input, expected_output)
    
    def test_empty_list(self):
        input = []
        expected_output = []
        MergeSort.sort(input)
        self.assertEqual(input, expected_output)

    def test_single_element(self):
        input = [1]
        expected_output = [1]
        MergeSort.sort(input)
        self.assertEqual(input, expected_output)

    def test_identical_elements(self):
        input = [5, 5, 5, 5]
        expected_output = [5, 5, 5, 5]
        MergeSort.sort(input)
        self.assertEqual(input, expected_output)

    def test_negative_numbers(self):
        input = [-3, -1, -4, -2]
        expected_output = [-4, -3, -2, -1]
        MergeSort.sort(input)
        self.assertEqual(input, expected_output)

    def test_mixed_types(self):
        input = [3.2, 1.5, 4.8, 2.1]
        expected_output = [1.5, 2.1, 3.2, 4.8]
        MergeSort.sort(input)
        self.assertEqual(input, expected_output)

if __name__ == '__main__':
    suite = unittest.TestLoader().loadTestsFromTestCase(TestMergeSort)
    unittest.TextTestRunner(verbosity=0).run(suite)
'''
----------------------------------------------------------------------
Ran 6 tests in 0.000s

OK
'''
