/* Module: sfppack2.dll
   Function: FUN_5ccdfda0
   Address: 5ccdfda0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccdfda0(uint *param_1)

{
  short *psVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  SIZE_T SVar5;
  
  WaitForSingleObject((HANDLE)param_1[0x27],0xffffffff);
  psVar1 = (short *)param_1[0x28];
  param_1[10] = 0;
  if (param_1[0x1b] == 0) {
    uVar2 = 0x100;
  }
  else if (param_1[0x1b] == 1) {
    uVar2 = 0x400;
  }
  else {
    uVar2 = 0x1000;
  }
  param_1[0x13] = uVar2;
  if ((LPCVOID)param_1[0x14] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x14]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x14]);
    GlobalFree(pvVar3);
  }
  pvVar3 = GlobalAlloc(0x42,param_1[0x13] << 3);
  pvVar4 = GlobalLock(pvVar3);
  param_1[0x14] = (uint)pvVar4;
  if ((LPCVOID)param_1[0x1f] != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x1f]);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)param_1[0x1f]);
    GlobalFree(pvVar3);
  }
  pvVar3 = GlobalAlloc(0x42,param_1[0x13] << 3);
  pvVar4 = GlobalLock(pvVar3);
  param_1[0x1f] = (uint)pvVar4;
  FUN_5ccdf760(param_1 + 0x11,(int)psVar1,param_1,param_1 + 0x16);
  if (psVar1 != (short *)0x0) {
    if ((psVar1[7] == 0x40) || ((*psVar1 == 1 && (psVar1[7] == 0x20)))) {
      if ((LPCVOID)param_1[4] != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)param_1[4]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)param_1[4]);
        GlobalFree(pvVar3);
      }
      pvVar3 = GlobalAlloc(0x42,param_1[1] << 3);
      pvVar4 = GlobalLock(pvVar3);
      param_1[4] = (uint)pvVar4;
      if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalFree(pvVar3);
      }
      SVar5 = param_1[0x13] << 3;
    }
    else {
      if ((LPCVOID)param_1[4] != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)param_1[4]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)param_1[4]);
        GlobalFree(pvVar3);
      }
      pvVar3 = GlobalAlloc(0x42,param_1[1] << 2);
      pvVar4 = GlobalLock(pvVar3);
      param_1[4] = (uint)pvVar4;
      if ((LPCVOID)param_1[2] != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)param_1[2]);
        GlobalFree(pvVar3);
      }
      SVar5 = param_1[0x13] << 2;
    }
    pvVar3 = GlobalAlloc(0x42,SVar5);
    pvVar4 = GlobalLock(pvVar3);
    param_1[2] = (uint)pvVar4;
    if (1 < (ushort)psVar1[1]) {
      if ((psVar1[7] == 0x40) || ((*psVar1 == 1 && (psVar1[7] == 0x20)))) {
        if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)param_1[5]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)param_1[5]);
          GlobalFree(pvVar3);
        }
        pvVar3 = GlobalAlloc(0x42,param_1[1] << 3);
        pvVar4 = GlobalLock(pvVar3);
        param_1[5] = (uint)pvVar4;
        if ((LPCVOID)param_1[3] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)param_1[3]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)param_1[3]);
          GlobalFree(pvVar3);
        }
        SVar5 = param_1[0x13] << 3;
      }
      else {
        if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)param_1[5]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)param_1[5]);
          GlobalFree(pvVar3);
        }
        pvVar3 = GlobalAlloc(0x42,param_1[1] << 2);
        pvVar4 = GlobalLock(pvVar3);
        param_1[5] = (uint)pvVar4;
        if ((LPCVOID)param_1[3] != (LPCVOID)0x0) {
          pvVar3 = GlobalHandle((LPCVOID)param_1[3]);
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle((LPCVOID)param_1[3]);
          GlobalFree(pvVar3);
        }
        SVar5 = param_1[0x13] << 2;
      }
      pvVar3 = GlobalAlloc(0x42,SVar5);
      pvVar4 = GlobalLock(pvVar3);
      param_1[3] = (uint)pvVar4;
    }
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x10] = 0;
  }
  return 0;
}


