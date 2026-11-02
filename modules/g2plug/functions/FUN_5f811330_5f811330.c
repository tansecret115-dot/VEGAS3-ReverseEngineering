/* Module: g2plug.dll
   Function: FUN_5f811330
   Address: 5f811330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f811330(BYTE *param_1,int param_2)

{
  LSTATUS LVar1;
  DWORD DVar2;
  char *pcVar3;
  int iVar4;
  HKEY local_210;
  DWORD local_20c;
  CHAR local_208 [260];
  CHAR local_104 [260];
  
  local_20c = 0x104;
  wsprintfA(local_104,"%s\\%s","Software\\Sonic Foundry","Shared Information");
  RegOpenKeyExA((HKEY)0x80000002,local_104,0,0x20019,&local_210);
  LVar1 = RegQueryValueExA(local_210,"HelpFolder",(LPDWORD)0x0,(LPDWORD)0x0,param_1,&local_20c);
  if (LVar1 == 0) {
    DVar2 = GetFileAttributesA((LPCSTR)param_1);
    if (DVar2 == 0x10) {
      FUN_5f82a710(param_1,4);
      _mbscat(param_1,(uchar *)"sfrealg2.hlp");
      goto LAB_5f811422;
    }
  }
  GetModuleFileNameA(DAT_5f877460,local_208,0x104);
  pcVar3 = FUN_5f82a500(local_208);
  *pcVar3 = '\0';
  iVar4 = lstrlenA("sfrealg2.hlp");
  lstrcpynA((LPSTR)param_1,local_208,param_2 - iVar4);
  param_1[(param_2 - iVar4) + -1] = '\0';
  _mbscat(param_1,(uchar *)"sfrealg2.hlp");
LAB_5f811422:
  RegCloseKey(local_210);
  return;
}


