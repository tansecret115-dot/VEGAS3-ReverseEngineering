/* Module: sfcdi.dll
   Function: FUN_5bf18790
   Address: 5bf18790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5bf18790(void *this,undefined4 *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *pMem;
  HGLOBAL pvVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  local_8 = 0;
  pMem = FUN_5bf38270(this,0);
  puVar6 = param_1;
  if (pMem == (int *)0x0) {
    *param_3 = 0;
    return 0x800a0026;
  }
  while( true ) {
    uVar4 = pMem[3];
    if (param_2 <= uVar4 && uVar4 != param_2) break;
    if (uVar4 == param_2) {
      uVar4 = pMem[3];
      puVar5 = (undefined4 *)pMem[2];
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      local_8 = local_8 + pMem[3];
      pvVar2 = GlobalHandle((LPCVOID)pMem[2]);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle((LPCVOID)pMem[2]);
      GlobalFree(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pMem);
      GlobalFree(pvVar2);
      goto LAB_5bf188e2;
    }
    puVar5 = (undefined4 *)pMem[2];
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    local_8 = local_8 + pMem[3];
    param_2 = param_2 - pMem[3];
    pvVar2 = GlobalHandle((LPCVOID)pMem[2]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)pMem[2]);
    GlobalFree(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    pMem = FUN_5bf38270(this,0);
    puVar6 = (undefined4 *)(local_8 + (int)param_1);
    if (pMem == (int *)0x0) goto LAB_5bf188e2;
  }
  puVar5 = (undefined4 *)pMem[2];
  for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar1 = pMem[3];
  local_8 = local_8 + param_2;
  pMem[3] = iVar1 - param_2;
  memmove((void *)pMem[2],(void *)(pMem[2] + param_2),iVar1 - param_2);
  FUN_5bf38360(this,pMem);
LAB_5bf188e2:
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) - local_8;
  *param_3 = local_8;
  return 0;
}


