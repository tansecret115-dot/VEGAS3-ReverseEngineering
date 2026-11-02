/* Module: sfcdi.dll
   Function: FUN_5bf186f0
   Address: 5bf186f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5bf186f0(void *this,undefined4 *param_1,uint param_2)

{
  HGLOBAL pvVar1;
  undefined4 *pMem;
  undefined4 *puVar2;
  uint uVar3;
  
  pvVar1 = GlobalAlloc(0x42,0x10);
  pMem = GlobalLock(pvVar1);
  if (pMem != (undefined4 *)0x0) {
    pvVar1 = GlobalAlloc(0x42,param_2);
    puVar2 = GlobalLock(pvVar1);
    pMem[2] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_1;
        param_1 = param_1 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      pMem[3] = param_2;
      *(uint *)((int)this + 0x24) = *(int *)((int)this + 0x24) + param_2;
      FUN_5bf38220(this,pMem);
      return param_2;
    }
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
  }
  return 0x8007000e;
}


