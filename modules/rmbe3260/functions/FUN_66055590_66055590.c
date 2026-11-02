/* Module: rmbe3260.dll
   Function: FUN_66055590
   Address: 66055590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66055590(void *this,int *param_1,undefined4 *param_2)

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
      uVar2 = FUN_660559b0(param_1,param_2);
      return uVar2;
    }
  }
  return 0x80004005;
}


