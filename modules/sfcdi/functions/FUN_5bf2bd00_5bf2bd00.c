/* Module: sfcdi.dll
   Function: FUN_5bf2bd00
   Address: 5bf2bd00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf2bd00(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return -0x7fffbffd;
  }
  param_1[1] = 0;
  if (*param_1 == 0) {
    return 0;
  }
  param_1[1] = (int)(param_1 + 2);
  return (-(uint)(param_1 + 2 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


