/* Module: rmme3260.dll
   Function: FUN_6622e7e0
   Address: 6622e7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6622e7e0(int *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 4))(param_2);
  FUN_66250b60((void *)((int)param_1 + 0x2a),param_2);
  FUN_6622eec0((int)param_1);
  (**(code **)(*(int *)param_1[0x18] + 4))();
  iVar1 = FUN_6622eb40(param_1);
  (**(code **)(*(int *)param_1[0x18] + 8))();
  FUN_6622d650(iVar1);
  return;
}


