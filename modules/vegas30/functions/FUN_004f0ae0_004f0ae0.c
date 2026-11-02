/* Module: vegas30.exe
   Function: FUN_004f0ae0
   Address: 004f0ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004f0ae0(uchar *param_1,int param_2)

{
  LSTATUS LVar1;
  LPCSTR lpString1;
  int iVar2;
  int local_108;
  CHAR local_104 [260];
  
  local_108 = param_2;
  SfPrintF(local_104,"CLSID\\%s\\InprocServer32","{70A38600-EAC8-11D3-A570-0080296727A1}");
  LVar1 = RegQueryValueA((HKEY)&DAT_80000000,local_104,(LPSTR)param_1,&local_108);
  if (LVar1 == 0) {
    param_1[param_2 + -1] = '\0';
    lpString1 = (LPCSTR)_SfGetFileNamePtrA_4(param_1);
    iVar2 = lstrcmpiA(lpString1,"viscmain.dll");
    if ((iVar2 == 0) && (iVar2 = _SfDoesFileExist_4(param_1), iVar2 != 0)) {
      *lpString1 = '\0';
      _mbscat(param_1,(uchar *)"visc.exe");
      iVar2 = _SfDoesFileExist_4(param_1);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 2;
}


