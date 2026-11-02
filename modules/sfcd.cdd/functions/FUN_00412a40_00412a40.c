/* Module: sfcd.cdd
   Function: FUN_00412a40
   Address: 00412a40
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_00412a40(HSFCD__ *param_1,int param_2,uint param_3)

{
  SIZE_T dwBytes;
  int iVar1;
  HSFCD__ *pHVar2;
  HSFCD__ *pHVar3;
  HGLOBAL pvVar4;
  undefined4 *pMem;
  uint *puVar5;
  long lVar6;
  byte *pbVar7;
  
  pHVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x160);
  pHVar3 = (HSFCD__ *)FUN_0041f470(param_2);
  dwBytes = (int)pHVar3 * 5 + 0x12;
  pvVar4 = GlobalAlloc(0x42,dwBytes);
  pMem = GlobalLock(pvVar4);
  if (pMem == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  pbVar7 = (byte *)((int)pMem + 3);
  param_1 = (HSFCD__ *)0x0;
  if (pHVar3 != (HSFCD__ *)0x0) {
    do {
      puVar5 = (uint *)FUN_0041f490(param_2,(uint)param_1);
      FUN_004127f0(pbVar7,puVar5);
      pbVar7 = pbVar7 + 5;
      param_1 = param_1 + 1;
    } while (param_1 < pHVar3);
  }
  puVar5 = (uint *)FUN_0041f490(param_2,0);
  FUN_00412760((int)pHVar2,pbVar7,1,0xa0,0);
  FUN_0041f150(pbVar7 + 2,*puVar5);
  FUN_00412760((int)pHVar2,pbVar7 + 5,1,0xa1,0);
  FUN_0041f150(pbVar7 + 7,(uint)(pHVar3 + (*puVar5 - 1)));
  FUN_00412760((int)pHVar2,pbVar7 + 10,1,0xa2,param_3);
  lVar6 = FUN_004129b0(pHVar2,pMem,dwBytes);
  FUN_00419270(pHVar2,(tCDR_ERRORDATA *)(iVar1 + 100),0x64f,(uchar *)"jvc20xx.cpp");
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem);
  GlobalFree(pvVar4);
  return lVar6;
}


