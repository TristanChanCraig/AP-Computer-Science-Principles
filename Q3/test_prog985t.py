from Prog985t import MergeSort
import unittest

class TestMergeSort(unittest.TestCase):
    def test_normal_case():
        input = [4, 2, 5, 1, 3]
        expected_output = [1, 2, 3, 4, 5]
        assert MergeSort.sort(input) == expected_output
    
    def test_empty_list():
        input = []
        expected_output = []
        assert MergeSort.sort(input) == expected_output

    def test_single_element():
        input = [1]
        expected_output = [1]
        assert MergeSort.sort(input) == expected_output

    def test_identical_elements():
        input = [5, 5, 5, 5]
        expected_output = [5, 5, 5, 5]
        assert MergeSort.sort(input) == expected_output

    def test_negative_numbers():
        input = [-3, -1, -4, -2]
        expected_output = [-4, -3, -2, -1]
        assert MergeSort.sort(input) == expected_output

    def test_mixed_types():
        input = [3.2, 1.5, 4.8, 2.1]
        expected_output = [1.5, 2.1, 3.2, 4.8]
        assert MergeSort.sort(input) == expected_output

if __name__ == '__main__':
    suite = unittest.TestLoader().loadTestsFromTestCase(TestMergeSort)
    unittest.TextTestRunner(verbosity=0).run(suite)
