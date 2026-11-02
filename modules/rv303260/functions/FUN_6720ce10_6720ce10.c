/* Module: rv303260.dll
   Function: FUN_6720ce10
   Address: 6720ce10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_6720ce10(uint param_1,uint param_2,undefined4 param_3,int param_4,uint param_5,int param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint local_14;
  uint local_10;
  
  local_10 = 0;
  if (param_5 == 0) {
    return;
  }
  puVar12 = (uint *)(param_6 + 4);
LAB_6720ce32:
  uVar10 = puVar12[1];
  uVar8 = *puVar12;
  if (uVar10 < uVar8) {
    iVar3 = (uVar10 - uVar8) + -1;
  }
  else {
    iVar3 = uVar10 - uVar8;
  }
  if ((iVar3 != 0) && (puVar12[2] != 0)) {
    uVar8 = uVar8 + uVar10 >> 1;
    uVar10 = local_10;
    puVar13 = puVar12;
    do {
      uVar14 = puVar13[1];
      uVar4 = *puVar13;
      if (uVar14 < uVar4) {
        iVar3 = (uVar14 - uVar4) + -1;
      }
      else {
        iVar3 = uVar14 - uVar4;
      }
      puVar7 = puVar12;
      uVar14 = local_10;
      if ((iVar3 != 0) && (puVar13[2] != 0)) {
        if (uVar8 - param_2 < uVar4) {
          uVar4 = ((uVar8 - param_2) - uVar4) - 1;
        }
        else {
          uVar4 = (uVar8 - param_2) - uVar4;
        }
        uVar9 = uVar8;
        if (uVar4 < puVar13[3]) goto LAB_6720ceaf;
      }
      uVar9 = param_2;
      if (uVar10 == 0) goto LAB_6720ceaf;
      uVar10 = uVar10 - 1;
      puVar13 = (uint *)((int)puVar13 + -0x3d);
    } while( true );
  }
  goto LAB_6720d105;
LAB_6720ceaf:
  uVar8 = puVar7[1];
  uVar4 = *puVar7;
  if (uVar8 < uVar4) {
    iVar3 = (uVar8 - uVar4) + -1;
  }
  else {
    iVar3 = uVar8 - uVar4;
  }
  if ((iVar3 != 0) && (puVar7[2] != 0)) {
    if (uVar9 + param_2 < uVar4) {
      uVar4 = ((uVar9 + param_2) - uVar4) - 1;
    }
    else {
      uVar4 = (uVar9 + param_2) - uVar4;
    }
    if (uVar4 < puVar7[3]) goto LAB_6720cf61;
  }
  if (uVar14 == param_5 - 1) goto LAB_6720cefd;
  puVar7 = (uint *)((int)puVar7 + 0x3d);
  uVar14 = uVar14 + 1;
  goto LAB_6720ceaf;
LAB_6720cefd:
  iVar3 = *(int *)(param_6 + param_5 * 0x3d + -0x35) - param_2;
  uVar10 = local_10;
  puVar13 = puVar12;
  do {
    uVar8 = puVar13[1];
    uVar4 = *puVar13;
    if (uVar8 < uVar4) {
      iVar5 = (uVar8 - uVar4) + -1;
    }
    else {
      iVar5 = uVar8 - uVar4;
    }
    if ((iVar5 != 0) && (puVar13[2] != 0)) {
      if (iVar3 - param_2 < uVar4) {
        uVar4 = ((iVar3 - param_2) - uVar4) - 1;
      }
      else {
        uVar4 = (iVar3 - param_2) - uVar4;
      }
      if (uVar4 < puVar13[3]) break;
    }
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    puVar13 = (uint *)((int)puVar13 + -0x3d);
  } while( true );
LAB_6720cf61:
  iVar5 = param_6 + uVar10 * 0x3d;
  uVar8 = *(uint *)(iVar5 + 4);
  iVar3 = *(int *)(param_6 + uVar14 * 0x3d + 8);
  uVar4 = 0;
  local_14 = 0;
  if (uVar10 <= uVar14) {
    puVar13 = (uint *)(iVar5 + 8);
    iVar5 = (uVar14 - uVar10) + 1;
    do {
      uVar10 = *puVar13;
      uVar14 = puVar13[-1];
      if (uVar10 < uVar14) {
        iVar6 = (uVar10 - uVar14) + -1;
      }
      else {
        iVar6 = uVar10 - uVar14;
      }
      if (((iVar6 != 0) && (puVar13[1] != 0)) && (uVar4 = uVar4 + puVar13[3], 0x80000000 < uVar4)) {
        local_14 = local_14 + 1;
        uVar4 = uVar4 + 0x80000000;
      }
      puVar13 = (uint *)((int)puVar13 + 0x3d);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  fVar2 = ((float)uVar4 - (float)local_14 * _DAT_672133e0) * _DAT_672133e4;
  if (iVar3 + 0x21U < uVar8) {
    uVar10 = (iVar3 - uVar8) + 0x20;
  }
  else {
    uVar10 = (iVar3 - uVar8) + 0x21;
  }
  iVar3 = ftol();
  fVar1 = *(float *)(&DAT_67214db0 + iVar3 * 4);
  uVar8 = 2;
  pfVar11 = (float *)&DAT_67214db8;
  do {
    iVar3 = ftol();
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (((float)(&DAT_67214e38)[iVar3] * *pfVar11 * *(float *)(&DAT_67214e60 + param_4 * 4) <
         ((float)param_1 * fVar1) / (fVar2 / (float)uVar10)) || (pfVar11 == (float *)&DAT_67214e2c))
    break;
    pfVar11 = pfVar11 + 1;
    uVar8 = uVar8 + 1;
  } while (pfVar11 < &DAT_67214e30);
  puVar12[5] = uVar8;
LAB_6720d105:
  local_10 = local_10 + 1;
  puVar12 = (uint *)((int)puVar12 + 0x3d);
  if (param_5 <= local_10) {
    return;
  }
  goto LAB_6720ce32;
}


