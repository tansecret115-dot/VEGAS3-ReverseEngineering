/* Module: vegas30k.dll
   Function: SfDvdiAddTitleToTitleSet
   Address: 01088f30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDvdiAddTitleToTitleSet(void *,struct tagSFVTS_INFO *,struct tagIFO_FRAMETIME *)
    */

long SfDvdiAddTitleToTitleSet(void *param_1,tagSFVTS_INFO *param_2,tagIFO_FRAMETIME *param_3)

{
  int *piVar1;
  short sVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  tagSFIFO_PGCI *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58 [2];
  undefined4 *local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  char local_20 [4];
  undefined4 local_1c;
  undefined4 local_4;
  
                    /* 0x88f30  365
                       ?SfDvdiAddTitleToTitleSet@@YGJPAXPAUtagSFVTS_INFO@@PAUtagIFO_FRAMETIME@@@Z */
  if (param_1 == (void *)0x0) {
    puVar4 = &DAT_80070057;
  }
  else {
    puVar4 = (undefined1 *)SfCdiAllocateProgramChainInfo(&local_64);
    if (-1 < (int)puVar4) {
      if (*(int **)(param_2 + 0x48) == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = **(int **)(param_2 + 0x48);
      }
      *(int *)(local_64 + 4) = iVar5 + -1;
      local_64[8] = (tagSFIFO_PGCI)0x1;
      local_64[9] = (tagSFIFO_PGCI)0x0;
      local_64[0xb] = (tagSFIFO_PGCI)0x1;
      local_64[0xc] = (tagSFIFO_PGCI)0x1;
      memmove(local_64 + 0xd,param_3,4);
      *(undefined4 *)(local_64 + 0x14) = 0;
      local_64[0x18] = (tagSFIFO_PGCI)((byte)local_64[0x18] | 0x80);
      uVar6 = 0;
      do {
        uVar7 = uVar6 + 4;
        local_64[uVar6 + 0xaf] = (tagSFIFO_PGCI)0x0;
        local_64[uVar6 + 0xb0] = (tagSFIFO_PGCI)0x10;
        local_64[uVar6 + 0xb1] = (tagSFIFO_PGCI)0x10;
        local_64[uVar6 + 0xb2] = (tagSFIFO_PGCI)0x10;
        uVar6 = uVar7;
      } while (uVar7 < 0x40);
      *(undefined2 *)(local_64 + 0xa8) = 0;
      *(undefined2 *)(local_64 + 0xaa) = 0;
      *(undefined2 *)(local_64 + 0xac) = 0;
      local_64[0xae] = (tagSFIFO_PGCI)0x0;
      *(undefined4 *)(local_64 + 0xfc) = 0;
      local_4c = 0x30;
      local_4b = 1;
      puVar4 = (undefined1 *)
               _SfList_InsertList_16(*(undefined4 *)(local_64 + 0xf4),0xffffffff,&local_4c,1);
      if (-1 < (int)puVar4) {
        *(undefined4 *)(local_64 + 0x100) = 1;
        *(undefined4 *)(local_64 + 0x104) = 0;
        *(undefined4 *)(local_64 + 0x108) = 0;
        *(undefined4 *)(local_64 + 0x10c) = 0;
        local_5c = 1;
        puVar4 = (undefined1 *)
                 _SfList_InsertList_16(*(undefined4 *)(local_64 + 0x110),0xffffffff,&local_5c,1);
        if (-1 < (int)puVar4) {
          puVar9 = &local_38;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          local_38._0_1_ = 2;
          memmove(local_34,param_3,4);
          local_30 = 0;
          local_2c = 0;
          piVar1 = *(int **)(param_2 + 0x38);
          if (piVar1 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *piVar1;
          }
          if (piVar1 == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *piVar1;
          }
          if ((iVar5 + -1 < 0) || (iVar10 + -1 < iVar5 + -1)) {
            puVar9 = (undefined4 *)0x0;
          }
          else if (piVar1 == (int *)0x0) {
            puVar9 = (undefined4 *)(iRam00000008 - _DAT_00000004);
          }
          else {
            puVar9 = (undefined4 *)((*piVar1 + -1) * piVar1[1] + piVar1[2]);
          }
          local_28 = *puVar9;
          local_24 = *(int *)(param_2 + 0x3c) + -1;
          puVar4 = (undefined1 *)
                   _SfList_InsertList_16(*(undefined4 *)(local_64 + 0x114),0xffffffff,&local_38,1);
          if (-1 < (int)puVar4) {
            local_60 = 0x1000001;
            puVar4 = (undefined1 *)
                     _SfList_InsertList_16(*(undefined4 *)(local_64 + 0x118),0xffffffff,&local_60,1)
            ;
            if (-1 < (int)puVar4) {
              puVar4 = (undefined1 *)
                       _SfList_AllocAndInsertItem_20
                                 (*(undefined4 *)(param_2 + 0x4c),&local_64,4,0xffffffff,0);
              if (-1 < (int)puVar4) {
                puVar4 = (undefined1 *)
                         _SfList_AllocAndInsertItem_20
                                   (*(undefined4 *)(param_2 + 0x48),0,0x14,0xffffffff,local_58);
                if (-1 < (int)puVar4) {
                  piVar1 = *(int **)(param_2 + 0x48);
                  if (piVar1 == (int *)0x0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = *piVar1;
                  }
                  if ((local_58[0] < 0) || (iVar5 + -1 < local_58[0])) {
                    puVar9 = (undefined4 *)0x0;
                  }
                  else {
                    puVar9 = *(undefined4 **)(piVar1[2] + local_58[0] * 4);
                  }
                  *puVar9 = 0;
                  puVar9[1] = 0;
                  puVar9[2] = 0;
                  puVar9[3] = 0;
                  puVar9[4] = 0;
                  *(undefined1 *)((int)puVar9 + 2) = 0;
                  *(undefined1 *)((int)puVar9 + 3) = 0;
                  if (*(undefined4 **)(param_2 + 0x30) == (undefined4 *)0x0) {
                    sVar2 = 0;
                  }
                  else {
                    sVar2 = (short)**(undefined4 **)(param_2 + 0x30);
                  }
                  puVar9[2] = 1;
                  *(short *)(puVar9 + 1) = sVar2 + 1;
                  if (*(int **)(param_2 + 0x48) == (int *)0x0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = **(int **)(param_2 + 0x48);
                  }
                  puVar9[3] = iVar5 + -1;
                  puVar9[4] = local_64;
                  pcVar11 = local_20;
                  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                    pcVar11[0] = '\0';
                    pcVar11[1] = '\0';
                    pcVar11[2] = '\0';
                    pcVar11[3] = '\0';
                    pcVar11 = pcVar11 + 4;
                  }
                  if (*(undefined4 **)(param_2 + 0x30) == (undefined4 *)0x0) {
                    local_20[0] = '\0';
                  }
                  else {
                    local_20[0] = (char)**(undefined4 **)(param_2 + 0x30);
                  }
                  local_20[0] = local_20[0] + '\x01';
                  local_1c = 1;
                  puVar4 = (undefined1 *)
                           _SfList_CreateExZ_32(&local_4,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
                  if (-1 < (int)puVar4) {
                    local_58[1] = 0x10001;
                    local_50 = puVar9;
                    puVar4 = (undefined1 *)
                             _SfList_AllocAndInsertItem_20(local_4,local_58 + 1,8,0xffffffff,0);
                    if (-1 < (int)puVar4) {
                      puVar4 = (undefined1 *)
                               _SfList_AllocAndInsertItem_20
                                         (*(undefined4 *)(param_2 + 0x30),local_20,0x20,0xffffffff,0
                                         );
                      if (-1 < (int)puVar4) {
                        if (*(undefined4 **)(param_2 + 0x34) == (undefined4 *)0x0) {
                          uVar3 = 0;
                        }
                        else {
                          uVar3 = (undefined2)**(undefined4 **)(param_2 + 0x34);
                        }
                        iVar5 = 0;
                        *(undefined2 *)(param_2 + 0x40) = uVar3;
                        piVar1 = *(int **)(param_2 + 0x38);
                        local_44 = 0x10001;
                        local_40 = 0;
                        if (piVar1 != (int *)0x0) {
                          iVar5 = *piVar1;
                        }
                        if (piVar1 == (int *)0x0) {
                          iVar10 = 0;
                        }
                        else {
                          iVar10 = *piVar1;
                        }
                        if ((iVar5 + -1 < 0) || (iVar10 + -1 < iVar5 + -1)) {
                          puVar9 = (undefined4 *)0x0;
                        }
                        else if (piVar1 == (int *)0x0) {
                          puVar9 = (undefined4 *)(iRam00000008 - _DAT_00000004);
                        }
                        else {
                          puVar9 = (undefined4 *)((*piVar1 + -1) * piVar1[1] + piVar1[2]);
                        }
                        local_3c = *puVar9;
                        puVar4 = (undefined1 *)
                                 _SfList_AllocAndInsertItem_20
                                           (*(undefined4 *)(param_2 + 0x44),&local_44,0xc,0xffffffff
                                            ,0);
                        if (-1 < (int)puVar4) {
                          lVar8 = FUN_01087280(param_1,param_2,local_20);
                          return lVar8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (long)puVar4;
}


