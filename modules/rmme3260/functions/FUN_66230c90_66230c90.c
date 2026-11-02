/* Module: rmme3260.dll
   Function: FUN_66230c90
   Address: 66230c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66230c90(void *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 4))(param_2);
  FUN_66250b60((void *)((int)param_1 + 0x48),param_2);
  (**(code **)(**(int **)((int)param_1 + 0x91) + 4))();
  iVar1 = FUN_66231130(param_1);
  (**(code **)(**(int **)((int)param_1 + 0x91) + 8))();
  FUN_6622d650(iVar1);
  return;
}


