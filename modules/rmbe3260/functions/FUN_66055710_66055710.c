/* Module: rmbe3260.dll
   Function: FUN_66055710
   Address: 66055710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66055710(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)this + 0x2c))(&local_8,&local_c,param_1);
  if ((iVar1 == 0) && (local_8 != 0)) {
    return *(undefined4 *)(local_8 + 8);
  }
  return 0;
}


