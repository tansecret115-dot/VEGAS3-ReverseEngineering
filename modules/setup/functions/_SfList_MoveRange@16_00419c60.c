/* Module: Setup.exe
   Function: _SfList_MoveRange@16
   Address: 00419c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_MoveRange_16(int *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  HGLOBAL pvVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint dwBytes;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *local_220;
  uint local_218;
  undefined4 local_214;
  uint local_210;
  undefined4 local_200 [128];
  
                    /* 0x19c60  243  _SfList_MoveRange@16 */
  uVar1 = param_1[10];
  local_214 = 0;
  if ((int)param_2 < 0) {
    return 0x80070057;
  }
  uVar9 = ((int)param_3 < 1) - 1 & param_3;
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar4 = GetCurrentThreadId(), DVar4 != param_1[0xd])) {
    return 0x80004005;
  }
  local_210 = param_2;
  if ((int)uVar9 <= (int)param_2) {
    local_210 = uVar9;
  }
  local_218 = param_2;
  if ((int)param_2 <= (int)uVar9) {
    local_218 = uVar9;
  }
  iVar2 = *param_1;
  if (param_4 < 0) {
    param_4 = iVar2 - local_218;
  }
  if ((iVar2 < (int)(param_2 + param_4)) || (uVar8 = uVar9 + param_4, iVar2 < (int)uVar8)) {
    local_214 = 0x80004005;
  }
  else if ((0 < param_4) && (param_2 != uVar9)) {
    iVar2 = param_1[2];
    dwBytes = param_4 * param_1[1];
    if (dwBytes < 0x201) {
      local_220 = local_200;
    }
    else {
      pvVar6 = GlobalAlloc(0x42,dwBytes);
      local_220 = GlobalLock(pvVar6);
      if (local_220 == (undefined4 *)0x0) {
        local_214 = 0x8007000e;
        goto LAB_00419dcf;
      }
    }
    puVar10 = (undefined4 *)(param_2 * param_1[1] + iVar2);
    puVar11 = local_220;
    for (uVar7 = dwBytes >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = dwBytes & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    iVar5 = (local_210 - local_218) + param_4;
    if (iVar5 < 1) {
      iVar5 = local_218 - local_210;
    }
    else {
      iVar5 = param_4 - iVar5;
    }
    iVar3 = param_1[1];
    uVar7 = uVar9;
    if ((int)param_2 < (int)uVar9) {
      uVar8 = param_2;
      uVar7 = param_2 + param_4;
    }
    memmove((void *)(iVar3 * uVar8 + iVar2),(void *)(iVar3 * uVar7 + iVar2),iVar3 * iVar5);
    puVar10 = local_220;
    puVar11 = (undefined4 *)(uVar9 * param_1[1] + iVar2);
    for (uVar8 = dwBytes >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar9 = dwBytes & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    if (0x200 < dwBytes) {
      pvVar6 = GlobalHandle(local_220);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(local_220);
      GlobalFree(pvVar6);
    }
  }
LAB_00419dcf:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return local_214;
}


