/* Module: stl2plg.dll
   Function: FUN_00409220
   Address: 00409220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00409220(int param_1,undefined4 *param_2,uint param_3,uint *param_4,undefined4 *param_5,
            uint param_6,undefined4 *param_7)

{
  double dVar1;
  undefined8 uVar2;
  int *piVar3;
  double dVar4;
  HGLOBAL hMem;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    hMem = GlobalAlloc(0x42,0x40);
    puVar5 = GlobalLock(hMem);
    *(undefined4 **)(param_1 + 0x28) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    dVar1 = *(double *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puVar10 = puVar5;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined8 *)(puVar5 + 4) = uVar2;
    dVar4 = _DAT_00465ba8;
    *puVar5 = 0x40;
    puVar5[1] = 0xffffffff;
    puVar5[2] = 0;
    puVar5[3] = 0xffffffff;
    if (dVar1 <= dVar4) {
      dVar1 = _DAT_00464ad8;
    }
    *(double *)(puVar5 + 6) = dVar1;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    iVar7 = *(int *)(param_1 + 0x28);
    if (*(short *)(*(int *)(param_1 + 0x40) + 0xe) == 0x20) {
      *(undefined4 *)(iVar7 + 0x28) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x28) = 0;
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      *(undefined4 *)(iVar7 + 0x30) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 0;
      *(undefined4 *)(iVar7 + 0x38) = 0;
      *(undefined4 *)(iVar7 + 0x3c) = 0;
    }
  }
  piVar3 = *(int **)(param_1 + 0x40);
  uVar6 = 0;
  if (piVar3[4] == 3) {
    iVar7 = 0xc;
  }
  else {
    iVar7 = piVar3[8] << 2;
  }
  uVar8 = *piVar3 + iVar7;
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar8;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (param_3 < uVar8) {
      uVar6 = 0x8007000e;
    }
    else {
      puVar5 = *(undefined4 **)(param_1 + 0x40);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *param_2 = *puVar5;
        puVar5 = puVar5 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0x40;
  }
  if (param_5 != (undefined4 *)0x0) {
    if (0x3f < param_6) {
      puVar5 = *(undefined4 **)(param_1 + 0x28);
      for (uVar8 = param_6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *param_5 = *puVar5;
        puVar5 = puVar5 + 1;
        param_5 = param_5 + 1;
      }
      for (uVar8 = param_6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)param_5 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        param_5 = (undefined4 *)((int)param_5 + 1);
      }
      return uVar6;
    }
    uVar6 = 0x8007000e;
  }
  return uVar6;
}


