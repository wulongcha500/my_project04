void quickSort(int *array, int low, int high) {
  if (low < high) {
    // 选择基准元素
    int pivot = array[low];

    // 将小于基准元素的元素放到左边，大于基准元素的元素放到右边
    int i = low + 1, j = high;
    while (i <= j) {
      while (array[i] <= pivot) {
        i++;
      }
      while (array[j] > pivot) {
        j--;
      }
      if (i <= j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }

    // 将基准元素放到中间位置
    array[low] = array[j];
    array[j] = pivot;

    // 递归排序左边和右边的子数组
    quickSort(array, low, j - 1);
    quickSort(array, j + 1, high);
  }
}
