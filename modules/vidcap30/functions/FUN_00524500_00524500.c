/* Module: vidcap30.exe
   Function: FUN_00524500
   Address: 00524500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00524500(undefined4 param_1,uchar *param_2,uchar *param_3)

{
  LSTATUS LVar1;
  HKEY local_10c;
  LONG local_108;
  CHAR local_104 [260];
  
  local_108 = 0x104;
  *param_3 = '\0';
  SfPrintF(local_104,"Software\\Classes\\CLSID\\%s",param_1);
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,local_104,0,0x20019,&local_10c);
  if (LVar1 != 0) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000002,local_104,0,0x20019,&local_10c);
    if (LVar1 != 0) goto LAB_00524590;
  }
  RegQueryValueA(local_10c,(LPCSTR)0x0,(LPSTR)param_3,&local_108);
  RegCloseKey(local_10c);
LAB_00524590:
  if (*param_3 == '\0') {
    _mbscpy(param_3,param_2);
  }
  lstrlenA((LPCSTR)param_3);
  return;
}


