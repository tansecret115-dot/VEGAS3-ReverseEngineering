/* Module: rmme3260.dll
   Function: FUN_66237a80
   Address: 66237a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66237a80(int *param_1,int *param_2)

{
  uint *puVar1;
  int local_8;
  
  (**(code **)*param_1)(param_1,&DAT_6626abe8,&param_1);
  puVar1 = (uint *)(**(code **)(*param_1 + 0x1c))(param_1);
  if (puVar1 != (uint *)0x0) {
    FUN_66251030(&DAT_6627cea0,*puVar1,&local_8);
    *param_2 = local_8;
    (**(code **)(*param_1 + 8))(param_1);
    return 0;
  }
  (**(code **)(*param_1 + 8))(param_1);
  return 0x80004005;
}


