/* Module: rv303260.dll
   Function: FUN_6720c780
   Address: 6720c780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_6720c780(uint param_1,FILE *param_2)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  uint local_b8 [16];
  uint local_78 [16];
  uint local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  uint local_20;
  undefined1 local_1a;
  undefined1 local_19;
  int local_18;
  uint local_14;
  float local_10;
  char local_9;
  int local_8;
  
  if (param_2 == (FILE *)0x0) {
    return 0;
  }
  rewind(param_2);
  uVar6 = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_18 = 0;
  local_8 = 0;
  do {
    uVar1 = local_78[2];
    sVar2 = fread(&local_20,4,1,param_2);
    if ((((sVar2 == 0) || (sVar2 = fread(&local_9,1,1,param_2), sVar2 == 0)) ||
        (sVar2 = fread(&local_14,4,1,param_2), sVar2 == 0)) ||
       ((sVar2 = fread(&local_1a,1,1,param_2), sVar2 == 0 ||
        (sVar2 = fread(&local_19,1,1,param_2), sVar2 == 0)))) {
      if (uVar6 < local_b8[1]) {
        iVar7 = (uVar6 - local_b8[1]) + -1;
      }
      else {
        iVar7 = uVar6 - local_b8[1];
      }
      if (uVar1 < local_78[1]) {
        iVar3 = (uVar1 - local_78[1]) + -1;
      }
      else {
        iVar3 = uVar1 - local_78[1];
      }
      if ((uint)(iVar3 + iVar7) < 0x9c4) {
        return local_8 + 1;
      }
      return local_8 + 2;
    }
    bVar10 = false;
    if (local_78[3] != 0) {
      if (uVar1 < local_78[1]) {
        uVar5 = uVar1 - local_78[1];
        uVar4 = uVar5 - 1;
      }
      else {
        uVar4 = uVar1 - local_78[1];
        uVar5 = uVar4;
      }
      if (500 < uVar4) {
        bVar10 = local_9 == '\x01';
        if (param_1 / 0x19 < local_14) {
LAB_6720c8c4:
          bVar10 = true;
        }
        else if (param_1 / 0xfa < local_14) {
          local_28 = local_14;
          uStack_24 = 0;
          if ((float)local_14 < local_10 * _DAT_672133e8) goto LAB_6720c8c4;
        }
        if (uVar1 < local_78[1]) {
          uVar5 = uVar5 - 1;
        }
        if (15000 < uVar5) {
          bVar10 = true;
        }
      }
    }
    if (bVar10) {
      if (uVar6 < local_b8[1]) {
        iVar7 = (uVar6 - local_b8[1]) + -1;
      }
      else {
        iVar7 = uVar6 - local_b8[1];
      }
      if (uVar1 < local_78[1]) {
        iVar3 = (uVar1 - local_78[1]) + -1;
      }
      else {
        iVar3 = uVar1 - local_78[1];
      }
      if ((uint)(iVar3 + iVar7) < 0x9c5) {
        local_b8[3] = local_b8[3] + local_78[3];
        local_b8[2] = uVar1;
      }
      else {
        puVar8 = local_78;
        puVar9 = local_b8;
        for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(char *)puVar9 = (char)*puVar8;
        local_8 = local_8 + 1;
      }
      local_78[3] = 0;
      local_18 = 0;
      uVar6 = local_b8[2];
    }
    local_78[2] = local_20;
    if (local_18 == 0) {
      local_78[3] = local_78[3] + 1;
      local_10 = -1.0;
      local_18 = 1;
      local_78[1] = local_78[2];
    }
    else {
      if (_DAT_672133f0 <= local_10) {
        uStack_2c = 0;
        local_30 = local_14;
        local_10 = local_10 * _DAT_672133f4 - (float)local_14 * _DAT_672133f8;
      }
      else {
        uStack_34 = 0;
        local_38 = local_14;
        local_10 = (float)local_14;
      }
      local_78[3] = local_78[3] + 1;
    }
  } while( true );
}


