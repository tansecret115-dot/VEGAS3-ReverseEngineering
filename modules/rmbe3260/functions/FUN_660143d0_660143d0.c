/* Module: rmbe3260.dll
   Function: FUN_660143d0
   Address: 660143d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_660143d0(void *param_1,int param_2,undefined4 param_3)

{
  int local_18 [3];
  char local_c [4];
  undefined1 local_8;
  
  strncpy(local_c,(char *)&param_2,4);
  local_8 = 0;
  FUN_6605b650(local_18);
  if (param_2 != 0) {
    FUN_6605b970(local_18,local_c);
    FUN_6605c020(local_18,param_3);
  }
  FUN_6605b670(param_1,local_18);
  FUN_6605b770(local_18);
  return param_1;
}


