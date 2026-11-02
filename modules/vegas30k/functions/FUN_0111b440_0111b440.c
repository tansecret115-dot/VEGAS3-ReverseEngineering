/* Module: vegas30k.dll
   Function: FUN_0111b440
   Address: 0111b440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0111b440(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  tagRECT local_10;
  
  if (param_3 == -1) {
    iVar2 = FUN_0111b410(param_1,param_2);
    return iVar2;
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == param_3) {
    return iVar2;
  }
  *(int *)(param_2 + 0x24) = param_3;
  GetClientRect(param_1,&local_10);
  CreateCaret(param_1,(HBITMAP)0x0,3,local_10.bottom - local_10.top);
  if (param_3 == 0) {
    iVar3 = *(int *)(param_2 + 0x158) + local_10.left >> 1;
  }
  else {
    if (param_3 < *(int *)(param_2 + 0xb0)) {
      iVar3 = *(int *)(param_2 + 0x158 + param_3 * 0x38) +
              *(int *)(param_2 + 0x128 + param_3 * 0x38) >> 1;
      if (((*(byte *)(param_2 + 0x8c) & 0x70) == 0) ||
         (iVar1 = *(int *)(param_2 + 0x68) + -2, iVar3 < iVar1)) goto LAB_0111b526;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x128 + param_3 * 0x38) + *(int *)(param_2 + 0xa0) + local_10.left
              >> 1;
      if (((*(byte *)(param_2 + 0x8c) & 0x70) == 0) ||
         (iVar1 = *(int *)(param_2 + 0x68) + -2, iVar3 < iVar1)) goto LAB_0111b526;
    }
    iVar3 = iVar1;
  }
LAB_0111b526:
  SetCaretPos(iVar3 + -1,0);
  ShowCaret(param_1);
  return iVar2;
}


