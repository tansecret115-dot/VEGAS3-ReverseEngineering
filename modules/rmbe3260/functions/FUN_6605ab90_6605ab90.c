/* Module: rmbe3260.dll
   Function: FUN_6605ab90
   Address: 6605ab90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6605ab90(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = (void *)0x0;
  iVar1 = (**(code **)(*(int *)(param_1 + -0x10) + 0x2c))(param_1 + -0x10,param_2,&local_c,&local_8)
  ;
  if ((-1 < iVar1) && (local_8 != 0)) {
    (**(code **)(*(int *)(param_1 + 0x20) + 0xc))(local_8);
    if (local_c != (void *)0x0) {
      operator_delete(local_c);
    }
  }
  return 0;
}


