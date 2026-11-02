/* Module: Setup.exe
   Function: _SfAddExtensionToPathName@12
   Address: 00411df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfAddExtensionToPathName_12(LPCSTR param_1,int param_2,uchar *param_3)

{
  char *pcVar1;
  LPCSTR lpString;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar local_104 [260];
  
                    /* 0x11df0  78  _SfAddExtensionToPathName@12 */
  if (*param_3 == '.') {
    param_3 = param_3 + 1;
  }
  _mbscpy(local_104,".");
  _mbscat(local_104,param_3);
  lstrlenA((LPCSTR)local_104);
  pcVar1 = _SfGetFileNamePtrA_4(param_1);
  lpString = _SfGetFileNameExtensionPtrA_4(pcVar1);
  iVar2 = lstrlenA(lpString);
  iVar3 = lstrlenA(param_1);
  iVar4 = lstrcmpiA((LPCSTR)local_104,lpString);
  if (iVar4 != 0) {
    iVar2 = (param_2 - (iVar3 - iVar2)) - iVar2;
    lstrcpynA(lpString,(LPCSTR)local_104,iVar2);
    lpString[iVar2 + -1] = '\0';
  }
  lstrlenA(param_1);
  return;
}


