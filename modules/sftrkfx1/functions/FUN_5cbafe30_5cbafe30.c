/* Module: sftrkfx1.dll
   Function: FUN_5cbafe30
   Address: 5cbafe30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbafe30(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  tagRECT local_10;
  
  if (param_3 == -1) {
    iVar1 = FUN_5cbafe00(param_1,param_2);
    return iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != param_3) {
    *(int *)(param_2 + 0x24) = param_3;
    GetClientRect(param_1,&local_10);
    CreateCaret(param_1,(HBITMAP)0x0,3,local_10.bottom - local_10.top);
    if (param_3 == 0) {
      iVar2 = *(int *)(param_2 + 0xd0);
    }
    else if (param_3 < *(int *)(param_2 + 0xa4)) {
      iVar2 = *(int *)(param_2 + 0xd0 + param_3 * 0x38);
      local_10.left = *(int *)(param_2 + 0xa0 + param_3 * 0x38);
    }
    else {
      iVar2 = *(int *)(param_2 + 0xa0 + param_3 * 0x38) + *(int *)(param_2 + 0x94);
    }
    SetCaretPos((iVar2 + local_10.left >> 1) + -1,0);
    ShowCaret(param_1);
  }
  return iVar1;
}


