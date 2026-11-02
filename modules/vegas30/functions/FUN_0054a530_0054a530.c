/* Module: vegas30.exe
   Function: FUN_0054a530
   Address: 0054a530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054a530(int param_1)

{
  uint uVar1;
  LRESULT LVar2;
  int iVar3;
  LRESULT *pLVar4;
  LRESULT local_28 [8];
  undefined4 local_8;
  
  iVar3 = *(int *)(param_1 + 0x84);
  if (iVar3 == 2) {
    uVar1 = SendMessageA(*(HWND *)(param_1 + 0x98),0x40e,0,0);
    uVar1 = uVar1 & 0xffff;
    if ((uVar1 < *(uint *)(param_1 + 0x554)) && (uVar1 < **(uint **)(param_1 + 0xb4))) {
      return *(undefined4 *)((*(uint **)(param_1 + 0xb4))[2] + uVar1 * 4);
    }
  }
  else if (((iVar3 == 1) || (iVar3 == 0)) &&
          (local_28[1] = SendMessageA(*(HWND *)(param_1 + 0x9c),0x100c,0xffffffff,1),
          local_28[1] != -1)) {
    pLVar4 = local_28;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pLVar4 = 0;
      pLVar4 = pLVar4 + 1;
    }
    local_28[0] = 4;
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1005,0,(LPARAM)local_28);
    if (LVar2 == 1) {
      return local_8;
    }
  }
  return 0;
}


