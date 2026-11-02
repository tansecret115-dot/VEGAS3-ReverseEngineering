/* Module: vegas30.exe
   Function: FUN_00411660
   Address: 00411660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411660(LPRECT param_1,int param_2,int param_3)

{
  if (((byte)param_3 & 3) != 3) {
    AdjustWindowRectEx(param_1,*(DWORD *)(&DAT_0063d134 + param_3 * 4),0,
                       *(DWORD *)(&DAT_0063d154 + param_3 * 4));
    return;
  }
  if (param_2 != 0) {
    param_1->left = param_1->left + -0x11;
    param_1->right = param_1->right + 2;
    param_1->top = param_1->top + -2;
    param_1->bottom = param_1->bottom + 2;
    return;
  }
  param_1->left = param_1->left + -0xf;
  return;
}


