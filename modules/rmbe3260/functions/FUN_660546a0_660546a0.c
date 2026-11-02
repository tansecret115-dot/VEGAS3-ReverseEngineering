/* Module: rmbe3260.dll
   Function: FUN_660546a0
   Address: 660546a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660546a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_c,&local_8,param_1);
  if (iVar1 != 0) {
    return 0x80004005;
  }
  uVar2 = (**(code **)(*(int *)this + 0x1c))(local_8);
  return uVar2;
}


