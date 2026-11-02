/* Module: vidcap30.exe
   Function: FUN_00442a40
   Address: 00442a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00442a40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  WPARAM *pWVar3;
  undefined4 local_28;
  WPARAM local_24 [7];
  undefined4 local_8;
  
  local_28 = 4;
  pWVar3 = local_24;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pWVar3 = 0;
    pWVar3 = pWVar3 + 1;
  }
  for (local_24[0] = SendMessageA(*(HWND *)(param_1 + 0x1668),0x100c,0xffffffff,2);
      local_24[0] != 0xffffffff;
      local_24[0] = SendMessageA(*(HWND *)(param_1 + 0x1668),0x100c,local_24[0],2)) {
    SendMessageA(*(HWND *)(param_1 + 0x1668),0x1005,0,(LPARAM)&local_28);
    uVar1 = FUN_00441a80(local_8);
    FUN_004419e0(uVar1);
  }
  return;
}


