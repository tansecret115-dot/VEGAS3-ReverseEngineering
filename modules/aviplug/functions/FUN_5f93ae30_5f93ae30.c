/* Module: aviplug.dll
   Function: FUN_5f93ae30
   Address: 5f93ae30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f93ae30(int *param_1,int *param_2,uint *param_3,undefined4 *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  int unaff_retaddr;
  int iStack_4c;
  uint uStack_44;
  undefined4 *puStack_40;
  uint local_3c;
  undefined4 *puStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  *param_4 = 0;
  param_4[1] = 0;
  local_3c = 0;
  uVar2 = *(uint *)(*(int *)(param_1[0x4c] + 0x44) + 0x28);
  local_18 = *(int *)(*(int *)(param_1[0x4c] + 0x44) + 0x2c);
  iVar6 = (**(code **)(*param_1 + 0x84))(param_1);
  if (iVar6 == 0) {
    dVar5 = _DAT_5f9d7cf8;
    if (param_1[0x52] != 0) {
      dVar5 = (double)*(longlong *)(param_1 + 0x50) * _DAT_5f9d7ce0;
    }
    ceil(((double)unaff_retaddr * dVar5) / (double)iStack_1c);
    iVar7 = ftol();
    iVar9 = *(int *)(param_1[0x4c] + 0x44);
    uVar11 = (uint)*(ushort *)(*(int *)(*(int *)(param_1[0x49] + 0x44) + 0x5c) + 0xc);
    iStack_30 = iVar7;
    uStack_24 = uVar11;
    iStack_8 = FUN_5f94d270(*(int *)(iVar9 + 0x48));
    iStack_8 = iStack_8 * iVar7;
    iVar12 = iStack_8 * uVar11;
    iVar7 = 0;
    if (0 < param_1[0x48]) {
      local_3c = 0;
      do {
        iVar3 = *(int *)(local_3c + 0x44 + param_1[0x49]);
        puVar8 = FUN_5f9401f0(uVar2,0,iVar12,0,(undefined4 *)(iVar3 + 0x6c));
        *(undefined4 **)(iVar3 + 0x68) = puVar8;
        if (puVar8 == (undefined4 *)0x0) goto LAB_5f93b564;
        iVar7 = iVar7 + 1;
        local_3c = local_3c + 0x48;
      } while (iVar7 < param_1[0x48]);
    }
    puStack_40 = FUN_5f9401f0(uVar2,0,*(int *)(iVar9 + 0x24),0,&uStack_10);
    if (puStack_40 == (undefined4 *)0x0) {
LAB_5f93b564:
      iVar6 = -0x7ff8fff2;
    }
    else {
      iStack_4c = 0;
      if (0 < param_1[0x5c]) {
        do {
          if (param_1[0x53] == 0) {
LAB_5f93afbe:
            if (iVar6 < 0) break;
          }
          else {
            iVar9 = FUN_5f941430(uVar2);
            iVar6 = 0;
            if (iVar9 != 0) {
              iVar6 = (**(code **)(*param_1 + 0x74))();
              if (-1 < iVar6) {
                iVar6 = FUN_5f9410c0(uVar2,(uchar *)(param_1 + 0xcb));
                goto LAB_5f93afbe;
              }
              break;
            }
          }
          iStack_1c = 0;
          if (0 < param_1[0x4b]) {
            iStack_2c = 0;
            do {
              iVar7 = iStack_2c + param_1[0x4c];
              iVar9 = *(int *)(iVar7 + 0x44);
              iStack_14 = iVar7;
              FUN_5f94d1c0(*(int *)(iVar9 + 0x48),iStack_30,(int *)&stack0xffffffb0);
              iVar12 = 0;
              local_18 = 0;
              if (0 < *(int *)(iVar9 + 0x4c)) {
                puStack_38 = (undefined4 *)(iVar9 + 0x58);
                do {
                  iVar3 = *(int *)(param_1[0x49] + 0x44 + puStack_38[3] * 0x48);
                  iVar7 = param_1[0x49] + puStack_38[3] * 0x48;
                  *(undefined4 *)(iVar3 + 0x7c) = *(undefined4 *)(iVar3 + 0x68);
                  *puStack_38 = 0;
                  puStack_38[-1] = *(undefined4 *)(iVar3 + 0x7c);
                  if (*(int *)(iVar7 + 0x40) == 0) {
                    iVar6 = (**(code **)(*param_1 + 100))
                                      (param_1,iVar7,*(undefined4 *)(iVar3 + 0x68),
                                       *(undefined4 *)(iVar3 + 0x6c),0,&local_3c,&uStack_28);
                    if (iVar6 < 0) goto LAB_5f93b569;
                    if ((int)local_3c < 0) {
                      uStack_20 = local_18 - uStack_44;
                      puVar8 = (undefined4 *)(*(int *)(iVar3 + 0x68) + uStack_44);
                      for (uVar11 = uStack_20 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *puVar8 = 0;
                        puVar8 = puVar8 + 1;
                      }
                      for (uVar11 = uStack_20 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *(undefined1 *)puVar8 = 0;
                        puVar8 = (undefined4 *)((int)puVar8 + 1);
                      }
                    }
                    if (uStack_28 == 0) {
                      *(undefined4 *)(iVar7 + 0x40) = 1;
                      iStack_4c = iStack_4c + 1;
                      iVar6 = 0;
                    }
                    else {
                      iVar6 = FUN_5f940560(uVar2,*(uint *)(iVar7 + 4),uStack_28,0,
                                           *(int *)(iVar3 + 0x68),uStack_44,(undefined4 *)0x0);
                      if (iVar6 < 0) goto LAB_5f93b569;
                      uVar11 = *param_3;
                      *param_3 = uVar11 + local_3c;
                      param_3[1] = param_3[1] + ((int)local_3c >> 0x1f) +
                                   (uint)CARRY4(uVar11,local_3c);
                      lVar14 = __allmul(*(uint *)(iVar7 + 0x30),*(int *)(iVar7 + 0x34),local_3c,
                                        (int)local_3c >> 0x1f);
                      uVar11 = param_1[0x110];
                      param_1[0x110] = uVar11 + (uint)lVar14;
                      param_1[0x111] =
                           param_1[0x111] + (int)((ulonglong)lVar14 >> 0x20) +
                           (uint)CARRY4(uVar11,(uint)lVar14);
                      iVar6 = (**(code **)(*param_2 + 0x18))(param_2,param_1[0x110]);
                    }
                  }
                  iVar12 = iVar12 + 1;
                  puStack_38 = puStack_38 + 6;
                  iVar7 = iStack_14;
                } while (iVar12 < *(int *)(iVar9 + 0x4c));
              }
              if (iVar6 < 0) goto LAB_5f93b569;
              if (*(int *)(iVar7 + 0x40) == 0) {
                iVar12 = 0;
                if (0 < iStack_30) {
                  do {
                    iVar6 = (**(code **)(*param_1 + 0x60))
                                      (param_1,iVar7,puStack_40,uStack_10,&iStack_c);
                    if (iVar6 < 0) {
                      if (iVar6 != -0x7ffb1f4e) break;
                      iVar6 = FUN_5f940320(uVar2,*(uint *)(iVar7 + 4));
                      if (iVar6 < 0) goto LAB_5f93b569;
                      if (0 < *(int *)(iVar9 + 0x4c)) {
                        FUN_5f94d1c0(*(int *)(iVar9 + 0x48),1,&iStack_34);
                        FUN_5f94da00(*(int *)(iVar9 + 0x48),1);
                        iVar6 = 0;
                        if (0 < *(int *)(iVar9 + 0x4c)) {
                          piVar13 = (int *)(iVar9 + 0x58);
                          do {
                            iVar3 = *(int *)(param_1[0x49] + 0x44 + piVar13[3] * 0x48);
                            piVar10 = (int *)(iVar3 + 0x7c);
                            *piVar10 = *piVar10 + uStack_20;
                            *piVar13 = *piVar13 - iStack_34;
                            piVar13[-1] = *(int *)(iVar3 + 0x7c);
                            iVar6 = iVar6 + 1;
                            piVar13 = piVar13 + 6;
                          } while (iVar6 < *(int *)(iVar9 + 0x4c));
                        }
                      }
                      uVar11 = *param_3;
                      *param_3 = uVar11 + 1;
                      param_3[1] = param_3[1] + (uint)(0xfffffffe < uVar11);
                      uVar11 = *(uint *)(iVar7 + 0x30);
                      uVar4 = param_1[0x110];
                      iVar6 = *(int *)(iVar7 + 0x34);
                      param_1[0x110] = uVar4 + uVar11;
                      param_1[0x111] = param_1[0x111] + iVar6 + (uint)CARRY4(uVar4,uVar11);
                      iVar6 = (**(code **)(*param_2 + 0x18))(param_2,param_1[0x110]);
                    }
                    else {
                      if (iVar6 == 1) {
                        *(undefined4 *)(iVar7 + 0x40) = 1;
                        iStack_4c = iStack_4c + 1;
                        iVar6 = 0;
                        goto LAB_5f93b3cd;
                      }
                      piVar13 = (int *)(iVar9 + 0x4c);
                      if (0 < *(int *)(iVar9 + 0x4c)) {
                        iVar6 = FUN_5f94da20(*(int **)(iVar9 + 0x48),0,(uint)puStack_40,piVar13);
                        if (iVar6 < 0) goto LAB_5f93b569;
                        iVar6 = 0;
                        if (0 < *piVar13) {
                          piVar10 = (int *)(iVar9 + 0x60);
                          do {
                            iVar3 = *(int *)(param_1[0x49] + 0x44 + piVar10[1] * 0x48);
                            iStack_34 = piVar10[-1] + *piVar10;
                            uStack_20 = iStack_34 * uStack_24;
                            piVar1 = (int *)(iVar3 + 0x7c);
                            *piVar1 = *piVar1 + uStack_20;
                            piVar10[-2] = piVar10[-2] - iStack_34;
                            piVar10[-3] = *(int *)(iVar3 + 0x7c);
                            iVar6 = iVar6 + 1;
                            piVar10 = piVar10 + 6;
                          } while (iVar6 < *piVar13);
                        }
                      }
                      iVar6 = FUN_5f940560(uVar2,*(uint *)(iVar7 + 4),1,iStack_c,(int)puStack_40,
                                           uStack_44,(undefined4 *)0x0);
                      if (iVar6 < 0) goto LAB_5f93b569;
                      uVar11 = *param_3;
                      *param_3 = uVar11 + 1;
                      param_3[1] = param_3[1] + (uint)(0xfffffffe < uVar11);
                      uVar11 = *(uint *)(iVar7 + 0x30);
                      uVar4 = param_1[0x110];
                      iVar6 = *(int *)(iVar7 + 0x34);
                      param_1[0x110] = uVar4 + uVar11;
                      param_1[0x111] = param_1[0x111] + iVar6 + (uint)CARRY4(uVar4,uVar11);
                      iVar6 = (**(code **)(*param_2 + 0x18))(param_2,param_1[0x110]);
                    }
                    if (iVar6 < 0) goto LAB_5f93b569;
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < iStack_30);
                }
                if (iVar6 < 0) goto LAB_5f93b569;
              }
LAB_5f93b3cd:
              iStack_1c = iStack_1c + 1;
              iStack_2c = iStack_2c + 0x48;
            } while (iStack_1c < param_1[0x4b]);
          }
          iVar9 = iStack_8;
          if (iVar6 < 0) break;
          iVar7 = 0;
          if (0 < param_1[0x48]) {
            iStack_2c = 0;
            do {
              iVar12 = param_1[0x49] + iStack_2c;
              if ((*(int *)(iVar12 + 0x40) == 0) &&
                 (iVar3 = *(int *)(iVar12 + 0x44), *(int *)(iVar3 + 0x80) == 0)) {
                iVar6 = (**(code **)(*param_1 + 100))
                                  (param_1,iVar12,*(undefined4 *)(iVar3 + 0x68),
                                   *(undefined4 *)(iVar3 + 0x6c),iVar9,&local_3c,&uStack_28);
                if (iVar6 < 0) break;
                if (uStack_28 == 0) {
                  *(undefined4 *)(iVar12 + 0x40) = 1;
                  iStack_4c = iStack_4c + 1;
                  iVar6 = 0;
                }
                else {
                  iVar6 = FUN_5f940560(uVar2,*(uint *)(iVar12 + 4),uStack_28,0,
                                       *(int *)(iVar3 + 0x68),uStack_44,(undefined4 *)0x0);
                  if (iVar6 < 0) break;
                  uVar11 = *param_3;
                  *param_3 = uVar11 + local_3c;
                  param_3[1] = param_3[1] + ((int)local_3c >> 0x1f) + (uint)CARRY4(uVar11,local_3c);
                  lVar14 = __allmul(*(uint *)(iVar12 + 0x30),*(int *)(iVar12 + 0x34),local_3c,
                                    (int)local_3c >> 0x1f);
                  uVar11 = param_1[0x110];
                  param_1[0x110] = uVar11 + (uint)lVar14;
                  param_1[0x111] =
                       param_1[0x111] + (int)((ulonglong)lVar14 >> 0x20) +
                       (uint)CARRY4(uVar11,(uint)lVar14);
                  iVar6 = (**(code **)(*param_2 + 0x18))(param_2,param_1[0x110]);
                }
              }
              iVar7 = iVar7 + 1;
              iStack_2c = iStack_2c + 0x48;
            } while (iVar7 < param_1[0x48]);
          }
          FUN_5f9414a0(uVar2);
          if (param_1[0x5c] <= iStack_4c) break;
        } while( true );
      }
    }
  }
LAB_5f93b569:
  iVar7 = 0;
  iVar9 = 0;
  if (0 < param_1[0x48]) {
    do {
      iVar12 = *(int *)(param_1[0x49] + 0x44 + iVar7);
      if (*(LPVOID *)(iVar12 + 0x68) != (LPVOID)0x0) {
        FUN_5f9402f0(uVar2,*(LPVOID *)(iVar12 + 0x68));
        *(undefined4 *)(iVar12 + 0x68) = 0;
        *(undefined4 *)(iVar12 + 0x6c) = 0;
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0x48;
    } while (iVar9 < param_1[0x48]);
  }
  if (puStack_40 != (undefined4 *)0x0) {
    FUN_5f9402f0(uVar2,puStack_40);
  }
  return iVar6;
}


