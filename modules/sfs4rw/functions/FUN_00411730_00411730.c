/* Module: sfs4rw.dll
   Function: FUN_00411730
   Address: 00411730
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_00411730(void *param_1)

{
  uint uVar1;
  DWORD local_c;
  int local_8;
  DWORD local_4;
  
  local_c = 4;
  uVar1 = FUN_00414880(param_1,(char *)0x0,"8",&local_4,(byte *)&local_8,&local_c);
  if ((int)uVar1 < 0) {
    return false;
  }
  return local_8 == 1;
}


