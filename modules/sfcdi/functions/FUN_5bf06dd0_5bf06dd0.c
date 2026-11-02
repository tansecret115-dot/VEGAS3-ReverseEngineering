/* Module: sfcdi.dll
   Function: FUN_5bf06dd0
   Address: 5bf06dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf06dd0(uchar *param_1,uchar *param_2,int param_3)

{
  DAT_5bf66058 = FindFirstFileA((LPCSTR)param_1,(LPWIN32_FIND_DATAA)&DAT_5bf66060);
  if (DAT_5bf66058 == (HANDLE)0xffffffff) {
    return 0;
  }
  if (param_3 != 0) {
    FUN_5bf23470(param_1,param_2,0x104);
    _mbscat(param_2,&DAT_5bf6608c);
    return 1;
  }
  _mbscpy(param_2,&DAT_5bf6608c);
  return 1;
}


