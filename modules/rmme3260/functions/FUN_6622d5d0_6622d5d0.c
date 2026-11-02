/* Module: rmme3260.dll
   Function: FUN_6622d5d0
   Address: 6622d5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6622d5d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_66254740(*(void **)(param_1 + 0x10),param_2);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x24))(param_2);
  }
  return 0;
}


