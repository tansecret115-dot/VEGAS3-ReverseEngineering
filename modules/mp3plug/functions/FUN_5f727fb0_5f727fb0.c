/* Module: mp3plug.dll
   Function: FUN_5f727fb0
   Address: 5f727fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f728193) */

int FUN_5f727fb0(uint param_1,undefined4 param_2,BYTE *param_3,BYTE *param_4)

{
  LSTATUS LVar1;
  int iVar2;
  DWORD cbData;
  code *pcVar3;
  HKEY pHStack_15c;
  undefined4 uStack_158;
  HKEY pHStack_154;
  HKEY pHStack_150;
  undefined4 uVar4;
  HKEY local_118 [2];
  HKEY local_110 [3];
  CHAR local_104 [192];
  uint uStack_44;
  uint auStack_40 [16];
  
  local_118[0] = (HKEY)0x0;
  FUN_5f727d10(param_1,local_104,0x104);
  pcVar3 = RegCreateKeyExA_exref;
  LVar1 = RegCreateKeyExA((HKEY)0x80000000,local_104,0,(LPSTR)0x0,0,0x2001f,
                          (LPSECURITY_ATTRIBUTES)0x0,local_118,(LPDWORD)0x0);
  if (LVar1 == 0) {
    iVar2 = lstrlenA((LPCSTR)param_3);
    RegSetValueExA(local_118[0],(LPCSTR)0x0,0,1,param_3,iVar2 + 1);
    pHStack_150 = (HKEY)0x5f728058;
    LVar1 = RegCreateKeyExA(local_118[0],"InProcServer32",0,(LPSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,local_110,(LPDWORD)0x0);
    if (LVar1 == 0) {
      iVar2 = lstrlenA((LPCSTR)param_4);
      RegSetValueExA(local_110[0],(LPCSTR)0x0,0,1,param_4,iVar2 + 1);
      cbData = lstrlenA("Apartment");
      RegSetValueExA(local_110[0],"ThreadingModel",0,1,(BYTE *)"Apartment",cbData);
      RegCloseKey(local_110[0]);
      local_110[0] = (HKEY)0x0;
      pcVar3 = RegCreateKeyExA_exref;
    }
    uVar4 = 0;
    pHStack_150 = (HKEY)0x5f7280cb;
    (*pcVar3)();
    pHStack_154 = (HKEY)&stack0xfffffed4;
    pHStack_150 = (HKEY)0x0;
    uStack_158 = 0;
    pHStack_15c = (HKEY)0x2001f;
    iVar2 = (*pcVar3)(uVar4,"Pins\\Output",0,0);
    if (iVar2 == 0) {
      RegCloseKey(pHStack_150);
      pHStack_150 = (HKEY)0x0;
    }
    iVar2 = FUN_5f728900(pHStack_154,(HKEY)"00-BQ4XD-F5ZWL-S37RQ",(int *)&pHStack_15c);
    if (-1 < iVar2) {
      auStack_40[0] = auStack_40[0] ^ (uStack_44 << 0x10 | uStack_44);
      FUN_5f728a90(pHStack_15c,"D2",4,(byte *)auStack_40,4);
      FUN_5f728c00(pHStack_15c,1);
      RegCloseKey(pHStack_15c);
      pHStack_15c = (HKEY)0x0;
      iVar2 = 0;
      FUN_5f728c70((HKEY)0x0);
      FUN_5f726950(0);
    }
    if (pHStack_15c != (HKEY)0x0) {
      RegCloseKey(pHStack_15c);
    }
    if (pHStack_154 != (HKEY)0x0) {
      RegCloseKey(pHStack_154);
    }
    return iVar2;
  }
  return -0x7ff8fffb;
}


