/* Module: encn3260.dll
   Function: FUN_664d4ce0
   Address: 664d4ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d4ce0(void *this,int *param_1,void *param_2)

{
  int iVar1;
  
  FUN_664d8100((void *)param_1[7],(int)param_2);
  if (param_2 != (void *)0x0) {
    operator_delete(param_2);
  }
  param_1[8] = param_1[8] + -1;
  iVar1 = (**(code **)(*param_1 + 0x54))();
  if ((iVar1 != 0) && (param_1[8] == 0)) {
    FUN_664d3d10(this,(int *)param_1[9],param_1[10],param_1,param_1[0xb]);
  }
  return 0;
}


