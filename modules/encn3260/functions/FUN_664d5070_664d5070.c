/* Module: encn3260.dll
   Function: FUN_664d5070
   Address: 664d5070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d5070(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_10,&local_8,param_1);
  if ((iVar1 == 0) && (local_8 != (int *)0x0)) {
    iVar1 = (**(code **)(*local_8 + 0x28))();
    if (iVar1 == 1) {
      (**(code **)(*local_8 + 0x4c))(&local_c);
      if (local_c != (int *)0x0) {
        uVar2 = (**(code **)(*local_c + 0x28))();
        return uVar2;
      }
    }
  }
  return 0;
}


