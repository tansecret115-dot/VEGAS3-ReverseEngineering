/* Module: mpegin.dll
   Function: FUN_10006950
   Address: 10006950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006950(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),10);
  *(uint *)(param_1 + 0x1bc) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),3);
  *(uint *)(param_1 + 0x1c0) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x10);
  *(uint *)(param_1 + 0x1c8) = uVar1;
  if ((*(int *)(param_1 + 0x1c0) == 2) || (*(int *)(param_1 + 0x1c0) == 3)) {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
    *(uint *)(*(int *)(param_1 + 0x12e54) + 0x4c) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),3);
    *(uint *)(*(int *)(param_1 + 0x12e54) + 0x50) = uVar1;
  }
  if (*(int *)(param_1 + 0x1c0) == 3) {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
    *(uint *)(*(int *)(param_1 + 0x12e54) + 0x54) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),3);
    *(uint *)(*(int *)(param_1 + 0x12e54) + 0x58) = uVar1;
  }
  FUN_10007340(param_1);
  FUN_10006a50(param_1);
  return;
}


