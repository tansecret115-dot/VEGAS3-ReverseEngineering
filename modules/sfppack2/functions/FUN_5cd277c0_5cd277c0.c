/* Module: sfppack2.dll
   Function: FUN_5cd277c0
   Address: 5cd277c0
   Source: Ghidra pseudocode (Stage 10 batch) */


double * FUN_5cd277c0(uint param_1,undefined4 *param_2)

{
  double dVar1;
  HGLOBAL pvVar2;
  double *pMem;
  LPVOID pMem_00;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  double *local_10;
  
  pvVar2 = GlobalAlloc(0x42,param_1 << 4);
  pMem = GlobalLock(pvVar2);
  if (pMem == (double *)0x0) {
    return (double *)0x8;
  }
  pvVar2 = GlobalAlloc(0x42,param_1 << 4);
  pMem_00 = GlobalLock(pvVar2);
  if (pMem_00 == (LPVOID)0x0) {
    local_10 = (double *)0x8;
  }
  else {
    uVar5 = param_1 >> 1;
    pdVar3 = pMem;
    for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pdVar3 = *param_2;
      *(undefined4 *)((int)pdVar3 + 4) = param_2[1];
      *(undefined4 *)(pdVar3 + 1) = 0;
      *(undefined4 *)((int)pdVar3 + 0xc) = 0;
      pdVar3 = pdVar3 + 2;
      param_2 = param_2 + 2;
    }
    if (uVar5 != 0) {
      pdVar3 = pMem + uVar5 * 2;
      pdVar4 = pMem + uVar5 * 2 + -1;
      do {
        *(undefined4 *)pdVar3 = *(undefined4 *)(pdVar4 + -1);
        *(undefined4 *)((int)pdVar3 + 4) = *(undefined4 *)((int)pdVar4 + -4);
        pdVar3[1] = -*pdVar4;
        uVar5 = uVar5 - 1;
        pdVar3 = pdVar3 + 2;
        pdVar4 = pdVar4 + -2;
      } while (uVar5 != 0);
    }
    pdVar3 = pMem;
    uVar6 = param_1;
    do {
      fVar7 = (float10)fsin((float10)pdVar3[1]);
      uVar6 = uVar6 - 1;
      dVar1 = *pdVar3;
      fVar8 = (float10)fcos((float10)pdVar3[1]);
      *pdVar3 = (double)(fVar8 * (float10)*pdVar3);
      pdVar3[1] = (double)(fVar7 * (float10)dVar1);
      pdVar3 = pdVar3 + 2;
    } while (uVar6 != 0);
    local_10 = FUN_5cd279d0(pMem,param_1,-1);
    if (local_10 == (double *)0x0) {
      *(undefined2 *)(*DAT_5cd67f58 + 0xc) = 0xc;
      pvVar2 = GlobalAlloc(0x42,param_1 * 8);
      pdVar3 = GlobalLock(pvVar2);
      if (pdVar3 == (double *)0x0) {
        local_10 = (double *)0x8;
      }
      else {
        *(double **)(*DAT_5cd67f58 + 4) = pdVar3;
        *(uint *)(*DAT_5cd67f58 + 8) = param_1;
        uVar6 = 0;
        pdVar4 = pMem;
        do {
          if ((uVar6 == 0) || (uVar6 == param_1 - 1)) {
            *(undefined4 *)pdVar3 = *(undefined4 *)pdVar4;
            *(undefined4 *)((int)pdVar3 + 4) = *(undefined4 *)((int)pdVar4 + 4);
          }
          else {
            *pdVar3 = *pdVar4 + *pdVar4;
          }
          pdVar3 = pdVar3 + 1;
          uVar6 = uVar6 + 1;
          pdVar4 = pdVar4 + 2;
        } while (uVar6 <= param_1 - 1);
        FUN_5cd27580((int *)*DAT_5cd67f58,1.0);
      }
    }
  }
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pMem);
  GlobalFree(pvVar2);
  if (pMem_00 != (LPVOID)0x0) {
    pvVar2 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem_00);
    GlobalFree(pvVar2);
  }
  return local_10;
}


