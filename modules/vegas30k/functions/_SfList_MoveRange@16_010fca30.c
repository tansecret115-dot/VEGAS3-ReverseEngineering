/* Module: vegas30k.dll
   Function: _SfList_MoveRange@16
   Address: 010fca30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * _SfList_MoveRange_16(int *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  HGLOBAL pvVar6;
  uint uVar7;
  uint uVar8;
  uint dwBytes;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_220;
  uint local_218;
  undefined1 *local_214;
  uint local_210;
  undefined4 local_200 [128];
  
                    /* 0xfca30  1080  _SfList_MoveRange@16 */
  uVar1 = param_1[10];
  local_214 = (undefined1 *)0x0;
  if ((int)param_2 < 0) {
    return &DAT_80070057;
  }
  param_3 = ((int)param_3 < 1) - 1 & param_3;
  if ((int)uVar1 < 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  else if (((uVar1 & 0x40000000) == 0) && (DVar4 = GetCurrentThreadId(), DVar4 != param_1[0xd])) {
    return (undefined1 *)0x80004005;
  }
  local_210 = param_2;
  if ((int)param_3 <= (int)param_2) {
    local_210 = param_3;
  }
  local_218 = param_2;
  if ((int)param_2 <= (int)param_3) {
    local_218 = param_3;
  }
  iVar2 = *param_1;
  if (param_4 < 0) {
    param_4 = iVar2 - local_218;
  }
  if ((iVar2 < (int)(param_2 + param_4)) || (uVar8 = param_3 + param_4, iVar2 < (int)uVar8)) {
    local_214 = (undefined1 *)0x80004005;
  }
  else if ((0 < param_4) && (param_2 != param_3)) {
    iVar2 = param_1[2];
    dwBytes = param_4 * param_1[1];
    if (dwBytes < 0x201) {
      local_220 = local_200;
    }
    else {
      pvVar6 = GlobalAlloc(0x42,dwBytes);
      local_220 = GlobalLock(pvVar6);
      if (local_220 == (undefined4 *)0x0) {
        local_214 = (undefined1 *)0x8007000e;
        goto LAB_010fcb9f;
      }
    }
    puVar9 = (undefined4 *)(param_2 * param_1[1] + iVar2);
    puVar10 = local_220;
    for (uVar7 = dwBytes >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = dwBytes & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar5 = (local_210 - local_218) + param_4;
    if (iVar5 < 1) {
      iVar5 = local_218 - local_210;
    }
    else {
      iVar5 = param_4 - iVar5;
    }
    iVar3 = param_1[1];
    uVar7 = param_3;
    if ((int)param_2 < (int)param_3) {
      uVar8 = param_2;
      uVar7 = param_2 + param_4;
    }
    memmove((void *)(iVar3 * uVar8 + iVar2),(void *)(iVar3 * uVar7 + iVar2),iVar3 * iVar5);
    puVar9 = local_220;
    puVar10 = (undefined4 *)(param_3 * param_1[1] + iVar2);
    for (uVar8 = dwBytes >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = dwBytes & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    if (0x200 < dwBytes) {
      pvVar6 = GlobalHandle(local_220);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(local_220);
      GlobalFree(pvVar6);
    }
  }
LAB_010fcb9f:
  if ((int)uVar1 < 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return local_214;
}


