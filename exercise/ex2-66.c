/*
 * 练习题 2.66
 *
 * Generate mask indicating leftmost 1 in x.  Assume w=32.
 * For example, 0xFF00 -> 0x8000, and 0x6000 -> 0x4000.
 * If x = 0, then return 0.
 *
 *         int leftmost_one(unsigned x);
 *
 * 函数应该遵循位级整数编码规则，不过你可以假设数据类型 int 有 w=32 位。
 * 你的代码最多只能包含 15 个算术运算、位运算和逻辑运算。
 *
 * 提示：先将 x 转换成形如 [0...011...1] 的位向量。
 */
int leftmost_one(unsigned x)
{
        x |= x >> 1;
        x |= x >> 2;
        x |= x >> 4;
        x |= x >> 8;
        x |= x >> 16;

        /* 以上的代码将会把 x 转换成形如 [0...01...1] 的形式 */
        return x - (x >> 1);
}

/*
 * 最右边的1
 * 
 * x:			00000000 00000000 11101111 00000000
 * b = ~x+1:    11111111 11111111 00010001 00000000
 * c = b|x:		11111111 11111111 11111111 00000000
 * ~c+1:		00000000 00000000 00000001 00000000
 */
int rightmost_one(unsigned x)
{
        return ~((~x + 1) | x) + 1;
}
