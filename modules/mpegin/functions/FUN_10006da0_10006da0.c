/* Module: mpegin.dll
   Function: FUN_10006da0
   Address: 10006da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006da0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),3);
  *(uint *)(param_1 + 0x1a0) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x1a4) = uVar1;
  if (uVar1 != 0) {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
    *(uint *)(param_1 + 0x1a8) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
    *(uint *)(param_1 + 0x1ac) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
    *(uint *)(param_1 + 0x1b0) = uVar1;
  }
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0xf);
  *(uint *)(param_1 + 0x1b4) = uVar1 >> 1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0xe);
  *(uint *)(param_1 + 0x1b8) = uVar1;
  return;
}


