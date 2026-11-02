/* Module: sfpagepeel.dll
   Function: FUN_00423a30
   Address: 00423a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423a30(int param_1,HMODULE param_2,uchar *param_3,DWORD param_4)

{
  LPCSTR lpString1;
  int iVar1;
  uchar *iMaxLength;
  LPCSTR lpString2;
  uchar local_108 [4];
  uchar local_104 [260];
  
  local_108[0] = '\0';
  FUN_00427e10(DAT_0047d9f0,(LPSTR)local_108,4);
  GetModuleFileNameA(param_2,(LPSTR)param_3,param_4);
  lpString1 = FUN_0043bd90((LPCSTR)param_3);
  iMaxLength = param_3 + (param_4 - (int)lpString1);
  if (param_1 == 0) {
    lpString2 = ".hlp";
  }
  else {
    if (param_1 != 1) goto LAB_00423aa9;
    lpString2 = ".chm";
  }
  lstrcpynA(lpString1,lpString2,(int)iMaxLength);
  lpString1[(int)(iMaxLength + -1)] = '\0';
LAB_00423aa9:
  iVar1 = FUN_00423840(param_3,local_104,0x104,local_108);
  if (iVar1 != 0) {
    lstrcpynA((LPSTR)param_3,(LPCSTR)local_104,(int)iMaxLength);
    param_3[(int)(iMaxLength + -1)] = '\0';
  }
  return;
}


