/* Module: encn3260.dll
   Function: FUN_664d4fc0
   Address: 664d4fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d4fc0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_8,&local_c,param_1);
  if (((iVar1 == 0) && (local_8 != 0)) && (*(int **)(local_8 + 0x10) != (int *)0x0)) {
    iVar1 = (**(code **)(**(int **)(local_8 + 0x10) + 0x20))();
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 8);
    }
  }
  return 0;
}


