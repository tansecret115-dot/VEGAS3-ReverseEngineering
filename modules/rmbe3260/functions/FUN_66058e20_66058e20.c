/* Module: rmbe3260.dll
   Function: FUN_66058e20
   Address: 66058e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66058e20(undefined4 param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_66058f90(&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_8)(local_8,&DAT_66065bf8,param_1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


