/* Module: encn3260.dll
   Function: FUN_664a1db0
   Address: 664a1db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a1db0(int *param_1,int *param_2)

{
  uint *puVar1;
  int local_8;
  
  (**(code **)*param_1)(param_1,&DAT_664dcda0,&param_1);
  puVar1 = (uint *)(**(code **)(*param_1 + 0x1c))(param_1);
  if (puVar1 != (uint *)0x0) {
    FUN_664c3eb0(&DAT_664f0698,*puVar1,&local_8);
    *param_2 = local_8;
    (**(code **)(*param_1 + 8))(param_1);
    return 0;
  }
  (**(code **)(*param_1 + 8))(param_1);
  return 0x80004005;
}


