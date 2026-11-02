/* Module: vfplugs.dll
   Function: FUN_00428a50
   Address: 00428a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00428a50(int param_1,HMODULE param_2,uchar *param_3,DWORD param_4)

{
  LPCSTR lpString1;
  int iVar1;
  uchar *iMaxLength;
  LPCSTR lpString2;
  uchar local_108 [4];
  uchar local_104 [260];
  
  local_108[0] = '\0';
  FUN_0042ce30(DAT_00494a78,(LPSTR)local_108,4);
  GetModuleFileNameA(param_2,(LPSTR)param_3,param_4);
  lpString1 = FUN_004516e0((LPCSTR)param_3);
  iMaxLength = param_3 + (param_4 - (int)lpString1);
  if (param_1 == 0) {
    lpString2 = ".hlp";
  }
  else {
    if (param_1 != 1) goto LAB_00428ac9;
    lpString2 = ".chm";
  }
  lstrcpynA(lpString1,lpString2,(int)iMaxLength);
  lpString1[(int)(iMaxLength + -1)] = '\0';
LAB_00428ac9:
  iVar1 = FUN_00428860(param_3,local_104,0x104,local_108);
  if (iVar1 != 0) {
    lstrcpynA((LPSTR)param_3,(LPCSTR)local_104,(int)iMaxLength);
    param_3[(int)(iMaxLength + -1)] = '\0';
  }
  return;
}


