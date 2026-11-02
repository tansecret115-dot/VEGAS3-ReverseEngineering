/* Module: vegas30k.dll
   Function: FUN_01159ac0
   Address: 01159ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01159ac0(int param_1,int param_2,char *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  int local_38;
  char local_34 [52];
  
  iVar1 = param_1;
  iVar9 = 0;
  puVar7 = (undefined4 *)0x0;
  local_48 = 0;
  local_44 = 0;
  if ((param_2 == 0) ||
     (local_38 = FUN_011598b0(param_1,param_2,&local_40), pcVar10 = param_3, local_38 == 0)) {
    FUN_01155fb0(iVar1,"Empty keyword in zTXt chunk");
    return;
  }
  if ((param_3 == (char *)0x0) || ((*param_3 == '\0' || (param_5 == -1)))) {
    FUN_01159a30(iVar1,local_40,param_3,0);
    FUN_01155ef0(iVar1,local_40);
    return;
  }
  FUN_01155ef0(iVar1,local_40);
  if (0 < param_5) {
    sprintf(local_34,"Unknown zTXt compression type %d",param_5);
    FUN_01155fb0(iVar1,local_34);
    param_5 = 0;
  }
  *(undefined4 **)(iVar1 + 0x70) = param_4;
  *(undefined4 *)(iVar1 + 0x6c) = pcVar10;
  iVar8 = 0x10;
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0xa8);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0xa4);
  param_3 = (char *)0x10;
  param_4 = (undefined4 *)(iVar1 + 0x6c);
  do {
    iVar2 = FUN_01149d50(param_4,0);
    if (iVar2 != 0) {
      pcVar10 = *(char **)(iVar1 + 0x84);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "zlib error";
      }
      FUN_01155f80(iVar1,pcVar10);
    }
    if (*(int *)(iVar1 + 0x7c) == 0) {
      if (*(int *)(iVar1 + 0x70) == 0) break;
      if ((int)local_44 <= iVar9) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)FUN_01155eb0(iVar1,iVar8);
          local_44 = local_48 + 4U;
        }
        else {
          local_3c = puVar7;
          puVar7 = (undefined4 *)FUN_01155eb0(iVar1,iVar8);
          puVar4 = local_3c;
          puVar3 = puVar7;
          for (local_44 = local_44 & 0x3fffffff; local_44 != 0; local_44 = local_44 - 1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          FUN_01155ef0(iVar1,local_3c);
          iVar8 = (int)param_3;
          local_44 = local_48 + 4U;
        }
      }
      puVar3 = (undefined4 *)FUN_01155eb0(iVar1,*(undefined4 *)(iVar1 + 0xa8));
      *(undefined4 **)(iVar8 + -0x10 + (int)puVar7) = puVar3;
      uVar6 = *(uint *)(iVar1 + 0xa8);
      puVar4 = *(undefined4 **)(iVar1 + 0xa4);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      iVar9 = local_48 + 1;
      iVar8 = (int)param_3 + 4;
      *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0xa8);
      *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0xa4);
      param_3 = (char *)iVar8;
      local_48 = iVar9;
    }
  } while (*(int *)(iVar1 + 0x70) != 0);
  param_3 = (char *)(iVar9 * 4 + 0x10);
  do {
    while( true ) {
      iVar8 = FUN_01149d50(param_4,4);
      if ((iVar8 != 0) && (iVar8 != 1)) {
        pcVar10 = *(char **)(iVar1 + 0x84);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "zlib error";
        }
        FUN_01155f80(iVar1,pcVar10);
      }
      iVar2 = local_38;
      if ((*(int *)(iVar1 + 0x7c) != 0) || (iVar8 != 0)) break;
      puVar4 = puVar7;
      if ((int)local_44 <= iVar9) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)FUN_01155eb0(iVar1,param_3);
          local_44 = iVar9 + 4U;
        }
        else {
          local_3c = puVar7;
          puVar4 = (undefined4 *)FUN_01155eb0(iVar1,param_3);
          puVar3 = puVar4;
          for (local_44 = local_44 & 0x3fffffff; local_44 != 0; local_44 = local_44 - 1) {
            *puVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar3 = puVar3 + 1;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          FUN_01155ef0(iVar1,local_3c);
          local_44 = iVar9 + 4U;
        }
      }
      puVar3 = (undefined4 *)FUN_01155eb0(iVar1,*(undefined4 *)(iVar1 + 0xa8));
      *(undefined4 **)((int)param_3 + -0x10 + (int)puVar4) = puVar3;
      uVar6 = *(uint *)(iVar1 + 0xa8);
      puVar7 = *(undefined4 **)(iVar1 + 0xa4);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      iVar9 = local_48 + 1;
      param_3 = (char *)((int)param_3 + 4);
      *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(iVar1 + 0xa4);
      *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0xa8);
      puVar7 = puVar4;
      local_48 = iVar9;
    }
  } while (iVar8 != 1);
  uVar6 = *(uint *)(iVar1 + 0xa8);
  iVar8 = uVar6 * iVar9;
  if (*(uint *)(iVar1 + 0x7c) < uVar6) {
    iVar8 = iVar8 + (uVar6 - *(uint *)(iVar1 + 0x7c));
  }
  FUN_01158d00(iVar1,&DAT_0120703c,local_38 + 2 + iVar8);
  FUN_01158d50(iVar1,param_2,iVar2 + 1);
  param_1 = CONCAT31(param_1._1_3_,(undefined1)param_5);
  FUN_01158d50(iVar1,&param_1,1);
  puVar4 = puVar7;
  if (0 < iVar9) {
    do {
      FUN_01158d50(iVar1,*puVar4,*(undefined4 *)(iVar1 + 0xa8));
      FUN_01155ef0(iVar1,*puVar4);
      iVar9 = iVar9 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar9 != 0);
  }
  if (local_44 != 0) {
    FUN_01155ef0(iVar1,puVar7);
  }
  if (*(uint *)(iVar1 + 0x7c) < *(uint *)(iVar1 + 0xa8)) {
    FUN_01158d50(iVar1,*(undefined4 *)(iVar1 + 0xa4),
                 *(uint *)(iVar1 + 0xa8) - *(uint *)(iVar1 + 0x7c));
  }
  FUN_01158d80(iVar1);
  FUN_01149c00(param_4);
  return;
}


