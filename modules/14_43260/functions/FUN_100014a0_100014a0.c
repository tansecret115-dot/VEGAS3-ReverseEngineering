/* Module: 14_43260.dll
   Function: FUN_100014a0
   Address: 100014a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_100014a0(HMODULE param_1,int param_2)

{
  DWORD DVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    thunk_FUN_10006360();
  }
  else if (param_2 == 1) {
    FUN_10006330(param_1,0);
    DVar1 = GetModuleFileNameA(param_1,&DAT_10015db0,0x104);
    if (DVar1 != 0) {
      pcVar2 = strrchr(&DAT_10015db0,0x5c);
      if (pcVar2 != (char *)0x0) {
        pcVar2[1] = '\0';
        return 1;
      }
    }
  }
  return 1;
}


