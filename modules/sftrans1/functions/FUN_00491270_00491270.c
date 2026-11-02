/* Module: sftrans1.dll
   Function: FUN_00491270
   Address: 00491270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00491270(undefined4 *param_1,uint param_2,uint param_3)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar4 = param_2 / 100;
  if (param_2 % 100 != 0) {
    uVar4 = uVar4 + 1;
  }
  if (uVar4 != 0) {
    pvVar1 = GlobalAlloc(0x40,uVar4 * 200);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_3 != 0) {
      puVar5 = (undefined4 *)*param_1;
      puVar6 = puVar2;
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    pMem = (LPCVOID)*param_1;
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      *param_1 = 0;
    }
    *param_1 = puVar2;
  }
  return uVar4 * 100;
}


