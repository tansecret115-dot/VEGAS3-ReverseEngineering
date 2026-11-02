/* Module: sfcdi.dll
   Function: FUN_5bf08170
   Address: 5bf08170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf08170(HMODULE param_1)

{
  char *pcVar1;
  int iVar2;
  uchar local_30c [260];
  uchar local_208 [260];
  uchar local_104 [260];
  
  FUN_5bf07ee0();
  GetModuleFileNameA(param_1,(LPSTR)local_104,0x104);
  pcVar1 = FUN_5bf230b0((LPCSTR)local_104);
  *pcVar1 = '\0';
  _mbscpy(local_30c,local_104);
  _mbscat(local_30c,(uchar *)s___ldd_5bf62090);
  iVar2 = FUN_5bf06dd0(local_30c,local_208,1);
  if (iVar2 != 0) {
    FUN_5bf080e0((LPCSTR)local_208);
    iVar2 = FUN_5bf06e40(local_30c,local_208,1);
    while (iVar2 != 0) {
      FUN_5bf080e0((LPCSTR)local_208);
      iVar2 = FUN_5bf06e40(local_30c,local_208,1);
    }
    FindClose(DAT_5bf66058);
  }
  return 0;
}


