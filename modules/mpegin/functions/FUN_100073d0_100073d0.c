/* Module: mpegin.dll
   Function: FUN_100073d0
   Address: 100073d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100073d0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x240) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
  *(uint *)(param_1 + 0x244) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x248) = uVar1;
  FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x128),8);
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x15);
  *(uint *)(param_1 + 0x24c) = uVar1 >> 1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x17);
  *(uint *)(param_1 + 0x250) = uVar1 >> 1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),0x16);
  *(uint *)(param_1 + 0x254) = uVar1;
  return;
}


