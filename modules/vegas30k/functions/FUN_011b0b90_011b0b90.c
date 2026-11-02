/* Module: vegas30k.dll
   Function: FUN_011b0b90
   Address: 011b0b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011b0b90(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 3) & 4) == 0) {
    return 1;
  }
  uVar1 = (**(code **)(*param_1 + 100))(param_1);
  uVar2 = FUN_011aafa0(param_1);
  FUN_011aaf70(param_1,uVar2 & 0xfffffffb | 0x10);
  param_1[3] = param_1[3] & 0xfffffffbU | 0x10;
  return uVar1;
}


