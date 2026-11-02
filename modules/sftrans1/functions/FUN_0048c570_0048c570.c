/* Module: sftrans1.dll
   Function: FUN_0048c570
   Address: 0048c570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0048c570(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SCROLLINFO local_1c;
  
  iVar2 = *param_2 * *(int *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0xec);
  iVar4 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98);
  iVar3 = iVar2;
  if ((iVar1 <= iVar2) && (iVar3 = iVar1, iVar1 + iVar4 <= *(int *)(param_1 + 0x38) + iVar2)) {
    iVar3 = (iVar2 - iVar4) + *(int *)(param_1 + 0x38);
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (*(int *)(param_1 + 0xf0) < iVar3) {
    iVar3 = *(int *)(param_1 + 0xf0);
  }
  if (iVar3 != iVar1) {
    *(int *)(param_1 + 0xec) = iVar3;
    ScrollWindowEx(*(HWND *)(param_1 + 4),0,-(iVar3 - iVar1),(RECT *)(param_1 + 0x94),
                   (RECT *)(param_1 + 0x94),(HRGN)0x0,(LPRECT)0x0,2);
    UpdateWindow(*(HWND *)(param_1 + 4));
    local_1c.nPos = *(int *)(param_1 + 0xec);
    local_1c.cbSize = 0x1c;
    local_1c.fMask = 4;
    SetScrollInfo(*(HWND *)(param_1 + 4),1,&local_1c,1);
  }
  return 1;
}


