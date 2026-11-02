/* Module: rmbe3260.dll
   Function: FUN_66022210
   Address: 66022210
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66022210(undefined4 param_1)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = FUN_66022530(&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_8)(local_8,&DAT_66065af8,param_1);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}


