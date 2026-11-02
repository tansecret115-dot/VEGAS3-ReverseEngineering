/* Module: encn3260.dll
   Function: FUN_664d4df0
   Address: 664d4df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d4df0(void *this,int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = (int *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_c,&local_8,param_1);
  if ((iVar1 == 0) && (local_8 != (int *)0x0)) {
    iVar1 = (**(code **)(*local_8 + 0x28))();
    if (iVar1 == 1) {
      param_1 = (int *)0x0;
      (**(code **)(*local_8 + 0x4c))(&param_1);
      uVar2 = FUN_664d5210(param_1,param_2);
      return uVar2;
    }
  }
  return 0x80004005;
}


