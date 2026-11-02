/* Module: vegas30.exe
   Function: FUN_0059ea90
   Address: 0059ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0059ea90(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,undefined4 param_5
                ,int param_6,undefined4 *param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  bool bVar14;
  undefined8 uVar15;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  undefined4 uStack_4;
  
  piVar7 = param_3;
  iVar5 = *param_3;
  local_1c = 0;
  if ((DAT_00648650 == 0) && (DAT_00648654 < 1)) {
    bVar14 = false;
    local_14 = 0;
  }
  else {
    local_14 = 1;
    bVar14 = true;
  }
  local_8 = 0;
  local_c = (undefined4 *)0x0;
  *param_1 = 0;
  local_24 = iVar5;
  if ((((iVar5 != 1) || (DAT_0064a4a4 == 0)) || (0 < DAT_0064b158)) || (bVar14)) {
    puVar9 = param_2;
    if (param_7 != (undefined4 *)0x0) {
      if (((iVar5 == 1) && (!bVar14)) &&
         (iVar5 = FUN_005b0a20(param_3[2],param_2,param_1,param_7,param_2[0x13],
                               *(undefined4 *)(param_3[2] + 0x88)), iVar5 != 0)) {
        return local_1c;
      }
      return 1;
    }
  }
  else {
    iVar2 = FUN_005624d0(&DAT_0064b538);
    puVar9 = param_2;
    if (iVar2 != 0) {
      iVar5 = piVar7[2];
      iVar3 = FUN_005627f0(iVar2);
      puVar9 = param_2;
      puVar4 = local_c;
      if (iVar3 != 0) {
        puVar4 = (undefined4 *)
                 FUN_005b0a20(iVar5,param_2,param_1,iVar3,param_2[0x13],
                              *(undefined4 *)(iVar5 + 0x88));
      }
      FUN_00562540(&DAT_0064b538,iVar2);
      piVar7 = param_3;
      iVar5 = local_24;
      if (puVar4 != (undefined4 *)0x0) {
        return local_1c;
      }
    }
  }
  local_20 = 0;
  local_10 = 0;
  if ((*(byte *)(puVar9 + 0x76) & 1) != 0) {
    local_c = (undefined4 *)0x0;
    if (0 < iVar5) {
      do {
        puVar4 = local_c;
        iVar2 = piVar7[1] * (int)local_c + param_3[2];
        iVar3 = 0;
        param_7 = (undefined4 *)0x0;
        iVar5 = FUN_0057c190(0,iVar2,4);
        param_7 = (undefined4 *)((int)param_7 + iVar5);
        iVar5 = FUN_0057c190(param_7,iVar2 + 0x18,8);
        param_7 = (undefined4 *)((int)param_7 + iVar5);
        if (*(int **)(iVar2 + 0x20) == (int *)0x0) {
          local_28 = 0;
        }
        else {
          local_28 = **(int **)(iVar2 + 0x20);
        }
        iVar5 = FUN_0057c190(param_7,&local_28,4);
        param_7 = (undefined4 *)((int)param_7 + iVar5);
        if (0 < local_28) {
          do {
            FUN_005a1360(&param_7);
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_28);
        }
        iVar5 = FUN_0057c190(param_7,(int *)(iVar2 + 0x30),4);
        param_7 = (undefined4 *)((int)param_7 + iVar5);
        local_10 = 0;
        if (0 < *(int *)(iVar2 + 0x30)) {
          local_18 = 0;
          do {
            iVar8 = local_18 + *(int *)(iVar2 + 0x34);
            iVar5 = FUN_0057c190(param_7,iVar8 + 8,0x10);
            piVar7 = (int *)(iVar8 + 0x18);
            param_7 = (undefined4 *)((int)param_7 + iVar5);
            iVar5 = FUN_0057c190(param_7,piVar7,4);
            param_7 = (undefined4 *)((int)param_7 + iVar5);
            iVar5 = FUN_0057c190(param_7,*(undefined4 *)(iVar8 + 0x1c),*piVar7);
            piVar1 = (int *)(iVar8 + 0x20);
            param_7 = (undefined4 *)((int)param_7 + iVar5);
            iVar5 = FUN_0057c190(param_7,piVar1,4);
            param_7 = (undefined4 *)((int)param_7 + iVar5);
            iVar5 = FUN_0057c190(param_7,*(undefined4 *)(iVar8 + 0x24),*piVar1);
            param_7 = (undefined4 *)((int)param_7 + iVar5);
            iVar5 = *piVar7;
            iVar3 = *piVar1;
            if (iVar5 == iVar3) {
              if (iVar5 == 0) {
                if (iVar3 != 0) goto LAB_0059ed37;
              }
              else {
                bVar14 = true;
                pcVar10 = *(char **)(iVar8 + 0x1c);
                pcVar13 = *(char **)(iVar8 + 0x24);
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar14 = *pcVar10 == *pcVar13;
                  pcVar10 = pcVar10 + 1;
                  pcVar13 = pcVar13 + 1;
                } while (bVar14);
                if (!bVar14) goto LAB_0059ed46;
              }
            }
            else {
LAB_0059ed37:
              if (iVar3 != 0) {
LAB_0059ed46:
                iVar5 = FUN_0057c190(param_7,iVar8 + 0x28,8);
                param_7 = (undefined4 *)((int)param_7 + iVar5);
              }
            }
            iVar5 = FUN_0057c190(param_7,iVar8 + 0x30,8);
            param_7 = (undefined4 *)((int)param_7 + iVar5);
            iVar5 = FUN_0057c190(param_7,iVar8 + 0x38,4);
            param_7 = (undefined4 *)((int)param_7 + iVar5);
            if ((*(byte *)(iVar8 + 0x48) & 4) != 0) {
              iVar5 = FUN_0057c190(param_7,iVar8 + 0x40,8);
              param_7 = (undefined4 *)((int)param_7 + iVar5);
            }
            local_10 = local_10 + 1;
            local_18 = local_18 + 0x50;
            puVar9 = param_2;
            puVar4 = local_c;
          } while (local_10 < *(int *)(iVar2 + 0x30));
        }
        iVar5 = FUN_0057c190(param_7,iVar2 + 0x38,0x40);
        param_7 = (undefined4 *)((int)param_7 + iVar5);
        iVar5 = FUN_0057c190(param_7,iVar2 + 0x78,4);
        param_7 = (undefined4 *)((int)param_7 + iVar5);
        iVar5 = FUN_0057c190(param_7,iVar2 + 0x28,4);
        local_20 = local_20 + (int)param_7 + iVar5;
        local_c = (undefined4 *)((int)puVar4 + 1);
        piVar7 = param_3;
      } while ((int)local_c < local_24);
    }
    iVar5 = FUN_005a5a00(puVar9 + 0x42,1,local_20);
    *param_1 = iVar5;
    if (iVar5 != 0) {
      FUN_005b0f20(puVar9 + 0x42,2);
      return 0;
    }
    local_10 = _SfGetMicrosec_0();
    iVar5 = local_24;
  }
  puVar4 = puVar9 + 0x42;
  param_7 = puVar4;
  FUN_005a5bb0(puVar4,param_4,param_5);
  iVar2 = 0;
  if (0 < iVar5) {
    do {
      piVar7 = param_3;
      pbVar11 = (byte *)(param_3[1] * iVar2 + param_3[2]);
      local_1c = FUN_005b0090(pbVar11,puVar9,&param_2,*(undefined4 *)(pbVar11 + 0x88),puVar9 + 0x10,
                              local_14);
      puVar4 = param_7;
      if (local_1c < 0) break;
      if ((*pbVar11 & 1) != 0) {
        local_8 = 1;
        *param_1 = (int)param_2;
        break;
      }
      if ((*(int *)(pbVar11 + 0x88) == 2) || (*(int *)(pbVar11 + 0x88) == 3)) {
        iVar2 = iVar2 + 1;
        iVar5 = piVar7[1] * iVar2 + param_3[2];
        if ((*(byte *)(param_2 + 0x10d) & 1) != 0) {
          param_2 = (undefined4 *)FUN_005a5de0(param_7,param_2,0,puVar9 + 0x270);
        }
        local_1c = FUN_005b0090(iVar5,puVar9,&local_c,*(undefined4 *)(iVar5 + 0x88),puVar9 + 0x10,1)
        ;
        if (-1 < local_1c) {
          _SfDibMergeFields_32
                    (*param_2,param_2[0x10b],0,*local_c,local_c[0x10b],0,*(int *)(iVar5 + 0x88) == 2
                     ,3);
          if ((code *)local_c[0x114] != (code *)0x0) {
            (*(code *)local_c[0x114])(local_c,local_c[0x115],local_c[0x116]);
          }
        }
      }
      *param_1 = (int)param_2;
      if (param_6 != 0) {
        FUN_005aab60(puVar9 + 0x130,*param_2,param_2[0x10b],param_2[0x10c],
                     *(undefined4 *)(pbVar11 + 0x80),*(undefined4 *)(pbVar11 + 0x84));
        if ((code *)param_2[0x114] != (code *)0x0) {
          (*(code *)param_2[0x114])(param_2,param_2[0x115],param_2[0x116]);
        }
      }
      iVar2 = iVar2 + 1;
      puVar4 = param_7;
    } while (iVar2 < local_24);
  }
  if ((param_6 != 0) && (local_8 == 0)) {
    puVar6 = (undefined4 *)FUN_005a5bd0(puVar4,1,puVar9 + 0x270);
    FUN_005ab510(puVar9 + 0x130,*puVar6,puVar6[0x10b],puVar6[0x10c],param_4,param_5,0);
    *param_1 = (int)puVar6;
  }
  if ((-1 < local_1c) && ((*(byte *)(puVar9 + 0x76) & 1) != 0)) {
    iVar5 = _SfGetMicrosec_0();
    local_8 = 1;
    uStack_4 = 0;
    uVar12 = (uint)(iVar5 - local_10) / 1000;
    uVar15 = ftol();
    iVar5 = __alldiv(uVar15,10000,0);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    if ((((uint)(iVar5 * 100) < uVar12 * 100) && (iVar5 = *param_1, iVar5 != 0)) &&
       ((*(byte *)(iVar5 + 0x434) & 5) == 0)) {
      FUN_005a5a60(puVar4,iVar5,local_20,uVar12,param_4,param_5);
      FUN_005b0f20(puVar4,0);
      return local_1c;
    }
    FUN_005b0f20(puVar4,1);
  }
  return local_1c;
}


