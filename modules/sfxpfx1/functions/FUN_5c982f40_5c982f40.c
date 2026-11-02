/* Module: sfxpfx1.dll
   Function: FUN_5c982f40
   Address: 5c982f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c982f40(LPSTR param_1,int param_2)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 uVar3;
  BYTE *pBVar4;
  HKEY local_210;
  DWORD local_20c;
  DWORD local_208;
  BYTE local_204 [256];
  CHAR local_104 [260];
  
  pBVar4 = local_204;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    pBVar4[0] = '\0';
    pBVar4[1] = '\0';
    pBVar4[2] = '\0';
    pBVar4[3] = '\0';
    pBVar4 = pBVar4 + 4;
  }
  uVar3 = 0x80004005;
  local_20c = 0x100;
  wsprintfA(local_104,"%s%s","Software\\Sonic Foundry\\","Shared Information\\User Information");
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,local_104,0,(LPSTR)0x0,0,0x20019,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_210,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_210,"Company Name",(LPDWORD)0x0,&local_208,local_204,&local_20c);
    if (LVar1 == 0) {
      uVar3 = 0;
      lstrcpynA(param_1,(LPCSTR)local_204,param_2);
      param_1[param_2 + -1] = '\0';
    }
    RegCloseKey(local_210);
  }
  return uVar3;
}


