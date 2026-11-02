/* Module: aviplug.dll
   Function: FUN_5f95c210
   Address: 5f95c210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f95c210(undefined4 param_1,undefined4 param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  ushort *pMem;
  int iVar5;
  uint *puVar6;
  uint local_c8 [4];
  ushort *local_b8;
  SIZE_T local_b4;
  undefined4 local_30 [2];
  ushort *local_28;
  undefined4 local_24;
  SIZE_T local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f9d9370;
  puStack_10 = &DAT_5f9d5b26;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff1c;
  ExceptionList = &local_14;
  iVar3 = acmMetrics(0,0x32,&local_20);
  local_20 = local_20 + 0x40;
  iVar5 = -0x7fffbffb;
  DAT_5f9f41a4 = 0;
  if ((iVar3 == 0) && (local_20 != 0x40)) {
    pvVar4 = GlobalAlloc(0x42,local_20);
    pMem = GlobalLock(pvVar4);
    if (pMem != (ushort *)0x0) {
      uVar1 = param_3[1];
      uVar2 = param_3[7];
      iVar3 = *(int *)(param_3 + 2);
      *pMem = *param_3;
      pMem[1] = uVar1;
      *(int *)(pMem + 2) = iVar3;
      pMem[7] = uVar2;
      uVar1 = (uVar2 >> 3) * uVar1;
      pMem[6] = uVar1;
      *(uint *)(pMem + 4) = (uint)uVar1 * iVar3;
      pMem[8] = 0;
      puVar6 = local_c8;
      local_28 = pMem;
      for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_c8[0] = 0x98;
      local_c8[2] = (uint)*param_3;
      local_b4 = local_20;
      local_b8 = pMem;
      iVar3 = acmDriverOpen(local_30,param_1,0);
      if (iVar3 == 0) {
        local_8 = 0;
        local_24 = acmFormatEnumA(local_30[0],local_c8,FUN_5f95c170,param_2,0x100000);
        local_8 = 0xffffffff;
        acmDriverClose(local_30[0],0);
      }
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      iVar5 = (-(uint)(DAT_5f9f41a4 != 0) & 0x7fffbffb) + 0x80004005;
    }
    ExceptionList = local_14;
    return iVar5;
  }
  ExceptionList = local_14;
  return -0x7fffbffb;
}


