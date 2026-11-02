/* Module: rv303260.dll
   Function: FUN_67205250
   Address: 67205250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_67205250(int param_1)

{
  uint *puVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  uint *puVar7;
  double *pdVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 local_cc;
  uint local_2c;
  undefined4 uStack_28;
  uint local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  double local_14;
  uint local_c;
  undefined4 uStack_8;
  
  dVar6 = _DAT_67213120;
  local_24 = (uint)*(ushort *)(param_1 + 0xf4);
  local_18 = param_1;
  local_c = 0;
  uStack_8 = 0;
  local_14 = 0.0;
  dVar5 = _DAT_67213120;
  if (local_24 != 0) {
    pdVar8 = (double *)&local_cc;
    local_1c = (int *)(param_1 + 8);
    local_20 = local_24;
    do {
      iVar12 = 10;
      puVar7 = (uint *)(*local_1c + 0x14a);
      local_2c = 0;
      uVar10 = *puVar7;
      do {
        uVar11 = *puVar7;
        if (uVar11 < uVar10) {
          uVar10 = uVar11;
        }
        if (local_2c < uVar11) {
          local_2c = uVar11;
        }
        puVar7 = puVar7 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      local_2c = local_2c - uVar10;
      if ((local_2c < 0xf4237) && (0x20 < local_2c)) {
        uStack_28 = 0;
        *pdVar8 = _DAT_67213218 / (double)local_2c;
      }
      else {
        *(undefined4 *)pdVar8 = 0;
        *(undefined4 *)((int)pdVar8 + 4) = 0x402e0000;
      }
      dVar5 = dVar5 + *pdVar8;
      pdVar8 = pdVar8 + 1;
      local_20 = local_20 - 1;
      local_1c = local_1c + 1;
    } while (local_20 != 0);
  }
  uVar10 = *(uint *)(local_18 + 0x192);
  puVar7 = (uint *)(local_18 + 0x192);
  dVar2 = (double)CONCAT44(uStack_8,local_c);
  uVar11 = 0;
  iVar12 = 10;
  do {
    uVar3 = *puVar7;
    if (uVar3 < uVar10) {
      uVar10 = uVar3;
    }
    if (uVar11 < uVar3) {
      uVar11 = uVar3;
    }
    puVar1 = puVar7 + -0x14;
    puVar7 = puVar7 + 1;
    iVar12 = iVar12 + -1;
    dVar2 = (double)*puVar1 + dVar2;
  } while (iVar12 != 0);
  if (uVar10 < uVar11) {
    local_14 = dVar2 / (double)(uVar11 - uVar10);
    *(double *)(local_18 + 0x112) = local_14;
  }
  uVar10 = *(uint *)(local_18 + 0x16a);
  puVar7 = (uint *)(local_18 + 0x16a);
  uVar11 = 0;
  iVar12 = 10;
  do {
    uVar3 = *puVar7;
    if (uVar3 < uVar10) {
      uVar10 = uVar3;
    }
    if (uVar11 < uVar3) {
      uVar11 = uVar3;
    }
    puVar1 = puVar7 + -0x14;
    uStack_8 = 0;
    local_c = *puVar1;
    puVar7 = puVar7 + 1;
    iVar12 = iVar12 + -1;
    dVar6 = (double)*puVar1 + dVar6;
  } while (iVar12 != 0);
  if (uVar10 < uVar11) {
    uStack_8 = 0;
    local_c = uVar11 - uVar10;
    dVar6 = dVar6 / (double)(uVar11 - uVar10);
    *(double *)(local_18 + 0x10a) = dVar6;
    local_14 = local_14 + dVar6;
  }
  iVar12 = 0;
  if (0 < (int)local_24) {
    dVar6 = local_14 * _DAT_672130f0;
    piVar9 = (int *)(local_18 + 8);
    pdVar8 = (double *)&local_cc;
    do {
      dVar2 = *pdVar8;
      iVar4 = *piVar9;
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 1;
      pdVar8 = pdVar8 + 1;
      *(double *)(iVar4 + 0x142) = (local_14 * dVar2) / dVar5;
      *(double *)(iVar4 + 0x13a) = dVar6 / dVar5;
    } while (iVar12 < (int)(uint)*(ushort *)(local_18 + 0xf4));
  }
  return 0;
}


