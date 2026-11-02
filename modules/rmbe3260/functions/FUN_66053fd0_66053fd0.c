/* Module: rmbe3260.dll
   Function: FUN_66053fd0
   Address: 66053fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66053fd0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = (int *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_c,&local_8,param_1);
  if ((iVar1 != 0) || (local_8 == (int *)0x0)) {
    return 0x80004005;
  }
  iVar1 = (**(code **)(*local_8 + 0x28))();
  if (iVar1 == 5) {
    uVar2 = (**(code **)(*local_8 + 0x34))(param_2,5);
    return uVar2;
  }
  if (local_8[0xc] != 0) {
    uVar2 = (**(code **)(*local_8 + 0x34))(param_2,4);
    return uVar2;
  }
  return 0x80040284;
}


