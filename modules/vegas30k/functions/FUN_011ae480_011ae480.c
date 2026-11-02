/* Module: vegas30k.dll
   Function: FUN_011ae480
   Address: 011ae480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011ae480(int param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = 0; (*(int *)(param_1 + 8) != 0 && (uVar1 < param_2)); uVar1 = uVar1 + 1) {
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x18);
  return 0;
}


