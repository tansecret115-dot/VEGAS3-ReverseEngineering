/* Module: vegas30.exe
   Function: FUN_004fa5f0
   Address: 004fa5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fa5f0(int *param_1,RECT *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == (RECT *)0x0) {
    param_3 = 0;
  }
  if (param_3 != param_1[0x22]) {
    if (param_1[0x22] != 0) {
      InvalidateRect((HWND)*param_1,(RECT *)(param_1 + 0x23),0);
      param_1[0x22] = 0;
      if (DAT_0064769c == *param_1) {
        DAT_0064769c = 0;
      }
    }
    if (param_3 != 0) {
      param_1[0x23] = param_2->left;
      param_1[0x24] = param_2->top;
      param_1[0x25] = param_2->right;
      DAT_0064769c = *param_1;
      iVar1 = param_2->bottom;
      param_1[0x22] = param_3;
      param_1[0x26] = iVar1;
      RedrawWindow((HWND)*param_1,param_2,(HRGN)0x0,0x101);
    }
  }
  return;
}


