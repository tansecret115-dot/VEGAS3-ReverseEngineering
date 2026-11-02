/* Module: vegas30.exe
   Function: FUN_005503f0
   Address: 005503f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005503f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar3 = 0;
  local_14 = *(int *)(param_1 + 0x550);
  local_8 = *(undefined4 *)(param_1 + 0x54c);
  local_4 = *(undefined4 *)(param_1 + 0x548);
  local_c = 0;
  local_10 = local_14;
  if (local_14 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x54c) + iVar2;
      FUN_00550490(param_1,uVar3,iVar1 + 2,iVar1);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0x550));
  }
  SendMessageA(*(HWND *)(param_1 + 0x98),0x40b,0,(LPARAM)&local_14);
  SendMessageA(*(HWND *)(param_1 + 0x98),0x422,0xffffffff,0x1ffff);
  return;
}


