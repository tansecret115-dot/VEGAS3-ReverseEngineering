/* Module: mp3plug.dll
   Function: FUN_5f699df0
   Address: 5f699df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f699df0(HANDLE param_1,DWORD param_2,LPSTR param_3,int param_4)

{
  BOOL BVar1;
  DWORD local_84;
  CHAR local_80 [128];
  
  BVar1 = ReadFile(param_1,local_80,param_2,&local_84,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  local_80[param_2] = '\0';
  lstrcpynA(param_3,local_80,param_4);
  param_3[param_4 + -1] = '\0';
  return 0;
}


