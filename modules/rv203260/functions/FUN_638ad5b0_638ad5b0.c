/* Module: rv203260.dll
   Function: FUN_638ad5b0
   Address: 638ad5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_638ad5b0(uint param_1,FILE *param_2)

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
  uint local_b0 [15];
  uint local_74 [15];
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
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_74[1] = 0;
  local_74[2] = 0;
  local_74[3] = 0;
  local_18 = 0;
  local_8 = 0;
  do {
    uVar1 = local_74[2];
    sVar2 = fread(&local_20,4,1,param_2);
    if ((((sVar2 == 0) || (sVar2 = fread(&local_9,1,1,param_2), sVar2 == 0)) ||
        (sVar2 = fread(&local_14,4,1,param_2), sVar2 == 0)) ||
       ((sVar2 = fread(&local_1a,1,1,param_2), sVar2 == 0 ||
        (sVar2 = fread(&local_19,1,1,param_2), sVar2 == 0)))) {
      if (uVar6 < local_b0[1]) {
        iVar7 = (uVar6 - local_b0[1]) + -1;
      }
      else {
        iVar7 = uVar6 - local_b0[1];
      }
      if (uVar1 < local_74[1]) {
        iVar3 = (uVar1 - local_74[1]) + -1;
      }
      else {
        iVar3 = uVar1 - local_74[1];
      }
      if ((uint)(iVar3 + iVar7) < 0x9c4) {
        return local_8 + 1;
      }
      return local_8 + 2;
    }
    bVar10 = false;
    if (local_74[3] != 0) {
      if (uVar1 < local_74[1]) {
        uVar5 = uVar1 - local_74[1];
        uVar4 = uVar5 - 1;
      }
      else {
        uVar4 = uVar1 - local_74[1];
        uVar5 = uVar4;
      }
      if (500 < uVar4) {
        bVar10 = local_9 == '\x01';
        if (param_1 / 0x19 < local_14) {
LAB_638ad6f4:
          bVar10 = true;
        }
        else if (param_1 / 0xfa < local_14) {
          local_28 = local_14;
          uStack_24 = 0;
          if ((float)local_14 < local_10 * _DAT_638b33f8) goto LAB_638ad6f4;
        }
        if (uVar1 < local_74[1]) {
          uVar5 = uVar5 - 1;
        }
        if (15000 < uVar5) {
          bVar10 = true;
        }
      }
    }
    if (bVar10) {
      if (uVar6 < local_b0[1]) {
        iVar7 = (uVar6 - local_b0[1]) + -1;
      }
      else {
        iVar7 = uVar6 - local_b0[1];
      }
      if (uVar1 < local_74[1]) {
        iVar3 = (uVar1 - local_74[1]) + -1;
      }
      else {
        iVar3 = uVar1 - local_74[1];
      }
      if ((uint)(iVar3 + iVar7) < 0x9c5) {
        local_b0[3] = local_b0[3] + local_74[3];
        local_b0[2] = uVar1;
      }
      else {
        puVar8 = local_74;
        puVar9 = local_b0;
        for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(char *)puVar9 = (char)*puVar8;
        local_8 = local_8 + 1;
      }
      local_74[3] = 0;
      local_18 = 0;
      uVar6 = local_b0[2];
    }
    local_74[2] = local_20;
    if (local_18 == 0) {
      local_74[3] = local_74[3] + 1;
      local_10 = -1.0;
      local_18 = 1;
      local_74[1] = local_74[2];
    }
    else {
      if (_DAT_638b33e0 <= local_10) {
        uStack_2c = 0;
        local_30 = local_14;
        local_10 = local_10 * _DAT_638b3400 - (float)local_14 * _DAT_638b3404;
      }
      else {
        uStack_34 = 0;
        local_38 = local_14;
        local_10 = (float)local_14;
      }
      local_74[3] = local_74[3] + 1;
    }
  } while( true );
}


