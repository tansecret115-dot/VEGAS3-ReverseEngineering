/* Module: mcplug.dll
   Function: FUN_00417c80
   Address: 00417c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00417c80(int param_1,HMODULE param_2,uchar *param_3,DWORD param_4)

{
  LSTATUS LVar1;
  DWORD DVar2;
  uchar *_Source;
  LPCSTR lpString1;
  int iVar3;
  undefined4 uVar4;
  CHAR *iMaxLength;
  LPCSTR lpString2;
  HKEY local_318;
  uchar local_314 [4];
  DWORD local_310;
  BYTE local_30c [259];
  CHAR aCStack_209 [261];
  CHAR local_104 [260];
  
  uVar4 = 0;
  local_310 = 0x104;
  FUN_004195d0(DAT_00487ed8,(LPSTR)local_314,4);
  wsprintfA(aCStack_209 + 1,"%s\\%s","Software\\Sonic Foundry","Shared Information");
  RegOpenKeyExA((HKEY)0x80000002,aCStack_209 + 1,0,0x20019,&local_318);
  LVar1 = RegQueryValueExA(local_318,"HelpFolder",(LPDWORD)0x0,(LPDWORD)0x0,local_30c,&local_310);
  if (LVar1 != 0) goto LAB_00417dec;
  DVar2 = GetFileAttributesA((LPCSTR)local_30c);
  if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) goto LAB_00417dec;
  FUN_0042df30(local_30c,0x104);
  GetModuleFileNameA(param_2,local_104,param_4);
  _Source = (uchar *)FUN_0042dd20(local_104);
  _mbscat(local_30c,_Source);
  lpString1 = FUN_0042dd90((LPCSTR)local_30c);
  iMaxLength = aCStack_209 + (1 - (int)lpString1);
  if (param_1 == 0) {
    lpString2 = ".hlp";
LAB_00417da3:
    lstrcpynA(lpString1,lpString2,(int)iMaxLength);
    lpString1[(int)(iMaxLength + -1)] = '\0';
  }
  else if (param_1 == 1) {
    lpString2 = ".chm";
    goto LAB_00417da3;
  }
  _mbscpy(param_3,local_30c);
  iVar3 = FUN_00417e10(param_3,local_30c,(uint)iMaxLength,local_314);
  if (iVar3 != 0) {
    _mbscpy(param_3,local_30c);
  }
  uVar4 = 1;
LAB_00417dec:
  RegCloseKey(local_318);
  return uVar4;
}


