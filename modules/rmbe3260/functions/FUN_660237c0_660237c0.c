/* Module: rmbe3260.dll
   Function: FUN_660237c0
   Address: 660237c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_660237c0(void *this,int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  piVar1 = (int *)FUN_66025250();
  (**(code **)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x40))(param_1 + 0x10,&local_8);
    (**(code **)(piVar1[4] + 0x10))(piVar1 + 4,local_8);
  }
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 0x10) + 0x40))(param_2 + 0x10,&local_c);
    (**(code **)(piVar1[4] + 0x18))(piVar1 + 4,local_c);
  }
  (**(code **)(piVar1[4] + 0x20))(piVar1 + 4,param_3);
  FUN_6605cf30((void *)((int)this + 0x5c),*(int *)((int)this + 0x60),piVar1);
  return;
}


