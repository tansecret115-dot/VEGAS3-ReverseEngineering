/* Module: vegas30k.dll
   Function: FUN_01088180
   Address: 01088180
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_01088180(uint param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  tagSFIFO_PGCI *ptVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  UINT UVar7;
  tagPGCI_GI *local_4;
  
  pMem = (LPCVOID)*param_2;
  uVar5 = *param_3;
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)((int)pMem + 0x84) = 0;
    *(uint *)((int)pMem + 0x80) = uVar5 - 1;
    uVar6 = ((uint)((uVar5 & 0x7ff) != 0) + (uVar5 >> 0xb)) * 0x800;
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    UVar7 = 0x42;
    uVar5 = uVar6;
    pvVar2 = GlobalHandle(pMem);
    pvVar2 = GlobalReAlloc(pvVar2,uVar5,UVar7);
    pvVar3 = GlobalLock(pvVar2);
    if (pvVar3 != (LPVOID)0x0) {
      *param_2 = pvVar3;
      *param_3 = uVar6;
      return 0;
    }
  }
  else {
    ptVar1 = *(tagSFIFO_PGCI **)(param_1 + 0x20);
    SfCdiGetProgramChainSize(ptVar1,&param_1);
    *(uint *)((int)pMem + 0x84) = uVar5;
    uVar5 = uVar5 + param_1;
    *(uint *)((int)pMem + 0x80) = uVar5 - 1;
    uVar6 = ((uint)((uVar5 & 0x7ff) != 0) + (uVar5 >> 0xb)) * 0x800;
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    UVar7 = 0x42;
    uVar5 = uVar6;
    pvVar2 = GlobalHandle(pMem);
    pvVar2 = GlobalReAlloc(pvVar2,uVar5,UVar7);
    pvVar3 = GlobalLock(pvVar2);
    if (pvVar3 != (LPVOID)0x0) {
      local_4 = (tagPGCI_GI *)(*(int *)((int)pvVar3 + 0x84) + (int)pvVar3);
      lVar4 = SfCdiCreateProgramChain(ptVar1,&local_4,&param_1);
      if (lVar4 < 0) {
        return lVar4;
      }
      *param_2 = pvVar3;
      *param_3 = uVar6;
      return lVar4;
    }
  }
  return -0x7ff8fff2;
}


