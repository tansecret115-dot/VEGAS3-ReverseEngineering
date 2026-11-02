/* Module: sfcdi.dll
   Function: FUN_5bf19d80
   Address: 5bf19d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf19d80(void *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  SIZE_T dwBytes;
  HGLOBAL pvVar5;
  undefined4 *pMem;
  DWORD DVar6;
  uint uVar7;
  short *psVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_8;
  undefined4 local_4;
  
  local_4 = 0;
  if (*(int *)((int)param_1 + 0xb0) == 0) {
    return 0;
  }
  if (*(int *)(*(int *)((int)param_1 + 0xc) + 0x1db4) != 0) {
    return 0x8004e00c;
  }
  uVar1 = FUN_5bf18a80(*(int *)((int)param_1 + 0xc) + 0x1e2c);
  local_8 = (uint)(*(uint *)(*(int *)((int)param_1 + 0xc) + 0x1dbc) <= param_4 / 0x930 + param_2);
  if (param_4 <= uVar1) {
    uVar1 = param_4;
  }
  psVar2 = (short *)FUN_5bf18b10(*(int *)((int)param_1 + 0xc) + 0x1e2c);
  psVar8 = psVar2;
  for (uVar7 = uVar1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)psVar8 = *param_3;
    param_3 = param_3 + 1;
    psVar8 = psVar8 + 2;
  }
  for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)psVar8 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    psVar8 = (short *)((int)psVar8 + 1);
  }
  iVar3 = *(int *)((int)param_1 + 0xc);
  if (((*(byte *)(iVar3 + 0x1e2c) & 4) != 0) && (*(int *)(iVar3 + 0x1e74) == 0)) {
    *(undefined4 *)(iVar3 + 0x1e74) = 1;
    FUN_5bf19fb0(psVar2,uVar1,*(uint *)(*(int *)((int)param_1 + 0xc) + 0x1e44));
  }
  FUN_5bf18b60(*(int *)((int)param_1 + 0xc) + 0x1e2c,uVar1,local_8);
  iVar3 = FUN_5bf18dc0((uint *)(*(int *)((int)param_1 + 0xc) + 0x1e2c));
  if ((iVar3 < 0) && (local_8 == 0)) {
    if ((iVar3 == -0x7ffb1fa7) && ((*(uint *)(*(int *)((int)param_1 + 0xc) + 0x1e2c) & 8) == 0)) {
      return 0x8004e059;
    }
    uVar4 = FUN_5bf18a30(*(int *)((int)param_1 + 0xc) + 0x1e2c);
    FUN_5bf19cd0(param_1,uVar4,1);
  }
  else {
    FUN_5bf19cd0(param_1,0,0);
    dwBytes = FUN_5bf18ab0(*(int *)((int)param_1 + 0xc) + 0x1e2c);
    if (dwBytes != 0) {
      pvVar5 = GlobalAlloc(0x42,dwBytes);
      pMem = GlobalLock(pvVar5);
      if (pMem == (undefined4 *)0x0) {
        local_4 = 0x8007000e;
      }
      else {
        FUN_5bf18bf0(*(int *)((int)param_1 + 0xc) + 0x1e2c,pMem,dwBytes);
        FUN_5bf186f0(*(void **)(*(int *)((int)param_1 + 0xc) + 0x1dac),pMem,dwBytes);
        pvVar5 = GlobalHandle(pMem);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pMem);
        GlobalFree(pvVar5);
      }
    }
    if (*(uint *)((int)param_1 + 0xac) <=
        *(uint *)(*(int *)(*(int *)((int)param_1 + 0xc) + 0x1dac) + 0x24)) {
      SetEvent(*(HANDLE *)(*(int *)((int)param_1 + 0xc) + 0x1db0));
    }
  }
  iVar3 = *(int *)((int)param_1 + 0xb8);
  DVar6 = timeGetTime();
  *(DWORD *)((int)param_1 + 0xb8) = DVar6;
  uVar1 = DVar6 - iVar3;
  if (uVar1 != 0) {
    lVar9 = __allmul(param_4,0,100000,0);
    uVar10 = __aulldiv((uint)lVar9,(uint)((ulonglong)lVar9 >> 0x20),0x2b110,0);
    *(int *)((int)param_1 + 0xb4) = (int)((uVar10 & 0xffffffff) / (ulonglong)uVar1);
  }
  return local_4;
}


