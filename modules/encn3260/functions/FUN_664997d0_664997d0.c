/* Module: encn3260.dll
   Function: FUN_664997d0
   Address: 664997d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664997d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x78) + 4))();
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x5c))(param_2);
  iVar1 = FUN_66497130(iVar1);
  (**(code **)(**(int **)(param_1 + 0x78) + 8))();
  return iVar1;
}


