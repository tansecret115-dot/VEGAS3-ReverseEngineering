/* Module: encn3260.dll
   Function: FUN_664981a0
   Address: 664981a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664981a0(int *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 4))(param_2);
  FUN_664baab0((void *)((int)param_1 + 0x2a),param_2);
  FUN_66498880((int)param_1);
  (**(code **)(*(int *)param_1[0x18] + 4))();
  iVar1 = FUN_66498500(param_1);
  (**(code **)(*(int *)param_1[0x18] + 8))();
  FUN_66497130(iVar1);
  return;
}


