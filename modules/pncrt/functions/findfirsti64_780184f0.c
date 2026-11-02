/* Module: pncrt.dll
   Function: findfirsti64
   Address: 780184f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* findfirsti64 */

HANDLE __cdecl findfirsti64(LPCSTR param_1,uint *param_2)

{
  char cVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  CHAR *pCVar7;
  CHAR *pCVar8;
  uint *puVar9;
  longlong lVar10;
  _WIN32_FIND_DATAA local_140;
  
                    /* 0x184f0  235  _findfirsti64 */
  pvVar2 = FindFirstFileA(param_1,&local_140);
  if (pvVar2 == (HANDLE)0xffffffff) {
    DVar3 = GetLastError();
    switch(DVar3) {
    case 2:
    case 3:
    case 0x12:
      piVar4 = _errno();
      *piVar4 = 2;
      return (HANDLE)0xffffffff;
    default:
      piVar4 = _errno();
      *piVar4 = 0x16;
      return (HANDLE)0xffffffff;
    case 8:
      piVar4 = _errno();
      *piVar4 = 0xc;
      return (HANDLE)0xffffffff;
    }
  }
  *param_2 = -(uint)(local_140.dwFileAttributes != 0x80) & local_140.dwFileAttributes;
  uVar5 = FUN_78018460(&local_140.ftCreationTime);
  param_2[1] = uVar5;
  uVar5 = FUN_78018460(&local_140.ftLastAccessTime);
  param_2[2] = uVar5;
  uVar5 = FUN_78018460(&local_140.ftLastWriteTime);
  param_2[3] = uVar5;
  lVar10 = __allmul(local_140.nFileSizeHigh,0,0,1);
  uVar5 = 0xffffffff;
  *(ulonglong *)(param_2 + 4) = lVar10 + (ulonglong)local_140.nFileSizeLow;
  pCVar7 = local_140.cFileName;
  do {
    pCVar8 = pCVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pCVar8 = pCVar7 + 1;
    cVar1 = *pCVar7;
    pCVar7 = pCVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pCVar7 = pCVar8 + -uVar5;
  puVar9 = param_2 + 6;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = *(uint *)pCVar7;
    pCVar7 = pCVar7 + 4;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(CHAR *)puVar9 = *pCVar7;
    pCVar7 = pCVar7 + 1;
    puVar9 = (uint *)((int)puVar9 + 1);
  }
  return pvVar2;
}


