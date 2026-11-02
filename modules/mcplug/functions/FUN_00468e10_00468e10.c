/* Module: mcplug.dll
   Function: FUN_00468e10
   Address: 00468e10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_00468e10(void *param_1)

{
  uint uVar1;
  DWORD local_c;
  int local_8;
  DWORD local_4;
  
  local_c = 4;
  uVar1 = FUN_0046bf60(param_1,(char *)0x0,"8",&local_4,(byte *)&local_8,&local_c);
  if ((int)uVar1 < 0) {
    return false;
  }
  return local_8 == 1;
}


