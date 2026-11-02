/* Module: rmbe3260.dll
   Function: FUN_660554e0
   Address: 660554e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660554e0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = (int *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_c,&local_8,param_1);
  if ((iVar1 == 0) && (local_8 != (int *)0x0)) {
    uVar2 = (**(code **)(*local_8 + 0x28))();
    return uVar2;
  }
  return 0;
}


