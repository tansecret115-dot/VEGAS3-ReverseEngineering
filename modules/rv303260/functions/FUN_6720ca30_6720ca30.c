/* Module: rv303260.dll
   Function: FUN_6720ca30
   Address: 6720ca30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_6720ca30(uint param_1,FILE *param_2,int param_3)

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
    if (*(int *)((int)puVar9 + 0x45) != 0) {
      uVar4 = *(uint *)((int)puVar9 + 0x41);
      uVar1 = *(uint *)((int)puVar9 + 0x3d);
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
           ((param_1 / 0xfa < local_c && ((float)local_c < local_10 * _DAT_672133e8)))) {
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
      uVar4 = *(uint *)((int)puVar9 + 0x41);
      uVar1 = *(uint *)((int)puVar9 + 0x3d);
      if (uVar4 < uVar1) {
        iVar7 = (uVar4 - uVar1) + -1;
      }
      else {
        iVar7 = uVar4 - uVar1;
      }
      if ((uint)(iVar7 + iVar3) < 0x9c5) {
        puVar9[1] = uVar4;
        puVar9[4] = puVar9[4] + *(int *)((int)puVar9 + 0x4d);
        puVar9[2] = puVar9[2] + *(int *)((int)puVar9 + 0x45);
        *(float *)((int)puVar9 + 0x21) =
             *(float *)((int)puVar9 + 0x5e) + *(float *)((int)puVar9 + 0x21);
        *(undefined1 *)(puVar9 + 8) = *(undefined1 *)((int)puVar9 + 0x5d);
        puVar9[7] = *(uint *)((int)puVar9 + 0x59);
      }
      else {
        *(float *)((int)puVar9 + 0x21) = *(float *)((int)puVar9 + 0x21) / (float)puVar9[2];
        uVar4 = *(uint *)((int)puVar9 + 0x3d);
        uVar1 = *puVar9;
        if (uVar4 < uVar1) {
          uVar4 = (uVar4 - uVar1) - 1;
        }
        else {
          uVar4 = uVar4 - uVar1;
        }
        puVar9[3] = uVar4;
        local_1c = local_1c + 1;
        *(float *)((int)puVar9 + 0x25) = ((float)puVar9[4] * _DAT_672133e4) / (float)(int)uVar4;
        puVar9 = (uint *)((int)puVar9 + 0x3d);
      }
      *(undefined4 *)((int)puVar9 + 0x45) = 0;
      *(undefined4 *)((int)puVar9 + 0x5e) = 0;
      *(undefined4 *)((int)puVar9 + 0x4d) = 0;
      local_18 = 0;
    }
    if (local_18 == 0) {
      *(undefined4 *)((int)puVar9 + 0x3d) = local_20;
      *(char *)((int)puVar9 + 0x5d) = (char)local_24;
      local_10 = -1.0;
      local_18 = 1;
      *(uint *)((int)puVar9 + 0x59) = ~-(uint)(local_5 != '\x01') & local_c;
      *(uint *)((int)puVar9 + 0x55) = (uint)(local_5 == '\x01');
    }
    else if (_DAT_672133f0 <= local_10) {
      local_10 = local_10 * _DAT_672133f4 - (float)local_c * _DAT_672133f8;
    }
    else {
      local_10 = (float)local_c;
    }
    *(undefined4 *)((int)puVar9 + 0x41) = local_20;
    local_14 = local_28;
    if (local_5 == '\x01') {
      local_14 = local_24;
    }
    local_14 = local_14 & 0xff;
    *(float *)((int)puVar9 + 0x5e) = *(float *)((int)puVar9 + 0x5e) + (float)local_14;
    *(uint *)((int)puVar9 + 0x4d) = *(int *)((int)puVar9 + 0x4d) + local_c;
    *(int *)((int)puVar9 + 0x45) = *(int *)((int)puVar9 + 0x45) + 1;
  }
  uVar4 = *(uint *)(param_3 + local_1c + 8 + local_1c * 0x3c);
  iVar3 = param_3 + local_1c + local_1c * 0x3c;
  uVar1 = *(uint *)(iVar3 + 4);
  if (uVar4 < uVar1) {
    iVar7 = (uVar4 - uVar1) + -1;
  }
  else {
    iVar7 = uVar4 - uVar1;
  }
  uVar4 = *(uint *)(iVar3 + 0x45);
  uVar1 = *(uint *)(iVar3 + 0x41);
  if (uVar4 < uVar1) {
    iVar8 = (uVar4 - uVar1) + -1;
  }
  else {
    iVar8 = uVar4 - uVar1;
  }
  if ((uint)(iVar8 + iVar7) < 0x9c4) {
    *(uint *)(iVar3 + 8) = uVar4;
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0x51);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x49);
    *(float *)(iVar3 + 0x25) = *(float *)(iVar3 + 0x62) + *(float *)(iVar3 + 0x25);
    *(undefined4 *)(iVar3 + 0x49) = 0;
    *(undefined4 *)(iVar3 + 0x41) = 0;
    *(undefined4 *)(iVar3 + 0x45) = 0;
  }
  *(float *)(iVar3 + 0x25) = *(float *)(iVar3 + 0x25) / (float)*(uint *)(iVar3 + 0xc);
  iVar7 = *(int *)(iVar3 + 8);
  uVar4 = *(uint *)(iVar3 + 4);
  if (iVar7 + 0x42U < uVar4) {
    iVar7 = (iVar7 - uVar4) + 0x41;
  }
  else {
    iVar7 = (iVar7 - uVar4) + 0x42;
  }
  *(int *)(iVar3 + 0x10) = iVar7;
  *(float *)(iVar3 + 0x29) = ((float)*(uint *)(iVar3 + 0x14) * _DAT_672133e4) / (float)iVar7;
  if (*(uint *)(iVar3 + 0x49) != 0) {
    *(float *)(iVar3 + 0x62) = *(float *)(iVar3 + 0x62) / (float)*(uint *)(iVar3 + 0x49);
    iVar7 = *(int *)(iVar3 + 0x45);
    uVar4 = *(uint *)(iVar3 + 0x41);
    if (iVar7 + 0x42U < uVar4) {
      iVar7 = (iVar7 - uVar4) + 0x41;
    }
    else {
      iVar7 = (iVar7 - uVar4) + 0x42;
    }
    *(int *)(iVar3 + 0x4d) = iVar7;
    *(float *)(iVar3 + 0x66) = ((float)*(uint *)(iVar3 + 0x51) * _DAT_672133e4) / (float)iVar7;
  }
  return 0;
}


