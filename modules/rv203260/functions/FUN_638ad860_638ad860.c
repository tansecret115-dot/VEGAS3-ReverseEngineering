/* Module: rv203260.dll
   Function: FUN_638ad860
   Address: 638ad860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_638ad860(uint param_1,FILE *param_2,int param_3)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  float local_10;
  uint local_c;
  char local_5;
  
  if (param_2 == (FILE *)0x0) {
    return 0;
  }
  rewind(param_2);
  local_1c = 0;
  local_18 = 0;
  puVar9 = (uint *)(param_3 + 4);
  while ((((sVar2 = fread(&local_20,4,1,param_2), sVar2 != 0 &&
           (sVar2 = fread(&local_5,1,1,param_2), sVar2 != 0)) &&
          (sVar2 = fread(&local_c,4,1,param_2), sVar2 != 0)) &&
         ((sVar2 = fread(&local_28,1,1,param_2), sVar2 != 0 &&
          (sVar2 = fread(&local_24,1,1,param_2), sVar2 != 0))))) {
    bVar10 = false;
    if (*(int *)((int)puVar9 + 0x41) != 0) {
      uVar4 = *(uint *)((int)puVar9 + 0x3d);
      uVar1 = *(uint *)((int)puVar9 + 0x39);
      if (uVar4 < uVar1) {
        uVar6 = uVar4 - uVar1;
        uVar5 = uVar6 - 1;
      }
      else {
        uVar5 = uVar4 - uVar1;
        uVar6 = uVar5;
      }
      if (500 < uVar5) {
        bVar10 = local_5 == '\x01';
        if ((param_1 / 0x19 < local_c) ||
           ((param_1 / 0xfa < local_c && ((float)local_c < local_10 * _DAT_638b33f8)))) {
          bVar10 = true;
        }
        if (uVar4 < uVar1) {
          uVar6 = uVar6 - 1;
        }
        if (15000 < uVar6) {
          bVar10 = true;
        }
      }
    }
    if (bVar10) {
      uVar4 = puVar9[1];
      uVar1 = *puVar9;
      if (uVar4 < uVar1) {
        iVar3 = (uVar4 - uVar1) + -1;
      }
      else {
        iVar3 = uVar4 - uVar1;
      }
      uVar4 = *(uint *)((int)puVar9 + 0x3d);
      uVar1 = *(uint *)((int)puVar9 + 0x39);
      if (uVar4 < uVar1) {
        iVar7 = (uVar4 - uVar1) + -1;
      }
      else {
        iVar7 = uVar4 - uVar1;
      }
      if ((uint)(iVar7 + iVar3) < 0x9c5) {
        puVar9[1] = uVar4;
        puVar9[4] = puVar9[4] + *(int *)((int)puVar9 + 0x49);
        puVar9[2] = puVar9[2] + *(int *)((int)puVar9 + 0x41);
        *(float *)((int)puVar9 + 0x1d) =
             *(float *)((int)puVar9 + 0x56) + *(float *)((int)puVar9 + 0x1d);
        *(undefined1 *)(puVar9 + 7) = *(undefined1 *)((int)puVar9 + 0x55);
        puVar9[6] = *(uint *)((int)puVar9 + 0x51);
      }
      else {
        *(float *)((int)puVar9 + 0x1d) = *(float *)((int)puVar9 + 0x1d) / (float)puVar9[2];
        uVar4 = *(uint *)((int)puVar9 + 0x39);
        uVar1 = *puVar9;
        if (uVar4 < uVar1) {
          uVar4 = (uVar4 - uVar1) - 1;
        }
        else {
          uVar4 = uVar4 - uVar1;
        }
        puVar9[3] = uVar4;
        local_1c = local_1c + 1;
        *(float *)((int)puVar9 + 0x21) = ((float)puVar9[4] * _DAT_638b33e8) / (float)(int)uVar4;
        puVar9 = (uint *)((int)puVar9 + 0x39);
      }
      *(undefined4 *)((int)puVar9 + 0x41) = 0;
      *(undefined4 *)((int)puVar9 + 0x56) = 0;
      *(undefined4 *)((int)puVar9 + 0x49) = 0;
      local_18 = 0;
    }
    if (local_18 == 0) {
      *(undefined4 *)((int)puVar9 + 0x39) = local_20;
      *(char *)((int)puVar9 + 0x55) = (char)local_24;
      local_10 = -1.0;
      local_18 = 1;
      *(uint *)((int)puVar9 + 0x51) = ~-(uint)(local_5 != '\x01') & local_c;
      *(uint *)((int)puVar9 + 0x4d) = (uint)(local_5 == '\x01');
    }
    else if (_DAT_638b33e0 <= local_10) {
      local_10 = local_10 * _DAT_638b3400 - (float)local_c * _DAT_638b3404;
    }
    else {
      local_10 = (float)local_c;
    }
    *(undefined4 *)((int)puVar9 + 0x3d) = local_20;
    local_14 = local_28;
    if (local_5 == '\x01') {
      local_14 = local_24;
    }
    local_14 = local_14 & 0xff;
    *(float *)((int)puVar9 + 0x56) = *(float *)((int)puVar9 + 0x56) + (float)local_14;
    *(uint *)((int)puVar9 + 0x49) = *(int *)((int)puVar9 + 0x49) + local_c;
    *(int *)((int)puVar9 + 0x41) = *(int *)((int)puVar9 + 0x41) + 1;
  }
  iVar3 = param_3 + local_1c * 0x26;
  uVar4 = *(uint *)(local_1c * 0x13 + 4 + iVar3);
  iVar3 = local_1c * 0x13 + iVar3;
  uVar1 = *(uint *)(iVar3 + 8);
  if (uVar1 < uVar4) {
    iVar7 = (uVar1 - uVar4) + -1;
  }
  else {
    iVar7 = uVar1 - uVar4;
  }
  uVar4 = *(uint *)(iVar3 + 0x41);
  uVar1 = *(uint *)(iVar3 + 0x3d);
  if (uVar4 < uVar1) {
    iVar8 = (uVar4 - uVar1) + -1;
  }
  else {
    iVar8 = uVar4 - uVar1;
  }
  if ((uint)(iVar8 + iVar7) < 0x9c4) {
    *(uint *)(iVar3 + 8) = uVar4;
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0x4d);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x45);
    *(float *)(iVar3 + 0x21) = *(float *)(iVar3 + 0x5a) + *(float *)(iVar3 + 0x21);
    *(undefined4 *)(iVar3 + 0x45) = 0;
    *(undefined4 *)(iVar3 + 0x3d) = 0;
    *(undefined4 *)(iVar3 + 0x41) = 0;
  }
  *(float *)(iVar3 + 0x21) = *(float *)(iVar3 + 0x21) / (float)*(uint *)(iVar3 + 0xc);
  iVar7 = *(int *)(iVar3 + 8);
  uVar4 = *(uint *)(iVar3 + 4);
  if (iVar7 + 0x42U < uVar4) {
    iVar7 = (iVar7 - uVar4) + 0x41;
  }
  else {
    iVar7 = (iVar7 - uVar4) + 0x42;
  }
  *(int *)(iVar3 + 0x10) = iVar7;
  *(float *)(iVar3 + 0x25) = ((float)*(uint *)(iVar3 + 0x14) * _DAT_638b33e8) / (float)iVar7;
  if (*(uint *)(iVar3 + 0x45) != 0) {
    *(float *)(iVar3 + 0x5a) = *(float *)(iVar3 + 0x5a) / (float)*(uint *)(iVar3 + 0x45);
    iVar7 = *(int *)(iVar3 + 0x41);
    uVar4 = *(uint *)(iVar3 + 0x3d);
    if (iVar7 + 0x42U < uVar4) {
      iVar7 = (iVar7 - uVar4) + 0x41;
    }
    else {
      iVar7 = (iVar7 - uVar4) + 0x42;
    }
    *(int *)(iVar3 + 0x49) = iVar7;
    *(float *)(iVar3 + 0x5e) = ((float)*(uint *)(iVar3 + 0x4d) * _DAT_638b33e8) / (float)iVar7;
  }
  return 0;
}


