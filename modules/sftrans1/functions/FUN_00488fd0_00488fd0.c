/* Module: sftrans1.dll
   Function: FUN_00488fd0
   Address: 00488fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00488fd0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  SCROLLINFO local_1c;
  
  iVar1 = *(int *)(param_1 + 0x38);
  switch(param_2) {
  case 0:
    param_3 = *(int *)(param_1 + 0xec) - iVar1;
    break;
  case 1:
    param_3 = *(int *)(param_1 + 0xec) + iVar1;
    break;
  case 2:
    param_3 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xf4) * iVar1;
    break;
  case 3:
    param_3 = *(int *)(param_1 + 0xf4) * iVar1 + *(int *)(param_1 + 0xec);
    break;
  case 4:
  case 5:
    break;
  default:
    param_3 = *(uint *)(param_1 + 0xec);
  }
  param_3 = ((int)param_3 < 0) - 1 & param_3;
  if ((int)*(uint *)(param_1 + 0xf0) < (int)param_3) {
    param_3 = *(uint *)(param_1 + 0xf0);
  }
  uVar2 = *(uint *)(param_1 + 0xec);
  if (param_3 != uVar2) {
    *(uint *)(param_1 + 0xec) = param_3;
    ScrollWindowEx(*(HWND *)(param_1 + 4),0,-(param_3 - uVar2),(RECT *)(param_1 + 0x94),
                   (RECT *)(param_1 + 0x94),(HRGN)0x0,(LPRECT)0x0,2);
    UpdateWindow(*(HWND *)(param_1 + 4));
    local_1c.nPos = *(int *)(param_1 + 0xec);
    local_1c.cbSize = 0x1c;
    local_1c.fMask = 4;
    SetScrollInfo(*(HWND *)(param_1 + 4),1,&local_1c,1);
  }
  return;
}


