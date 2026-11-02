/* Module: rmme3260.dll
   Function: FUN_6622fe50
   Address: 6622fe50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6622fe50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x78) + 4))();
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x5c))(param_2);
  iVar1 = FUN_6622d650(iVar1);
  (**(code **)(**(int **)(param_1 + 0x78) + 8))();
  return iVar1;
}


