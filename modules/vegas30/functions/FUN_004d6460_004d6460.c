/* Module: vegas30.exe
   Function: FUN_004d6460
   Address: 004d6460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d6460(int param_1,RECT *param_2,int param_3)

{
  LONG LVar1;
  
  if (param_2 == (RECT *)0x0) {
    param_3 = 0;
  }
  if (param_3 != *(int *)(param_1 + 0x90)) {
    if (*(int *)(param_1 + 0x90) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 0x24),(RECT *)(param_1 + 0x94),0);
      *(undefined4 *)(param_1 + 0x90) = 0;
      if (DAT_0064769c == *(int *)(param_1 + 0x24)) {
        DAT_0064769c = 0;
      }
    }
    if (param_3 != 0) {
      *(LONG *)(param_1 + 0x94) = param_2->left;
      *(LONG *)(param_1 + 0x98) = param_2->top;
      *(LONG *)(param_1 + 0x9c) = param_2->right;
      DAT_0064769c = *(int *)(param_1 + 0x24);
      LVar1 = param_2->bottom;
      *(int *)(param_1 + 0x90) = param_3;
      *(LONG *)(param_1 + 0xa0) = LVar1;
      RedrawWindow(*(HWND *)(param_1 + 0x24),param_2,(HRGN)0x0,0x101);
    }
  }
  return;
}


