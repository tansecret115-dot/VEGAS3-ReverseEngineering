/* Module: rmbe3260.dll
   Function: FUN_66053c20
   Address: 66053c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66053c20(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = (int *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_c,&local_8,param_1);
  if (iVar1 != 0) {
    return 0x80004005;
  }
  if (local_8 == (int *)0x0) {
    return 0x80004005;
  }
  iVar1 = (**(code **)(*local_8 + 0x5c))();
  if (iVar1 != 0) {
    return 0x80004005;
  }
  iVar1 = (**(code **)(*local_8 + 0x28))();
  if (iVar1 != 4) {
    return 0x80040284;
  }
  (**(code **)(*local_8 + 0xc))(param_2,4);
  uVar2 = (**(code **)(*(int *)this + 4))(local_c,local_8);
  return uVar2;
}


