/* Module: sfppack2.dll
   Function: FUN_5ccdf760
   Address: 5ccdf760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccdf760(undefined4 *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  HGLOBAL pvVar2;
  double *pMem;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint local_10;
  
  if (param_4[5] == 0) {
    local_10 = 0x100;
  }
  else if (param_4[5] == 1) {
    local_10 = 0x400;
  }
  else {
    local_10 = 0x1000;
  }
  uVar1 = local_10 >> 1;
  param_1[2] = local_10;
  *param_3 = uVar1;
  param_3[0xb] = uVar1;
  param_3[1] = uVar1 - 1;
  pvVar2 = GlobalAlloc(0x42,local_10 << 4);
  pMem = GlobalLock(pvVar2);
  if (pMem != (double *)0x0) {
    if (param_2 != 0) {
      FUN_5ccdf2a0(pMem,local_10,param_4);
    }
    iVar5 = ((uint)param_1[2] >> 1) - 1;
    puVar3 = FUN_5cd26520((undefined4 *)*param_1,0,param_1[2],0);
    *param_1 = puVar3;
    FUN_5ccdf8a0(puVar3,pMem,local_10,iVar5);
    param_1[1] = iVar5;
    uVar1 = 0;
    if (iVar5 != 0) {
      do {
        uVar4 = uVar1 + 1;
        *(double *)(param_1[3] + -8 + uVar4 * 8) = (double)(uint)param_1[2] * pMem[uVar1];
        uVar1 = uVar4;
      } while (uVar4 < (uint)param_1[1]);
    }
    uVar1 = param_1[1];
    if (uVar1 < (uint)param_1[2]) {
      do {
        iVar5 = param_1[3];
        uVar1 = uVar1 + 1;
        *(undefined4 *)(iVar5 + -8 + uVar1 * 8) = 0;
        *(undefined4 *)(iVar5 + -4 + uVar1 * 8) = 0;
      } while (uVar1 < (uint)param_1[2]);
    }
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    FUN_5cd26640((undefined4 *)*param_1,(double *)param_1[3],param_1[2],0,0x3ff00000);
    param_1[4] = 0;
  }
  return 0;
}


