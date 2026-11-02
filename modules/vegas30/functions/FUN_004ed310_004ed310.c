/* Module: vegas30.exe
   Function: FUN_004ed310
   Address: 004ed310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ed310(int *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  HGLOBAL pvVar4;
  undefined4 *pMem;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_c;
  
  pvVar4 = GlobalAlloc(0x42,0x800);
  pMem = GlobalLock(pvVar4);
  iVar6 = 0;
  if ((pMem != (undefined4 *)0x0) && (param_1 != (int *)0x0)) {
    iVar2 = *param_1;
    local_c = 0;
    puVar7 = pMem;
    if (0 < iVar2) {
      do {
        puVar3 = *(ushort **)(param_1[2] + local_c * 4);
        uVar1 = *puVar3;
        iVar6 = iVar6 + (uint)uVar1;
        if (0x800 < iVar6) break;
        puVar9 = puVar7;
        puVar8 = puVar3;
        for (uVar5 = (uint)(uVar1 >> 2); puVar8 = puVar8 + 2, uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *(undefined4 *)puVar8;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar9 = (char)*puVar8;
          puVar8 = (ushort *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        uVar1 = puVar3[1];
        puVar7 = (undefined4 *)((int)puVar7 + (uint)*puVar3);
        iVar6 = iVar6 + (uint)uVar1;
        if (0x800 < iVar6) break;
        puVar9 = (undefined4 *)(*puVar3 + 4 + (int)puVar3);
        puVar10 = puVar7;
        for (uVar5 = (uint)(uVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar7 = (undefined4 *)((int)puVar7 + (uint)puVar3[1]);
        local_c = local_c + 1;
      } while (local_c < iVar2);
    }
    _SfSetMetricBinary_16(DAT_00647200,0x44f,pMem,iVar6);
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
  }
  return;
}


