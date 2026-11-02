/* Module: rmbe3260.dll
   Function: FUN_66016940
   Address: 66016940
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_66016940(void *param_1,int param_2,undefined4 param_3)

{
  int local_18 [3];
  char local_c [4];
  undefined1 local_8;
  
  strncpy(local_c,(char *)&param_2,4);
  local_8 = 0;
  FUN_6605b650(local_18);
  if (param_2 != 0) {
    FUN_6605bfd0(local_18,&DAT_6606ce04);
  }
  FUN_6605b670(param_1,local_18);
  FUN_6605b770(local_18);
  return param_1;
}


