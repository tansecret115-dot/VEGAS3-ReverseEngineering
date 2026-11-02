/* Module: sfppack3.dll
   Function: FUN_5cc7343a
   Address: 5cc7343a
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc7343a(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return 0;
}


