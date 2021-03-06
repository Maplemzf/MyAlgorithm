/*****冒泡排序是一个简单的随机数字排序算法：实现方式
 * 1.将相邻的两个数字一次比较，然后将最大的或者最小的数移动到最后一位或者第一位
 * note：比较趟数的确定。
 * 假设有N个数据存放在数组aa[]中，用冒泡排序将这N个数从小到大排序。首先，在aa[0]和aa[N-1]的范围内，依次比较两个相邻
 * 元素的值，若aa[j]>aa[j+1],则交换二者，j的取值为0到N-2;经过这样一趟冒泡，就把N个数中最大的数放到aa[N-1]。
 * 接下来再对aa[0]到aa[N-2]中的数进行冒泡，这样就把该范围内的最大的数放到aa[N-2]中。依次下去，仅需要N-1趟冒泡
 * 就可以完成排序。
 * 如果在某趟冒泡过程中没有进行相邻值的交换，则证明该排序已经完成，可以提前结束处理。
 *
 ***/
int i, j, swap;

for (i = 0; i < N; i++)
{
    swap = 0; //相邻值交换标志位
    for (j = 0; j < N - i - 1; j++)
    {
        if (aa[j] > aa[j + 1])
        {
            swap = 1;
            temp = aa[j];
            aa[j] = aa[j + 1];
            aa[j + 1] = temp;
        }
        if (!swap)
            break;
    }
