/* Module: sfmarket2.dll
   Function: FUN_0041a160
   Address: 0041a160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041a160(LPSTR param_1,int param_2)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 uVar3;
  BYTE *pBVar4;
  HKEY local_314;
  DWORD local_310;
  DWORD local_30c;
  CHAR local_308 [260];
  BYTE local_204 [516];
  
  pBVar4 = local_204;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    pBVar4[0] = '\0';
    pBVar4[1] = '\0';
    pBVar4[2] = '\0';
    pBVar4[3] = '\0';
    pBVar4 = pBVar4 + 4;
  }
  *pBVar4 = '\0';
  uVar3 = 0x80004005;
  local_310 = 0x201;
  wsprintfA(local_308,"%s%s","Software\\Sonic Foundry\\","Shared Information\\User Information");
  LVar1 = RegCreateKeyExA((HKEY)0x80000002,local_308,0,(LPSTR)0x0,0,0x20019,
                          (LPSECURITY_ATTRIBUTES)0x0,&local_314,(LPDWORD)0x0);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_314,"Last Name",(LPDWORD)0x0,&local_30c,local_204,&local_310);
    if (LVar1 == 0) {
      uVar3 = 0;
    }
    lstrcpynA(param_1,(LPCSTR)local_204,param_2);
    param_1[param_2 + -1] = '\0';
    RegCloseKey(local_314);
    return uVar3;
  }
  return 0x80004005;
}


