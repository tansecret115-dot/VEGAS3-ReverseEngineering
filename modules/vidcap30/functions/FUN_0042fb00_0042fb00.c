/* Module: vidcap30.exe
   Function: FUN_0042fb00
   Address: 0042fb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042fb00(int *param_1,RECT *param_2,int param_3)

{
  if (param_2 == (RECT *)0x0) {
    param_3 = 0;
  }
  if (param_3 != param_1[0x10]) {
    if (param_1[0x10] != 0) {
      InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 0x14),0);
      param_1[0x10] = 0;
    }
    if (param_3 != 0) {
      param_1[0x14] = param_2->left;
      param_1[0x15] = param_2->top;
      param_1[0x16] = param_2->right;
      param_1[0x17] = param_2->bottom;
      param_1[0x10] = param_3;
      RedrawWindow((HWND)*param_1,param_2,(HRGN)0x0,0x101);
    }
    if (param_3 != 0) {
      DAT_005ba52c = *param_1;
      return;
    }
    if (DAT_005ba52c == *param_1) {
      DAT_005ba52c = 0;
    }
  }
  return;
}


