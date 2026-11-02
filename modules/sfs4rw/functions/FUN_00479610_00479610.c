/* Module: sfs4rw.dll
   Function: FUN_00479610
   Address: 00479610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479610(int *param_1,byte *param_2,byte *param_3,int *param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  int iVar9;
  char *pcVar10;
  int local_48;
  uint local_44;
  byte *local_40;
  undefined4 *local_3c;
  uint local_38;
  char local_34 [52];
  
  piVar1 = param_1;
  iVar9 = 0;
  puVar7 = (undefined4 *)0x0;
  local_48 = 0;
  local_44 = 0;
  if ((param_2 == (byte *)0x0) ||
     (local_38 = FUN_00479400(param_1,param_2,(int *)&local_40), pbVar8 = param_3, local_38 == 0)) {
    FUN_00475b00((int)piVar1,"Empty keyword in zTXt chunk");
    return;
  }
  if ((param_3 == (byte *)0x0) || ((*param_3 == 0 || (param_5 == -1)))) {
    FUN_00479580(piVar1,local_40,param_3,0);
    FUN_00475a40((int)piVar1,local_40);
    return;
  }
  FUN_00475a40((int)piVar1,local_40);
  if (0 < param_5) {
    sprintf(local_34,"Unknown zTXt compression type %d",param_5);
    FUN_00475b00((int)piVar1,local_34);
    param_5 = 0;
  }
  piVar1[0x1c] = (int)param_4;
  piVar1[0x1b] = (int)pbVar8;
  pbVar8 = (byte *)0x10;
  piVar1[0x1f] = piVar1[0x2a];
  piVar1[0x1e] = piVar1[0x29];
  param_3 = (byte *)0x10;
  param_4 = piVar1 + 0x1b;
  do {
    uVar2 = FUN_0044e4f0(param_4,0);
    if (uVar2 != 0) {
      pcVar10 = (char *)piVar1[0x21];
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "zlib error";
      }
      FUN_00475ad0(piVar1,pcVar10);
    }
    if (piVar1[0x1f] == 0) {
      if (piVar1[0x1c] == 0) break;
      if ((int)local_44 <= iVar9) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = FUN_00475a00(piVar1,(size_t)pbVar8);
          local_44 = local_48 + 4U;
        }
        else {
          local_3c = puVar7;
          puVar7 = FUN_00475a00(piVar1,(size_t)pbVar8);
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
          FUN_00475a40((int)piVar1,local_3c);
          pbVar8 = param_3;
          local_44 = local_48 + 4U;
        }
      }
      puVar3 = FUN_00475a00(piVar1,piVar1[0x2a]);
      *(undefined4 **)(pbVar8 + -0x10 + (int)puVar7) = puVar3;
      uVar2 = piVar1[0x2a];
      puVar4 = (undefined4 *)piVar1[0x29];
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      iVar9 = local_48 + 1;
      pbVar8 = param_3 + 4;
      piVar1[0x1f] = piVar1[0x2a];
      piVar1[0x1e] = piVar1[0x29];
      param_3 = pbVar8;
      local_48 = iVar9;
    }
  } while (piVar1[0x1c] != 0);
  param_3 = (byte *)(iVar9 * 4 + 0x10);
  do {
    while( true ) {
      uVar2 = FUN_0044e4f0(param_4,4);
      if ((uVar2 != 0) && (uVar2 != 1)) {
        pcVar10 = (char *)piVar1[0x21];
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "zlib error";
        }
        FUN_00475ad0(piVar1,pcVar10);
      }
      uVar5 = local_38;
      if ((piVar1[0x1f] != 0) || (uVar2 != 0)) break;
      puVar4 = puVar7;
      if ((int)local_44 <= iVar9) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar4 = FUN_00475a00(piVar1,(size_t)param_3);
          local_44 = iVar9 + 4U;
        }
        else {
          local_3c = puVar7;
          puVar4 = FUN_00475a00(piVar1,(size_t)param_3);
          puVar3 = puVar4;
          for (local_44 = local_44 & 0x3fffffff; local_44 != 0; local_44 = local_44 - 1) {
            *puVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar3 = puVar3 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
          FUN_00475a40((int)piVar1,local_3c);
          local_44 = iVar9 + 4U;
        }
      }
      puVar3 = FUN_00475a00(piVar1,piVar1[0x2a]);
      *(undefined4 **)(param_3 + -0x10 + (int)puVar4) = puVar3;
      uVar2 = piVar1[0x2a];
      puVar7 = (undefined4 *)piVar1[0x29];
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
      iVar9 = local_48 + 1;
      param_3 = param_3 + 4;
      piVar1[0x1e] = piVar1[0x29];
      piVar1[0x1f] = piVar1[0x2a];
      puVar7 = puVar4;
      local_48 = iVar9;
    }
  } while (uVar2 != 1);
  uVar2 = piVar1[0x2a];
  iVar6 = uVar2 * iVar9;
  if ((uint)piVar1[0x1f] < uVar2) {
    iVar6 = iVar6 + (uVar2 - piVar1[0x1f]);
  }
  FUN_00478850(piVar1,(byte *)&DAT_004a6e8c,local_38 + 2 + iVar6);
  FUN_004788a0(piVar1,param_2,uVar5 + 1);
  param_1 = (int *)CONCAT31(param_1._1_3_,(undefined1)param_5);
  FUN_004788a0(piVar1,(byte *)&param_1,1);
  puVar4 = puVar7;
  if (0 < iVar9) {
    do {
      FUN_004788a0(piVar1,(byte *)*puVar4,piVar1[0x2a]);
      FUN_00475a40((int)piVar1,(void *)*puVar4);
      iVar9 = iVar9 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar9 != 0);
  }
  if (local_44 != 0) {
    FUN_00475a40((int)piVar1,puVar7);
  }
  if ((uint)piVar1[0x1f] < (uint)piVar1[0x2a]) {
    FUN_004788a0(piVar1,(byte *)piVar1[0x29],piVar1[0x2a] - piVar1[0x1f]);
  }
  FUN_004788d0(piVar1);
  FUN_0044e3a0((int)param_4);
  return;
}


