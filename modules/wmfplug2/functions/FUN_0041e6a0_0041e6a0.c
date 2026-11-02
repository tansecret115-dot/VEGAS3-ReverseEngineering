/* Module: wmfplug2.dll
   Function: FUN_0041e6a0
   Address: 0041e6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041e6a0(BYTE *param_1,size_t param_2)

{
  LSTATUS LVar1;
  DWORD DVar2;
  HKEY local_318;
  uchar local_314 [4];
  DWORD local_310;
  CHAR local_30c [260];
  CHAR local_208 [260];
  uchar local_104 [260];
  
  local_310 = 0x104;
  wsprintfA(local_208,"%s\\%s","Software\\Sonic Foundry","Shared Information");
  RegOpenKeyExA((HKEY)0x80000002,local_208,0,0x20019,&local_318);
  LVar1 = RegQueryValueExA(local_318,"HelpFolder",(LPDWORD)0x0,(LPDWORD)0x0,param_1,&local_310);
  if (LVar1 == 0) {
    DVar2 = GetFileAttributesA((LPCSTR)param_1);
    if (DVar2 == 0x10) {
      FUN_0042f550(param_1,4);
      _mbsnbcat(param_1,(uchar *)"wmfplug.hlp",param_2);
      goto LAB_0041e7a9;
    }
  }
  GetModuleFileNameA(DAT_00489d50,local_30c,0x104);
  _splitpath(local_30c,(char *)local_314,(char *)local_104,(char *)0x0,(char *)0x0);
  _mbsnbcpy(param_1,local_314,param_2);
  _mbsnbcat(param_1,local_104,param_2);
  _mbsnbcat(param_1,(uchar *)"wmfplug.hlp",param_2);
LAB_0041e7a9:
  RegCloseKey(local_318);
  return;
}


