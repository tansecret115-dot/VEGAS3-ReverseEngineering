/* Module: vegas30k.dll
   Function: _SfHelp_CreateHelpFilePath@16
   Address: 0103c290
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfHelp_CreateHelpFilePath_16(int param_1,HMODULE param_2,LPSTR param_3,DWORD param_4)

{
  LPSTR lpString1;
  int iVar1;
  LPSTR iMaxLength;
  LPCSTR lpString2;
  undefined1 local_108 [4];
  CHAR local_104 [260];
  
                    /* 0x3c290  1012  _SfHelp_CreateHelpFilePath@16 */
  local_108[0] = 0;
  _SfLang_GetLangAbbrev_12(DAT_0120e5c8,local_108,4);
  GetModuleFileNameA(param_2,param_3,param_4);
  lpString1 = (LPSTR)_SfGetFileNameExtensionPtrA_4(param_3);
  iMaxLength = param_3 + (param_4 - (int)lpString1);
  if (param_1 == 0) {
    lpString2 = ".hlp";
  }
  else {
    if (param_1 != 1) goto LAB_0103c309;
    lpString2 = ".chm";
  }
  lstrcpynA(lpString1,lpString2,(int)iMaxLength);
  lpString1[(int)(iMaxLength + -1)] = '\0';
LAB_0103c309:
  iVar1 = FUN_0103c0a0(param_3,local_104,0x104,local_108);
  if (iVar1 != 0) {
    lstrcpynA(param_3,local_104,(int)iMaxLength);
    param_3[(int)(iMaxLength + -1)] = '\0';
  }
  return;
}


