/* Module: rmme3260.dll
   Function: FUN_66206b70
   Address: 66206b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66206b70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    return 0x80040007;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x40))(param_2);
  return uVar1;
}


