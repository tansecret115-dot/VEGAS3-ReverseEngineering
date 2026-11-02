/* Module: sftrans1.dll
   Function: FUN_004c54f0
   Address: 004c54f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c54f0(int param_1,HMODULE param_2,LPSTR param_3,DWORD param_4)

{
  LPSTR lpString1;
  int iVar1;
  LPSTR iMaxLength;
  LPCSTR lpString2;
  undefined1 local_108 [4];
  CHAR local_104 [260];
  
  local_108[0] = 0;
  FUN_004c98d0(DAT_0057b888,local_108,4);
  GetModuleFileNameA(param_2,param_3,param_4);
  lpString1 = (LPSTR)FUN_00509070(param_3);
  iMaxLength = param_3 + (param_4 - (int)lpString1);
  if (param_1 == 0) {
    lpString2 = ".hlp";
  }
  else {
    if (param_1 != 1) goto LAB_004c5569;
    lpString2 = ".chm";
  }
  lstrcpynA(lpString1,lpString2,(int)iMaxLength);
  lpString1[(int)(iMaxLength + -1)] = '\0';
LAB_004c5569:
  iVar1 = FUN_004c5300(param_3,local_104,0x104,local_108);
  if (iVar1 != 0) {
    lstrcpynA(param_3,local_104,(int)iMaxLength);
    param_3[(int)(iMaxLength + -1)] = '\0';
  }
  return;
}


