/* Module: vidpcore.dll
   Function: FUN_5df042d0
   Address: 5df042d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df042d0(HWND param_1,int *param_2,int param_3)

{
  LONG LVar1;
  
  LVar1 = GetWindowLongA(param_1,0);
  if (param_3 == -1) {
    param_3 = *(int *)(LVar1 + 0x2fc) + -1;
  }
  if (-1 < param_3) {
    do {
      if (*(int *)(*(int *)(*(int *)(LVar1 + 0x308) + 4) * param_3 + 0x14 +
                  *(int *)(*(int *)(LVar1 + 0x308) + 8)) == 1) {
        if (-1 < param_3) {
          if (param_2 != (int *)0x0) {
            *param_2 = param_3;
          }
          return 1;
        }
        break;
      }
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  return 0;
}


