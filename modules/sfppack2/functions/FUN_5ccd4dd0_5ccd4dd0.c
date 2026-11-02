/* Module: sfppack2.dll
   Function: FUN_5ccd4dd0
   Address: 5ccd4dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccd4dd0(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  double *pdVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  double *pMem;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  
  if (*param_4 == 0) {
    uVar5 = 0x100;
  }
  else if (*param_4 == 1) {
    uVar5 = 0x400;
  }
  else {
    uVar5 = 0x1000;
  }
  param_1[2] = uVar5;
  fVar7 = (float10)_CIpow();
  *(double *)(param_1 + 6) = (double)fVar7;
  uVar2 = uVar5 >> 1;
  param_1[2] = uVar5;
  *(uint *)(param_3 + 0x10) = uVar2;
  *(uint *)(param_3 + 0x18) = uVar2;
  *(uint *)(param_3 + 0x14) = uVar2 - 1;
  pvVar3 = GlobalAlloc(0x42,uVar5 << 4);
  pMem = GlobalLock(pvVar3);
  if (pMem != (double *)0x0) {
    if (param_2 != 0) {
      FUN_5ccd4870(pMem,uVar5,(int)(param_4 + 0x15),param_4[0x95]);
    }
    iVar6 = ((uint)param_1[2] >> 1) - 1;
    puVar4 = FUN_5cd26520((undefined4 *)*param_1,0,param_1[2],0);
    *param_1 = puVar4;
    FUN_5ccd4f30(puVar4,pMem,uVar5,iVar6);
    uVar5 = 0;
    param_1[1] = iVar6;
    if (iVar6 != 0) {
      do {
        iVar6 = uVar5 * 8;
        pdVar1 = pMem + uVar5;
        uVar5 = uVar5 + 1;
        *(double *)(iVar6 + param_1[3]) = (double)(uint)param_1[2] * *pdVar1;
      } while (uVar5 < (uint)param_1[1]);
    }
    uVar5 = param_1[1];
    if (uVar5 < (uint)param_1[2]) {
      do {
        iVar6 = param_1[3];
        uVar5 = uVar5 + 1;
        *(undefined4 *)(iVar6 + -8 + uVar5 * 8) = 0;
        *(undefined4 *)(iVar6 + -4 + uVar5 * 8) = 0;
      } while (uVar5 < (uint)param_1[2]);
    }
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
    FUN_5cd26640((undefined4 *)*param_1,(double *)param_1[3],param_1[2],0,0x3ff00000);
    param_1[4] = 0;
  }
  return 0;
}


