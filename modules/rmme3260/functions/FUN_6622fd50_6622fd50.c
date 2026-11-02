/* Module: rmme3260.dll
   Function: FUN_6622fd50
   Address: 6622fd50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6622fd50(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((*(byte *)((int)param_1 + 0x6f) & 1) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,0,0);
    if (iVar1 != 0) {
      return -0x7ffbfff7;
    }
  }
  (**(code **)(*param_2 + 4))(param_2);
  FUN_66250b60((void *)((int)param_1 + 0x45),param_2);
  (**(code **)(*(int *)param_1[0x1e] + 4))();
  iVar1 = FUN_66230070((int)param_1);
  (**(code **)(*(int *)param_1[0x1e] + 8))();
  iVar1 = FUN_6622d650(iVar1);
  return iVar1;
}


