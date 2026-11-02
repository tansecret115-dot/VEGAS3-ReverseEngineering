/* Module: extmondrv.dll
   Function: FUN_00402980
   Address: 00402980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402980(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x4c))(*(int **)(param_1 + 8),param_1 + 0xc,param_1 + 0x10)
  ;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}


