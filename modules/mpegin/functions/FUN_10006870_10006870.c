/* Module: mpegin.dll
   Function: FUN_10006870
   Address: 10006870
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10006870(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0xc) = 0;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 600) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),5);
  *(uint *)(param_1 + 0x25c) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),7);
  *(uint *)(param_1 + 0x260) = uVar1 >> 1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),6);
  *(uint *)(param_1 + 0x264) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),6);
  *(uint *)(param_1 + 0x268) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x26c) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x128),1);
  *(uint *)(param_1 + 0x270) = uVar1;
  FUN_10006a50(param_1);
  return;
}


