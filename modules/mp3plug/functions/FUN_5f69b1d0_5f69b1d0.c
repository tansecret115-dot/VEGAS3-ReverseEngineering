/* Module: mp3plug.dll
   Function: FUN_5f69b1d0
   Address: 5f69b1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __thiscall FUN_5f69b1d0(void *this,undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  int iMaxLength;
  undefined1 *puVar2;
  LPSTR pCVar3;
  char *pcVar4;
  HGLOBAL pvVar5;
  SIZE_T dwBytes;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  
  puVar2 = FUN_5f69a750(this,param_1,param_2);
  iVar1 = *(int *)((int)this + 0xc);
  iVar11 = 0;
  if (1 < *(uint *)((int)this + 0x18)) {
    uVar7 = 1;
    do {
      if (*(char *)(iVar1 + iVar11) == '\0') break;
      iVar11 = iVar11 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)this + 0x18));
  }
  uVar7 = iVar11 + 1;
  if (*(void **)((int)this + 0x2c) != (void *)0x0) {
    free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x40) = 1;
  if (1 < uVar7) {
    *(uint *)((int)this + 0x40) = uVar7;
    pCVar3 = calloc(1,uVar7);
    iMaxLength = *(int *)((int)this + 0x40);
    *(LPSTR *)((int)this + 0x2c) = pCVar3;
    lstrcpynA(pCVar3,(LPCSTR)(iVar1 + 1),iMaxLength);
    pCVar3[iMaxLength + -1] = '\0';
  }
  uVar7 = iVar11 + 2;
  iVar11 = 0;
  if (uVar7 < *(uint *)((int)this + 0x18)) {
    pcVar4 = (char *)(uVar7 + *(int *)((int)this + 0xc));
    uVar8 = uVar7;
    do {
      if (*pcVar4 == '\0') break;
      iVar11 = iVar11 + 1;
      pcVar4 = pcVar4 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((int)this + 0x18));
  }
  uVar8 = iVar11 + 1;
  if (*(void **)((int)this + 0x30) != (void *)0x0) {
    free(*(void **)((int)this + 0x30));
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x44) = 1;
  if (1 < uVar8) {
    *(uint *)((int)this + 0x44) = uVar8;
    pCVar3 = calloc(1,uVar8);
    iVar11 = *(int *)((int)this + 0x44);
    *(LPSTR *)((int)this + 0x30) = pCVar3;
    lstrcpynA(pCVar3,(LPCSTR)(uVar7 + iVar1),iVar11);
    pCVar3[iVar11 + -1] = '\0';
  }
  uVar7 = uVar7 + uVar8;
  iVar11 = 0;
  if (uVar7 < *(uint *)((int)this + 0x18)) {
    pcVar4 = (char *)(uVar7 + *(int *)((int)this + 0xc));
    uVar8 = uVar7;
    do {
      if (*pcVar4 == '\0') break;
      iVar11 = iVar11 + 1;
      pcVar4 = pcVar4 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((int)this + 0x18));
  }
  uVar8 = iVar11 + 1;
  if (*(void **)((int)this + 0x28) != (void *)0x0) {
    free(*(void **)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x3c) = 1;
  if (1 < uVar8) {
    *(uint *)((int)this + 0x3c) = uVar8;
    pCVar3 = calloc(1,uVar8);
    iVar11 = *(int *)((int)this + 0x3c);
    *(LPSTR *)((int)this + 0x28) = pCVar3;
    lstrcpynA(pCVar3,(LPCSTR)(uVar7 + iVar1),iVar11);
    pCVar3[iVar11 + -1] = '\0';
  }
  if (*(LPCVOID *)((int)this + 0x34) != (LPCVOID)0x0) {
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x34));
    GlobalUnlock(pvVar5);
    pvVar5 = GlobalHandle(*(LPCVOID *)((int)this + 0x34));
    GlobalFree(pvVar5);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  dwBytes = *(int *)((int)this + 0x18) - (uVar7 + uVar8);
  *(undefined4 *)((int)this + 0x38) = 0;
  if (dwBytes != 0) {
    *(SIZE_T *)((int)this + 0x38) = dwBytes;
    pvVar5 = GlobalAlloc(0x42,dwBytes);
    puVar6 = GlobalLock(pvVar5);
    uVar10 = *(uint *)((int)this + 0x38);
    *(undefined4 **)((int)this + 0x34) = puVar6;
    puVar12 = (undefined4 *)(uVar7 + uVar8 + *(int *)((int)this + 0xc));
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return puVar2;
}


