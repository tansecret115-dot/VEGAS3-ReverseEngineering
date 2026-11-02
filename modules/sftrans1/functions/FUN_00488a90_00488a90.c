/* Module: sftrans1.dll
   Function: FUN_00488a90
   Address: 00488a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00488a90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    iVar1 = param_1 + 8;
  }
  FUN_004e4d70(*(undefined4 *)(iVar1 + 0x18),&DAT_00563494,0xffffffff,&local_18);
  GetClientRect(*(HWND *)(param_1 + 4),&local_10);
  local_14 = local_14 + 3;
  if (local_14 < 0x18) {
    local_14 = 0x17;
  }
  *(int *)(param_1 + 0x38) = local_14;
  iVar3 = local_10.top + 2;
  *(int *)(param_1 + 0x48) = iVar3;
  *(LONG *)(param_1 + 0x44) = local_10.left + 2;
  *(LONG *)(param_1 + 0x4c) = local_10.left + 0x19;
  iVar1 = local_10.right + -2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x38) + iVar3;
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x5c) = iVar1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x38) + iVar3;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x44);
  *(LONG *)(param_1 + 0xa0) = local_10.bottom + -2;
  *(int *)(param_1 + 0x9c) = iVar1;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x50);
  *(int *)(param_1 + 0x34) = iVar1 - *(int *)(param_1 + 0x94);
  iVar1 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x3c) = iVar1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x34) - iVar1;
  local_18 = *(int *)(param_1 + 0x38);
  uVar2 = ftol();
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  return;
}


