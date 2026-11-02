/* Module: vidpcore.dll
   Function: FUN_5ded2ea0
   Address: 5ded2ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ded2ea0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  uVar13 = FUN_5dea3070(0xf0);
  if ((uVar13 & 0x40) == 0) {
    uVar13 = FUN_5dea3070(0xf0);
    if ((uVar13 & 0x10) == 0) {
      uVar13 = 0;
      uVar15 = 0;
      puVar14 = param_1;
      if (param_2 != 0) {
        do {
          uVar12 = param_2;
          if (uVar15 < uVar13) {
            uVar2 = param_1[uVar13];
            uVar3 = param_1[uVar13 + 1];
            *(undefined4 *)(param_1 + uVar13) = *(undefined4 *)puVar14;
            *(undefined4 *)((int)param_1 + uVar13 * 8 + 4) = *(undefined4 *)((int)puVar14 + 4);
            uStack_c = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)(param_1 + uVar13 + 1) = *(undefined4 *)(puVar14 + 1);
            *(undefined4 *)((int)param_1 + uVar13 * 8 + 0xc) = *(undefined4 *)((int)puVar14 + 0xc);
            local_10 = (undefined4)uVar3;
            *puVar14 = uVar2;
            *(undefined4 *)(puVar14 + 1) = local_10;
            *(undefined4 *)((int)puVar14 + 0xc) = uStack_c;
          }
          while ((uVar12 = uVar12 >> 1, 1 < uVar12 && (uVar12 <= uVar13))) {
            uVar13 = uVar13 - uVar12;
          }
          uVar15 = uVar15 + 2;
          uVar13 = uVar13 + uVar12;
          puVar14 = puVar14 + 2;
        } while (uVar15 < param_2);
      }
    }
    else {
      uVar13 = 0;
      local_8 = 0;
      if (param_2 != 0) {
        do {
          uVar15 = param_2;
          if (local_8 < uVar13) {
            puVar14 = param_1 + uVar13;
            puVar1 = param_1 + local_8;
            uVar2 = *puVar14;
            uVar3 = puVar14[1];
            uVar4 = puVar1[1];
            *puVar14 = *puVar1;
            puVar14[1] = uVar4;
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
          }
          while ((uVar15 = uVar15 >> 1, 1 < uVar15 && (uVar15 <= uVar13))) {
            uVar13 = uVar13 - uVar15;
          }
          local_8 = local_8 + 2;
          uVar13 = uVar13 + uVar15;
        } while (local_8 < param_2);
        return;
      }
    }
  }
  else {
    uVar13 = 0;
    local_8 = 0;
    if (param_2 != 0) {
      do {
        uVar15 = param_2;
        if (local_8 < uVar13) {
          puVar14 = param_1 + uVar13;
          puVar1 = param_1 + local_8;
          uVar5 = *(undefined4 *)puVar14;
          uVar6 = *(undefined4 *)((int)puVar14 + 4);
          uVar7 = *(undefined4 *)(puVar14 + 1);
          uVar8 = *(undefined4 *)((int)puVar14 + 0xc);
          uVar9 = *(undefined4 *)((int)puVar1 + 4);
          uVar10 = *(undefined4 *)(puVar1 + 1);
          uVar11 = *(undefined4 *)((int)puVar1 + 0xc);
          *(undefined4 *)puVar14 = *(undefined4 *)puVar1;
          *(undefined4 *)((int)puVar14 + 4) = uVar9;
          *(undefined4 *)(puVar14 + 1) = uVar10;
          *(undefined4 *)((int)puVar14 + 0xc) = uVar11;
          *(undefined4 *)puVar1 = uVar5;
          *(undefined4 *)((int)puVar1 + 4) = uVar6;
          *(undefined4 *)(puVar1 + 1) = uVar7;
          *(undefined4 *)((int)puVar1 + 0xc) = uVar8;
        }
        while ((uVar15 = uVar15 >> 1, 1 < uVar15 && (uVar15 <= uVar13))) {
          uVar13 = uVar13 - uVar15;
        }
        local_8 = local_8 + 2;
        uVar13 = uVar13 + uVar15;
      } while (local_8 < param_2);
      return;
    }
  }
  return;
}


