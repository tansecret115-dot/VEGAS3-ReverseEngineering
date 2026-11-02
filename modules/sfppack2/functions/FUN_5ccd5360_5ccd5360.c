/* Module: sfppack2.dll
   Function: FUN_5ccd5360
   Address: 5ccd5360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd5360(undefined4 *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  SIZE_T SVar5;
  
  WaitForSingleObject((HANDLE)param_1[0x154],0xffffffff);
  psVar1 = (short *)param_1[0x152];
  param_1[0xc] = 0;
  if (param_1[0x1a] == 0) {
    uVar2 = 0x100;
  }
  else if (param_1[0x1a] == 1) {
    uVar2 = 0x400;
  }
  else {
    uVar2 = 0x1000;
  }
  param_1[0x14] = uVar2;
  if ((LPCVOID)param_1[0x15] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x15]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x15]);
    GlobalFree(pvVar3);
  }
  pvVar3 = GlobalAlloc(0x42,param_1[0x14] << 3);
  pvVar4 = GlobalLock(pvVar3);
  param_1[0x15] = pvVar4;
  if ((LPCVOID)param_1[0xb5] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[0xb5]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0xb5]);
    GlobalFree(pvVar3);
  }
  pvVar3 = GlobalAlloc(0x42,param_1[0x14] << 3);
  pvVar4 = GlobalLock(pvVar3);
  param_1[0xb5] = pvVar4;
  FUN_5ccd4dd0(param_1 + 0x12,(int)psVar1,(int)param_1,param_1 + 0x1a);
  if (psVar1 != (short *)0x0) {
    if ((psVar1[7] == 0x40) || ((*psVar1 == 1 && (psVar1[7] == 0x20)))) {
      if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalFree(pvVar3);
      }
      pvVar3 = GlobalAlloc(0x42,param_1[5] << 3);
      pvVar4 = GlobalLock(pvVar3);
      param_1[2] = pvVar4;
      if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)*param_1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)*param_1);
        GlobalFree(pvVar3);
      }
      SVar5 = param_1[0x14] << 3;
    }
    else {
      if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalFree(pvVar3);
      }
      pvVar3 = GlobalAlloc(0x42,param_1[5] << 2);
      pvVar4 = GlobalLock(pvVar3);
      param_1[2] = pvVar4;
      if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)*param_1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)*param_1);
        GlobalFree(pvVar3);
      }
      SVar5 = param_1[0x14] << 2;
    }
    pvVar3 = GlobalAlloc(0x42,SVar5);
    pvVar4 = GlobalLock(pvVar3);
    *param_1 = pvVar4;
    if (1 < (ushort)psVar1[1]) {
      if ((psVar1[7] == 0x40) || ((*psVar1 == 1 && (psVar1[7] == 0x20)))) {
        if ((LPCVOID)param_1[3] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)param_1[3]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)param_1[3]);
          GlobalFree(pvVar3);
        }
        pvVar3 = GlobalAlloc(0x42,param_1[5] << 3);
        pvVar4 = GlobalLock(pvVar3);
        param_1[3] = pvVar4;
        if ((LPCVOID)param_1[1] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)param_1[1]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)param_1[1]);
          GlobalFree(pvVar3);
        }
        SVar5 = param_1[0x14] << 3;
      }
      else {
        if ((LPCVOID)param_1[3] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)param_1[3]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)param_1[3]);
          GlobalFree(pvVar3);
        }
        pvVar3 = GlobalAlloc(0x42,param_1[5] << 2);
        pvVar4 = GlobalLock(pvVar3);
        param_1[3] = pvVar4;
        if ((LPCVOID)param_1[1] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)param_1[1]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)param_1[1]);
          GlobalFree(pvVar3);
        }
        SVar5 = param_1[0x14] << 2;
      }
      pvVar3 = GlobalAlloc(0x42,SVar5);
      pvVar4 = GlobalLock(pvVar3);
      param_1[1] = pvVar4;
    }
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
  }
  return 0;
}


