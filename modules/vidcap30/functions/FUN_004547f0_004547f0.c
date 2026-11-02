/* Module: vidcap30.exe
   Function: FUN_004547f0
   Address: 004547f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004547f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    *(int *)(param_1 + 0x3c) = param_2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = param_2;
  }
  if (iVar1 != param_2) {
    FUN_004544d0(param_1,0);
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
    }
  }
  return iVar1;
}


