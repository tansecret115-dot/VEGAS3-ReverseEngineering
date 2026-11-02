/* Module: sfppack1.dll
   Function: FUN_5cdfdaaa
   Address: 5cdfdaaa
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdfdaaa(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 0;
}


