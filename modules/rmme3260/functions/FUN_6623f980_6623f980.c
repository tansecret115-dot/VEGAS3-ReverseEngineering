/* Module: rmme3260.dll
   Function: FUN_6623f980
   Address: 6623f980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6623f980(int *param_1)

{
  int iVar1;
  HRGN pHVar2;
  int iVar3;
  BOOL BVar4;
  DWORD nCount;
  LPRGNDATA lpRgnData;
  code *pcVar5;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  HRGN local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1[0x1b] + 0xb4));
  local_8 = (HRGN)0x0;
  DAT_6627cff0 = DAT_6627cff0 + 1;
  local_c = 1;
  FUN_66247ee0(param_1[0x1d]);
  pcVar5 = DeleteObject_exref;
  if (param_1[0x4d] != 0) {
    local_8 = CreateRectRgn(0,0,0,0);
    CombineRgn(local_8,(HRGN)param_1[0x4d],(HRGN)0x0,5);
    DeleteObject((HGDIOBJ)param_1[0x4d]);
  }
  if ((HGDIOBJ)param_1[0x4e] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x4e]);
  }
  local_24[2] = param_1[0x35];
  local_14 = local_24[2] + param_1[0x2b];
  local_18 = param_1[0x36];
  local_10 = local_18 + param_1[0x2c];
  iVar1 = (**(code **)(param_1[1] + 0x14))(param_1 + 1);
  if (iVar1 == 0) {
    pHVar2 = CreateRectRgn(0,0,0,0);
    param_1[0x4e] = (int)pHVar2;
    pHVar2 = CreateRectRgn(0,0,0,0);
    param_1[0x4d] = (int)pHVar2;
  }
  else {
    iVar1 = (*(code *)param_1[0x73])
                      (param_1[0x35],param_1[0x36],param_1[0x35] + param_1[0x2b],
                       param_1[0x36] + param_1[0x2c],param_1[0x72]);
    local_28 = param_1 + 0xc;
    param_1[0x4e] = iVar1;
    local_30 = -(uint)(param_1[0xf] != 0);
    local_24[0] = 0;
    local_24[1] = 0;
    local_2c = local_30;
    if (local_30 != 0) {
      FUN_66251190(local_28,&local_2c,local_24 + 1,local_24);
    }
    if ((void *)param_1[0x1a] != (void *)0x0) {
      FUN_6623fd90((void *)param_1[0x1a],(HRGN)param_1[0x4e],(int)param_1);
    }
    pHVar2 = CreateRectRgn(0,0,0,0);
    param_1[0x4d] = (int)pHVar2;
    CombineRgn(pHVar2,(HRGN)param_1[0x4e],(HRGN)0x0,5);
    while (iVar1 = local_24[0], local_30 != 0) {
      iVar3 = (**(code **)(*(int *)(local_24[0] + 4) + 0x14))(local_24[0] + 4);
      if (iVar3 != 0) {
        pHVar2 = (HRGN)(**(code **)(iVar1 + 0x1cc))
                                 (*(int *)(iVar1 + 0xd4),*(int *)(iVar1 + 0xd8),
                                  *(int *)(iVar1 + 0xac) + *(int *)(iVar1 + 0xd4),
                                  *(int *)(iVar1 + 0xb0) + *(int *)(iVar1 + 0xd8),
                                  *(undefined4 *)(iVar1 + 0x1c8));
        CombineRgn((HRGN)param_1[0x4d],(HRGN)param_1[0x4d],pHVar2,4);
        pcVar5 = DeleteObject_exref;
        DeleteObject(pHVar2);
      }
      local_30 = local_2c;
      if (local_2c != 0) {
        FUN_66251190(local_28,&local_2c,local_24 + 1,local_24);
      }
    }
  }
  pHVar2 = local_8;
  if (((((local_8 != (HRGN)0x0) && (BVar4 = EqualRgn((HRGN)param_1[0x4d],local_8), BVar4 != 0)) &&
       (param_1[0x66] == local_24[2])) &&
      ((param_1[0x68] == local_14 && (param_1[0x67] == local_18)))) && (param_1[0x69] == local_10))
  {
    local_c = 0;
  }
  param_1[0x66] = local_24[2];
  param_1[0x67] = local_18;
  param_1[0x68] = local_14;
  param_1[0x69] = local_10;
  (*pcVar5)(pHVar2);
  param_1[0x4f] = 1;
  nCount = GetRegionData((HRGN)param_1[0x4d],0,(LPRGNDATA)0x0);
  lpRgnData = operator_new(nCount);
  GetRegionData((HRGN)param_1[0x4d],nCount,lpRgnData);
  iVar1 = 0;
  local_8 = (HRGN)0x0;
  if (0 < (int)(lpRgnData->rdh).nCount) {
    do {
      local_24[2] = *(int *)(lpRgnData->Buffer + iVar1);
      local_18 = *(int *)(lpRgnData[1].Buffer + iVar1 + -0x20);
      local_14 = *(int *)(lpRgnData[1].Buffer + iVar1 + -0x1c);
      local_10 = *(int *)(lpRgnData[1].Buffer + iVar1 + -0x18);
      FUN_66247f40((void *)param_1[0x1d],local_24 + 2);
      local_8 = (HRGN)((int)local_8 + 1);
      iVar1 = iVar1 + 0x10;
    } while ((int)local_8 < (int)(lpRgnData->rdh).nCount);
  }
  if ((param_1[0x1a] != 0) && (param_1[0x51] != 0)) {
    pHVar2 = CreateRectRgn(0,0,0,0);
    CombineRgn(pHVar2,(HRGN)param_1[0x4d],(HRGN)0x0,5);
    FUN_66240ee0(param_1,(HWND)param_1[0x51],param_1[0x35],param_1[0x36],param_1[0x2b],param_1[0x2c]
                 ,param_1[0x38]);
    OffsetRgn(pHVar2,-param_1[0x35],-param_1[0x36]);
    FUN_66241160(param_1,(HWND)param_1[0x51],pHVar2,param_1[0x38]);
  }
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  FUN_6623c240(param_1,param_1 + 0x35);
  if (local_c != 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
    if ((HDC)param_1[0x1d] != (HDC)0x0) {
      FUN_66247740((HDC)param_1[0x1d]);
    }
  }
  FUN_6623f420(param_1);
  if (lpRgnData != (LPRGNDATA)0x0) {
    operator_delete(lpRgnData);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1[0x1b] + 0xb4));
  return 1;
}


