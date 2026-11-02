/* Module: vegas30.exe
   Function: FUN_0048f3b0
   Address: 0048f3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048f3b0(uint *param_1)

{
  uint *puVar1;
  HGLOBAL pvVar2;
  LPSTR pCVar3;
  uint uVar4;
  int iVar5;
  LPVOID pvVar6;
  int iVar7;
  code *pcVar8;
  SIZE_T dwBytes;
  char *lpString2;
  
  puVar1 = param_1;
  pcVar8 = GlobalHandle_exref;
  if ((LPCVOID)param_1[4] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[4]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[4]);
    GlobalFree(pvVar2);
  }
  param_1[4] = 0;
  dwBytes = *param_1 * 0x78;
  pvVar2 = GlobalAlloc(2,dwBytes);
  pCVar3 = GlobalLock(pvVar2);
  param_1[4] = (uint)pCVar3;
  if (pCVar3 != (LPSTR)0x0) {
    uVar4 = *param_1;
    param_1 = (uint *)0x0;
    if (uVar4 != 0) {
      iVar7 = 0;
      do {
        *(short *)(puVar1[3] + 6 + iVar7) = (short)pCVar3 - (short)puVar1[4];
        if (1 < (int)dwBytes) {
          uVar4 = (uint)*(ushort *)(puVar1[3] + 8 + iVar7);
          if (uVar4 < 0x4d) {
            lpString2 = (char *)(&DAT_0064c328)[uVar4 * 6];
          }
          else {
            lpString2 = "!Bogus!";
          }
          lstrcpynA(pCVar3,lpString2,dwBytes);
          pCVar3[dwBytes - 1] = '\0';
          iVar5 = lstrlenA(pCVar3);
          dwBytes = dwBytes - (iVar5 + 1);
          pCVar3 = pCVar3 + iVar5 + 1;
        }
        param_1 = (uint *)((int)param_1 + 1);
        iVar7 = iVar7 + 0x10;
        pcVar8 = GlobalHandle_exref;
      } while (param_1 < *puVar1);
    }
    *pCVar3 = '\0';
    if (0x20 < (int)dwBytes) {
      pCVar3 = pCVar3 + (1 - puVar1[4]);
      pvVar2 = (HGLOBAL)(*pcVar8)(puVar1[4]);
      GlobalUnlock(pvVar2);
      uVar4 = puVar1[4];
      pvVar2 = (HGLOBAL)(*pcVar8)(uVar4,pCVar3,2);
      pvVar2 = GlobalReAlloc(pvVar2,uVar4,(UINT)pCVar3);
      pvVar6 = GlobalLock(pvVar2);
      puVar1[4] = (uint)pvVar6;
    }
    return;
  }
  param_1[4] = (uint)&DAT_0060f98c;
  return;
}


