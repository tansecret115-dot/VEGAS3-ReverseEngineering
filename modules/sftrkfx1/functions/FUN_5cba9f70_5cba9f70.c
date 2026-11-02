/* Module: sftrkfx1.dll
   Function: FUN_5cba9f70
   Address: 5cba9f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cba9f70(undefined4 *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = param_1[10];
  if (uVar2 != 0) {
    pMem = (LPCVOID)param_1[9];
    if (pMem != (LPCVOID)0x0) {
      if (uVar2 <= *(uint *)((int)pMem + 0x2c)) {
        puVar3 = param_1 + 0xc;
        puVar6 = (undefined4 *)((int)pMem + 0x30);
        for (iVar4 = (uVar2 & 0x7ffffff) << 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(undefined4 *)(param_1[9] + 0x28) = param_1[10];
        return;
      }
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_1[9]);
      GlobalFree(pvVar1);
      param_1[9] = 0;
    }
    uVar2 = param_1[0xb] - 6 & ((int)(param_1[0xb] - 6) < 0) - 1;
    iVar4 = uVar2 * 0x20;
    pvVar1 = GlobalAlloc(0x42,iVar4 + 0xf4);
    puVar3 = GlobalLock(pvVar1);
    param_1[9] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar6 = param_1;
      for (iVar5 = 0x3d; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      if (0 < iVar4) {
        puVar3 = param_1 + 0x3d;
        puVar6 = (undefined4 *)(param_1[9] + 0xf4);
        for (iVar4 = (uVar2 & 0x7ffffff) << 3; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
    }
  }
  return;
}


