/* Module: g2plug.dll
   Function: SfG2_PopulateSysTemplates
   Address: 5f811070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfG2_PopulateSysTemplates(void) */

long SfG2_PopulateSysTemplates(void)

{
  LSTATUS LVar1;
  int iVar2;
  HRSRC pHVar3;
  HGLOBAL hResData;
  uchar *puVar4;
  ulong uVar5;
  undefined **ppuVar6;
  HKEY local_c;
  HKEY local_8;
  uint local_4;
  
                    /* 0x11070  32  ?SfG2_PopulateSysTemplates@@YGJXZ */
  LVar1 = RegCreateKeyA((HKEY)0x80000002,
                        "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates",&local_8);
  if (LVar1 != 0) {
    return -0x7fffbffb;
  }
  LVar1 = RegOpenKeyA(local_8,"System",&local_c);
  if (LVar1 == 0) {
    iVar2 = FUN_5f810960(local_c,"Version",(LPBYTE)&local_4);
    if ((-1 < iVar2) && (0x3ea < local_4)) {
      RegCloseKey(local_c);
      RegCloseKey(local_8);
      return 0;
    }
    RegCloseKey(local_c);
    FUN_5f82da40(local_8,"System");
  }
  LVar1 = RegCreateKeyA(local_8,"System",&local_c);
  if (LVar1 == 0) {
    local_4 = 0x3eb;
    RegSetValueExA(local_c,"Version",0,4,(BYTE *)&local_4,4);
    RegCloseKey(local_c);
  }
  RegCloseKey(local_8);
  ppuVar6 = (undefined **)&DAT_5f8763d8;
  do {
    pHVar3 = (HRSRC)FUN_5f817530(DAT_5f87746c,(LPCSTR)(uint)*(ushort *)ppuVar6,(LPCSTR)0xa);
    if (pHVar3 != (HRSRC)0x0) {
      hResData = (HGLOBAL)FUN_5f817580(DAT_5f87746c,pHVar3);
      if (hResData != (HGLOBAL)0x0) {
        puVar4 = LockResource(hResData);
        if (puVar4 != (uchar *)0x0) {
          uVar5 = FUN_5f8175c0(DAT_5f87746c,pHVar3);
          SfG2_RestoreTemplateData(puVar4,uVar5);
        }
      }
    }
    ppuVar6 = (undefined **)((int)ppuVar6 + 2);
  } while (ppuVar6 < &PTR_s_The_reason_for_the_error_could_n_5f8763f8);
  return 0;
}


