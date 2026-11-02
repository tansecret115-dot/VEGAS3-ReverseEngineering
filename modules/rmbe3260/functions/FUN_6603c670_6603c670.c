/* Module: rmbe3260.dll
   Function: FUN_6603c670
   Address: 6603c670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_6603c670(void)

{
  char cVar1;
  undefined4 uVar2;
  HKEY pHVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  LSTATUS LVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  char *pcVar11;
  char *pcVar12;
  uint uVar13;
  undefined1 local_3fc [264];
  char local_2f4 [36];
  CHAR local_2d0;
  undefined4 local_2cf [65];
  char local_1c8 [68];
  undefined1 local_184 [3];
  undefined1 auStack_181 [257];
  undefined4 local_80 [7];
  char local_64 [32];
  int local_44 [3];
  LPCSTR local_38 [3];
  int local_2c [4];
  LONG local_1c;
  DWORD local_18;
  undefined4 local_14;
  HKEY local_10;
  HKEY local_c;
  undefined4 *local_8;
  
  DAT_6607529c = 0;
  DAT_660752a0 = operator_new(0xa0);
  DAT_660752a4 = operator_new(0x50);
  DAT_660752a8 = operator_new(0x50);
  DAT_660752b0 = operator_new(0x280);
  if (DAT_660752b0 == (void *)0x0) {
    DAT_660752b0 = (void *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((int)DAT_660752b0 + 8);
    iVar9 = 0x14;
    do {
      puVar4[-1] = 0x10;
      *puVar4 = 0x10;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 1;
      puVar4[4] = 1;
      puVar4[5] = 0x4e4f4e45;
      puVar4 = puVar4 + 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  local_2c[0] = 0x52563130;
  local_2c[1] = 0x52563230;
  local_2c[2] = 0x52563330;
  local_44[0] = 1;
  local_44[1] = 2;
  local_44[2] = 1;
  local_c = (HKEY)0x0;
  do {
    iVar9 = *(int *)((int)local_2c + (int)local_c);
    puVar4 = operator_new(0x3c);
    if (puVar4 == (undefined4 *)0x0) {
      local_8 = (undefined4 *)0x0;
    }
    else {
      local_8 = (undefined4 *)FUN_660424a0(puVar4);
    }
    puVar4 = local_8;
    iVar5 = FUN_66042510(local_8,iVar9,(char *)0x0);
    if ((iVar5 == 0) && (iVar5 = FUN_66042720(puVar4,iVar9,&local_14), iVar5 == 0)) {
      local_18 = 0;
      local_1c = *(int *)((int)local_44 + (int)local_c);
      if (0 < local_1c) {
        do {
          DVar10 = local_18;
          *(int *)((int)DAT_660752a0 + DAT_6607529c * 8) = iVar9;
          *(DWORD *)((int)DAT_660752a0 + DAT_6607529c * 8 + 4) = local_18;
          iVar5 = FUN_66042930(puVar4,local_14,local_64);
          if (iVar5 == 0) {
            if (1 < local_1c) {
              if (*(int *)((int)DAT_660752a0 + DAT_6607529c * 8 + 4) == 1) {
                uVar13 = 0x5dd0061;
              }
              else {
                uVar13 = 0x5dd0060;
              }
              FUN_6602e290(uVar13,local_64,0x20);
            }
            uVar13 = 0xffffffff;
            pcVar11 = local_64;
            do {
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            pvVar6 = operator_new(~uVar13);
            *(void **)((int)DAT_660752a4 + DAT_6607529c * 4) = pvVar6;
            uVar13 = 0xffffffff;
            pcVar11 = local_64;
            do {
              pcVar12 = pcVar11;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pcVar12 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar1 != '\0');
            uVar13 = ~uVar13;
            pcVar11 = pcVar12 + -uVar13;
            pcVar12 = *(char **)((int)DAT_660752a4 + DAT_6607529c * 4);
            for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pcVar12 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
            }
            FUN_6605c9a0(&DAT_66075258,*(byte **)((int)DAT_660752a4 + DAT_6607529c * 4),iVar9);
            uVar13 = 0;
            if ((iVar9 == 0x52563230) || (iVar9 == 0x52563330)) {
              *(undefined4 *)(DAT_6607529c * 0x20 + 4 + (int)DAT_660752b0) = 4;
              *(undefined4 *)(DAT_6607529c * 0x20 + 8 + (int)DAT_660752b0) = 4;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0xc + (int)DAT_660752b0) = 1;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0x14 + (int)DAT_660752b0) = 1;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0x10 + (int)DAT_660752b0) = 1;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0x1c + (int)DAT_660752b0) = 0x4e4f4e45;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0x18 + (int)DAT_660752b0) = 1;
              if ((iVar9 == 0x52563230) && (*(int *)((int)DAT_660752a0 + DAT_6607529c * 8 + 4) == 0)
                 ) {
                uVar13 = 0x5b;
              }
              else if ((iVar9 == 0x52563230) &&
                      (*(int *)((int)DAT_660752a0 + DAT_6607529c * 8 + 4) == 1)) {
                uVar13 = 0x5c;
              }
              else if (iVar9 == 0x52563330) {
                uVar13 = 0x5d;
              }
            }
            else {
              *(undefined4 *)(DAT_6607529c * 0x20 + 4 + (int)DAT_660752b0) = 0x10;
              *(undefined4 *)(DAT_6607529c * 0x20 + 8 + (int)DAT_660752b0) = 0x10;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0xc + (int)DAT_660752b0) = 0;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0x14 + (int)DAT_660752b0) = 1;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0x10 + (int)DAT_660752b0) = 1;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0x1c + (int)DAT_660752b0) = 0x4e4f4e45;
              *(undefined4 *)(DAT_6607529c * 0x20 + 0x18 + (int)DAT_660752b0) = 1;
              uVar13 = 0x5a;
            }
            local_2f4[0] = '\0';
            FUN_6602e290(uVar13 | 0x5dd0000,local_2f4,300);
            uVar13 = 0xffffffff;
            pcVar11 = local_2f4;
            do {
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar1 != '\0');
            pvVar6 = operator_new(~uVar13);
            *(void **)((int)DAT_660752a8 + DAT_6607529c * 4) = pvVar6;
            uVar13 = 0xffffffff;
            pcVar11 = local_2f4;
            do {
              pcVar12 = pcVar11;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pcVar12 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar12;
            } while (cVar1 != '\0');
            uVar13 = ~uVar13;
            pcVar11 = pcVar12 + -uVar13;
            pcVar12 = *(char **)((int)DAT_660752a8 + DAT_6607529c * 4);
            for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *pcVar12 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar12 = pcVar12 + 1;
            }
            DAT_6607529c = DAT_6607529c + 1;
            DVar10 = local_18;
            puVar4 = local_8;
          }
          local_18 = DVar10 + 1;
        } while ((int)local_18 < local_1c);
      }
      FUN_66042750(puVar4,local_14);
    }
    if (puVar4 != (undefined4 *)0x0) {
      FUN_660424e0(puVar4);
      operator_delete(puVar4);
    }
    local_c = local_c + 1;
  } while ((int)local_c < 0xc);
  pcVar11 = s_Software_RealNetworks_RealProduc_6606e2c4;
  pcVar12 = local_1c8;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar12 = pcVar12 + 4;
  }
  *(undefined2 *)pcVar12 = *(undefined2 *)pcVar11;
  FUN_6605b650(local_38);
  FUN_6605bfd0(local_38,local_1c8);
  local_10 = (HKEY)0x0;
  iVar9 = RegOpenKeyA((HKEY)0x80000000,local_38[0],&local_10);
  DVar10 = 0;
  while ((iVar9 == 0 && (DAT_6607529c < 0x14))) {
    local_3fc._1_3_ = (undefined3)((uint)local_3fc._0_4_ >> 8);
    local_3fc[0] = DAT_66075004;
    puVar4 = local_2cf;
    for (iVar9 = 0x41; pHVar3 = local_10, iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_c = (HKEY)0x0;
    puVar4 = (undefined4 *)(local_3fc + 1);
    local_2d0 = DAT_66075004;
    for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_18 = DVar10 + 1;
    local_2c[3] = RegEnumKeyA(pHVar3,DVar10,local_3fc,0x104);
    uVar2 = local_3fc._0_4_;
    if (local_2c[3] != 0) break;
    LVar7 = RegOpenKeyA(local_10,local_3fc,&local_c);
    if (LVar7 == 0) {
      local_1c = 0x104;
      LVar7 = RegQueryValueA(local_c,s_DLLName_6606e2bc,&local_2d0,&local_1c);
      RegCloseKey(local_c);
    }
    FUN_660424a0(local_80);
    if (((LVar7 == 0) && (iVar9 = FUN_66042510(local_80,uVar2,&local_2d0), iVar9 == 0)) &&
       (iVar9 = FUN_66042720(local_80,uVar2,&local_14), iVar9 == 0)) {
      *(undefined4 *)((int)DAT_660752a0 + DAT_6607529c * 8) = uVar2;
      *(undefined4 *)((int)DAT_660752a0 + DAT_6607529c * 8 + 4) = 0;
      pvVar6 = operator_new(0x20);
      *(void **)((int)DAT_660752a4 + DAT_6607529c * 4) = pvVar6;
      iVar9 = FUN_66042930(local_80,local_14,*(undefined4 *)((int)DAT_660752a4 + DAT_6607529c * 4));
      if (iVar9 == 0) {
        FUN_6605c9a0(&DAT_66075258,*(byte **)((int)DAT_660752a4 + DAT_6607529c * 4),uVar2);
        LVar7 = RegOpenKeyA(local_10,local_3fc,&local_c);
        if (LVar7 == 0) {
          _local_184 = CONCAT31(stack0xfffffe7d,DAT_66075004);
          puVar4 = (undefined4 *)(local_184 + 1);
          for (iVar9 = 0x40; pHVar3 = local_c, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          *(undefined2 *)puVar4 = 0;
          *(undefined1 *)((int)puVar4 + 2) = 0;
          local_8 = (undefined4 *)0x104;
          LVar7 = RegQueryValueA(pHVar3,s_WidthModulus_6606e2ac,local_184,(PLONG)&local_8);
          if (LVar7 == 0) {
            iVar9 = atoi(local_184);
            *(int *)(DAT_6607529c * 0x20 + 4 + (int)DAT_660752b0) = iVar9;
            local_8 = (undefined4 *)0x104;
            LVar7 = RegQueryValueA(local_c,s_HeightModulus_6606e29c,local_184,(PLONG)&local_8);
          }
          if (LVar7 == 0) {
            iVar9 = atoi(local_184);
            *(int *)(DAT_6607529c * 0x20 + 8 + (int)DAT_660752b0) = iVar9;
            local_8 = (undefined4 *)0x104;
            LVar7 = RegQueryValueA(local_c,s_SupportsSureStream_6606e288,local_184,(PLONG)&local_8);
            if (LVar7 == 0) {
              iVar9 = atoi(local_184);
              *(int *)(DAT_6607529c * 0x20 + 0xc + (int)DAT_660752b0) = iVar9;
              local_8 = (undefined4 *)0x104;
              LVar7 = RegQueryValueA(local_c,s_DoCaptureFrameProcessing_6606e26c,local_184,
                                     (PLONG)&local_8);
              if (LVar7 == 0) {
                iVar9 = atoi(local_184);
                *(int *)(DAT_6607529c * 0x20 + 0x14 + (int)DAT_660752b0) = iVar9;
                local_8 = (undefined4 *)0x104;
                LVar7 = RegQueryValueA(local_c,s_SupportsOutputPreview_6606e254,local_184,
                                       (PLONG)&local_8);
                if (LVar7 == 0) {
                  iVar9 = atoi(local_184);
                  *(int *)(DAT_6607529c * 0x20 + 0x10 + (int)DAT_660752b0) = iVar9;
                  local_8 = (undefined4 *)0x104;
                  LVar7 = RegQueryValueA(local_c,s_RequiredCaptureFormat_6606e23c,local_184,
                                         (PLONG)&local_8);
                  if (LVar7 == 0) {
                    *(undefined4 *)(DAT_6607529c * 0x20 + 0x1c + (int)DAT_660752b0) = _local_184;
                    local_8 = (undefined4 *)0x104;
                    LVar7 = RegQueryValueA(local_c,s_SupportsStaticEncoding_6606e224,local_184,
                                           (PLONG)&local_8);
                    if (LVar7 == 0) {
                      iVar9 = atoi(local_184);
                      *(int *)(DAT_6607529c * 0x20 + 0x18 + (int)DAT_660752b0) = iVar9;
                      local_8 = (undefined4 *)0x104;
                      LVar7 = RegQueryValueA(local_c,s_Description_6606e218,local_184,
                                             (PLONG)&local_8);
                      if (LVar7 == 0) {
                        uVar13 = 0xffffffff;
                        pcVar11 = local_184;
                        do {
                          if (uVar13 == 0) break;
                          uVar13 = uVar13 - 1;
                          cVar1 = *pcVar11;
                          pcVar11 = pcVar11 + 1;
                        } while (cVar1 != '\0');
                        pvVar6 = operator_new(~uVar13);
                        *(void **)((int)DAT_660752a8 + DAT_6607529c * 4) = pvVar6;
                        uVar13 = 0xffffffff;
                        pcVar11 = local_184;
                        do {
                          pcVar12 = pcVar11;
                          if (uVar13 == 0) break;
                          uVar13 = uVar13 - 1;
                          pcVar12 = pcVar11 + 1;
                          cVar1 = *pcVar11;
                          pcVar11 = pcVar12;
                        } while (cVar1 != '\0');
                        uVar13 = ~uVar13;
                        pcVar11 = pcVar12 + -uVar13;
                        pcVar12 = *(char **)((int)DAT_660752a8 + DAT_6607529c * 4);
                        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
                          pcVar11 = pcVar11 + 4;
                          pcVar12 = pcVar12 + 4;
                        }
                        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                          *pcVar12 = *pcVar11;
                          pcVar11 = pcVar11 + 1;
                          pcVar12 = pcVar12 + 1;
                        }
                        DAT_6607529c = DAT_6607529c + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          RegCloseKey(local_c);
        }
      }
      FUN_66042750(local_80,local_14);
    }
    FUN_660424e0(local_80);
    DVar10 = local_18;
    iVar9 = local_2c[3];
  }
  if (local_10 != (HKEY)0x0) {
    RegCloseKey(local_10);
  }
  FUN_6605b770((int *)local_38);
  return 0;
}


