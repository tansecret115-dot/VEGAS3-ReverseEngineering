/* Module: sfppack2.dll
   Function: FUN_5cd3c681
   Address: 5cd3c681
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd3c681(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  return 0;
}


