/* Module: vegas30.exe
   Function: FUN_004a7c00
   Address: 004a7c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004a8951) */
/* WARNING: Removing unreachable block (ram,0x004a7e1f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a7c00(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  char cVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  tagPOINT tVar5;
  tagPOINT tVar6;
  tagPOINT tVar7;
  tagPOINT tVar8;
  tagPOINT tVar9;
  tagPOINT tVar10;
  tagPOINT tVar11;
  tagPOINT tVar12;
  tagPOINT tVar13;
  SHORT SVar14;
  undefined4 uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  undefined4 *puVar24;
  uint uVar25;
  float10 fVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 uVar29;
  tagPOINT tVar30;
  int local_19c;
  uint local_198;
  int local_194;
  uint local_190;
  uint local_18c;
  tagPOINT local_188;
  int local_180;
  int local_17c;
  tagPOINT local_178;
  int local_170;
  int local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  undefined1 local_150 [40];
  undefined4 local_128 [74];
  
  tVar13.y = local_188.y;
  tVar13.x = local_188.x;
  tVar12.y = local_188.y;
  tVar12.x = local_188.x;
  tVar11.y = local_188.y;
  tVar11.x = local_188.x;
  tVar10.y = local_188.y;
  tVar10.x = local_188.x;
  tVar9.y = local_188.y;
  tVar9.x = local_188.x;
  tVar8.y = local_188.y;
  tVar8.x = local_188.x;
  tVar7.y = local_188.y;
  tVar7.x = local_188.x;
  tVar6.y = local_188.y;
  tVar6.x = local_188.x;
  tVar5.y = local_188.y;
  tVar5.x = local_188.x;
  tVar30.y = local_188.y;
  tVar30.x = local_188.x;
  puVar1 = *(undefined4 **)(param_1 + 0xbc8);
  local_194 = 1;
  local_164 = 0;
  local_168 = 0;
  if (param_4 == 0) {
    local_190 = 0;
    iVar21 = 0;
LAB_004a7c4c:
    piVar16 = *(int **)(param_1 + 0xcd0);
    if (piVar16 == (int *)0x0) {
      iVar20 = 0;
    }
    else {
      iVar20 = *piVar16;
    }
    if (iVar20 + -1 < 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(uint *)piVar16[2];
    }
  }
  else {
    uVar22 = *(uint *)(param_4 + 0xc);
    iVar21 = *(int *)(param_4 + 4);
    local_190 = uVar22;
    if (uVar22 == 0) goto LAB_004a7c4c;
  }
  if ((DAT_0064761c & 0x800) != 0) {
    if (param_3 < 0xa0c3) {
      if (param_3 < 0xa0c1) {
        if (param_3 < 0x9d14) {
          if ((param_3 < 0x9d12) && ((param_3 != 2 && (param_3 != 0x9ca5)))) goto LAB_004a7ce1;
        }
        else if ((param_3 != 0x9dd4) && (param_3 != 0x9e8f)) goto LAB_004a7ce1;
      }
    }
    else if (param_3 < 0xa2b4) {
      if (((param_3 < 0xa2b2) && (param_3 != 0xa0d4)) && (param_3 != 0xa1d0)) {
LAB_004a7ce1:
        if (((param_3 < 0xa2cb) || (0xa2ea < param_3)) && ((param_3 < 0xa316 || (0xa330 < param_3)))
           ) goto LAB_004a991f;
      }
    }
    else if (param_3 != 0xa7ab) goto LAB_004a7ce1;
  }
  if ((999 < param_3) && (param_3 < 0x44d)) {
    if (uVar22 != 0) {
      FUN_005c86c0(puVar1,uVar22,param_3 - 1000);
    }
    goto LAB_004a991f;
  }
  if ((param_3 < 0xa2cb) || (0xa2ea < param_3)) {
    if ((0xa315 < param_3) && (param_3 < 0xa331)) {
      iVar20 = param_3 - 0xa314;
      goto LAB_004a82d9;
    }
    if ((param_3 < 0xa122) || (0xa144 < param_3)) {
      if (param_3 < 0xa0a6) {
        if (0xa0a3 < param_3) {
switchD_004a8051_caseD_a1d1:
          FUN_004c87d0(param_1,param_1 + 0x364,param_3,0,0);
          goto LAB_004a991f;
        }
        if (0x9d13 < param_3) {
          if (param_3 < 0x9dd5) {
            if (param_3 == 0x9dd4) {
              FUN_00458dc0(param_1);
              goto LAB_004a991f;
            }
            if (param_3 == 0x9d15) {
              uVar15 = 0xffffffff;
              if (*(int *)(param_1 + 0xadc) == 1) {
                FUN_0052d4a0(param_1,0,0xffffffff);
                goto LAB_004a991f;
              }
              goto LAB_004a7fbc;
            }
            if (param_3 == 0x9d28) goto LAB_004a7ff5;
            if (param_3 == 0x9d29) {
              FUN_0046f260(param_1);
              goto LAB_004a991f;
            }
          }
          else {
            if (param_3 == 0x9e8f) goto switchD_004a7e8c_caseD_9ca5;
            if (param_3 == 0xa09a) {
LAB_004a7ff5:
              FUN_0046f110(param_1);
              goto LAB_004a991f;
            }
            if (param_3 == 0xa09b) goto switchD_004a7e8c_caseD_9d0e;
          }
          goto switchD_004a7e8c_caseD_9ca6;
        }
        if (param_3 != 0x9d13) {
          switch(param_3) {
          case 0x9ca5:
switchD_004a7e8c_caseD_9ca5:
            SendMessageA(DAT_00647624,0x111,param_3 & 0xffff,0);
            break;
          default:
            goto switchD_004a7e8c_caseD_9ca6;
          case 0x9d0b:
            if (*(int *)(param_1 + 0xadc) == 1) {
              FUN_0052d140(param_1,1);
            }
            else {
              FUN_0046e160(param_1);
            }
            break;
          case 0x9d0c:
            if (*(int *)(param_1 + 0xadc) == 1) {
              FUN_0052d140(param_1,0);
            }
            else {
              FUN_0046de90(param_1);
            }
            break;
          case 0x9d0d:
            uVar15 = 1;
            if (*(int *)(param_1 + 0xadc) == 1) {
              FUN_0052d4a0(param_1,0,1);
              break;
            }
LAB_004a7fbc:
            FUN_0046e540(param_1,0,uVar15);
            break;
          case 0x9d0e:
switchD_004a7e8c_caseD_9d0e:
            FUN_0046f390(param_1);
            break;
          case 0x9d0f:
            if (*(int *)(param_1 + 0xadc) == 1) {
              FUN_0052d350(param_1);
            }
            else {
              FUN_0046f400(param_1);
            }
            break;
          case 0x9d12:
            if (*(int *)(param_4 + 4) == 0) {
              local_194 = FUN_004a7930(2,0xffffffff);
            }
            else {
              local_194 = FUN_004a7930(2,*(undefined4 *)(*(int *)(param_4 + 4) + 0x18));
            }
            goto LAB_004a98cf;
          }
          goto LAB_004a991f;
        }
        if (*(int *)(param_4 + 4) == 0) {
          local_194 = FUN_004a7930(3,0xffffffff);
        }
        else {
          local_194 = FUN_004a7930(3,*(undefined4 *)(*(int *)(param_4 + 4) + 0x18));
        }
        goto LAB_004a98cf;
      }
      if (param_3 < 0xa283) {
        if (param_3 == 0xa282) {
          DAT_00648694 = DAT_00648694 ^ 8;
          local_188 = tVar30;
        }
        else {
          cVar2 = (char)param_3;
          switch(param_3) {
          case 0xa1d0:
            if (-1 < *(int *)(param_1 + 0xcbc)) {
              FUN_004cb2d0(param_1,*(int *)(param_1 + 0xcbc),0);
            }
            goto LAB_004a991f;
          case 0xa1d1:
            goto switchD_004a8051_caseD_a1d1;
          default:
            goto switchD_004a7e8c_caseD_9ca6;
          case 0xa1ea:
            DAT_00648690 = DAT_00648690 ^ 1;
            local_188 = tVar9;
            break;
          case 0xa1eb:
            DAT_00648690 = DAT_00648690 ^ 2;
            local_188 = tVar8;
            break;
          case 0xa203:
          case 0xa204:
          case 0xa205:
          case 0xa206:
          case 0xa207:
          case 0xa208:
          case 0xa209:
          case 0xa20a:
          case 0xa20b:
          case 0xa20c:
          case 0xa20d:
          case 0xa20e:
          case 0xa20f:
          case 0xa210:
          case 0xa211:
          case 0xa212:
          case 0xa213:
          case 0xa214:
          case 0xa215:
          case 0xa216:
          case 0xa217:
          case 0xa218:
          case 0xa219:
          case 0xa21a:
          case 0xa21b:
          case 0xa21c:
          case 0xa21d:
          case 0xa21e:
          case 0xa21f:
          case 0xa220:
          case 0xa221:
          case 0xa222:
            DAT_00648698 = DAT_00648698 ^ 1 << (cVar2 - 3U & 0x1f);
            local_188 = tVar7;
            break;
          case 0xa24e:
          case 0xa24f:
          case 0xa250:
          case 0xa251:
          case 0xa252:
          case 0xa253:
          case 0xa254:
          case 0xa255:
          case 0xa256:
          case 0xa257:
          case 0xa258:
          case 0xa259:
          case 0xa25a:
          case 0xa25b:
          case 0xa25c:
          case 0xa25d:
          case 0xa25e:
          case 0xa25f:
          case 0xa260:
          case 0xa261:
          case 0xa262:
          case 0xa263:
          case 0xa264:
          case 0xa265:
          case 0xa266:
          case 0xa267:
          case 0xa268:
            DAT_00648690 = DAT_00648690 ^ 1 << (cVar2 + 0xb4U & 0x1f);
            local_188 = tVar6;
            break;
          case 0xa280:
          case 0xa281:
            DAT_00648690 = DAT_00648690 ^ 1 << (cVar2 + 0x9dU & 0x1f);
            local_188 = tVar5;
          }
        }
        goto LAB_004a9911;
      }
      if (param_3 < 0xc868) {
        if (param_3 == 0xc867) {
          FUN_0049cf50(param_1);
          goto LAB_004a991f;
        }
        switch(param_3) {
        case 0xa283:
          DAT_00648694 = DAT_00648694 ^ 4;
          break;
        case 0xa284:
          DAT_00648694 = DAT_00648694 ^ 2;
          local_188 = tVar13;
          break;
        case 0xa285:
          DAT_00648694 = DAT_00648694 ^ 1;
          local_188 = tVar12;
          break;
        case 0xa286:
          DAT_0064869c = DAT_0064869c ^ 2;
          local_188 = tVar11;
          break;
        case 0xa287:
          DAT_0064869c = DAT_0064869c ^ 1;
          local_188 = tVar10;
          break;
        default:
          goto switchD_004a7e8c_caseD_9ca6;
        }
        goto LAB_004a9911;
      }
switchD_004a7e8c_caseD_9ca6:
      if (iVar21 != 0) {
        if (param_3 < 0xa2b4) {
          if (param_3 == 0xa2b3) {
            iVar20 = 1;
          }
          else {
            if (param_3 < 0xa0c7) {
              if (param_3 == 0xa0c6) {
                uVar22 = FUN_005b8900(puVar1,*(undefined4 *)(iVar21 + 4));
                uVar25 = FUN_005b87c0(*(undefined4 *)(iVar21 + 4));
                if (uVar25 <= uVar22) goto LAB_004a991f;
                local_194 = FUN_00435a30(param_1,iVar21);
              }
              else {
                if (param_3 != 0xa0c0) {
                  if (param_3 == 0xa0c1) {
                    FUN_004354b0(puVar1,iVar21,~*(uint *)(iVar21 + 0x10) >> 1 & 1);
                    goto LAB_004a991f;
                  }
                  if (param_3 == 0xa0c2) {
                    FUN_00435730(puVar1,iVar21,~*(uint *)(iVar21 + 0x10) & 1);
                    goto LAB_004a991f;
                  }
                  goto switchD_004a82c8_caseD_a34a;
                }
                uVar15 = FUN_004ca930(param_1);
                local_194 = FUN_00435c40(puVar1,iVar21);
                if (*(int *)(param_1 + 0xbc8) != 0) {
                  iVar21 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
                  if (iVar21 != 0) {
                    if (*(int *)(param_1 + 0xbc8) == 0) {
                      piVar16 = (int *)0x0;
                    }
                    else {
                      piVar16 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
                    }
                    if (0 < *piVar16) {
                      *(undefined4 *)(param_1 + 0xcbc) = 0xffffffff;
                      FUN_004cb540(param_1,uVar15,0,1);
                    }
                  }
                }
              }
              goto LAB_004a98cf;
            }
            if (param_3 == 0xa0d4) {
              FUN_004353f0(puVar1,iVar21,~*(uint *)(iVar21 + 0x634) & 1);
              goto LAB_004a991f;
            }
            if (param_3 != 0xa2b2) goto switchD_004a82c8_caseD_a34a;
            iVar20 = 0;
          }
        }
        else {
          if (0xc518 < param_3) {
            if (0xc518 < param_3) {
              if (param_3 < 0xc51e) {
                local_18c = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xac0);
                lVar28 = ftol();
                lVar27 = *(longlong *)(param_1 + 0xb88);
                SVar14 = GetKeyState(0x11);
                local_194 = FUN_004a2f60(param_1,iVar21,lVar28 + lVar27,SVar14 < 0,param_3 - 0xc518)
                ;
                goto LAB_004a98cf;
              }
              if (param_3 == 0xc52d) {
                local_164 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xac0);
                uVar29 = ftol();
                local_188.x = (uint)uVar29 + *(uint *)(param_1 + 0xb88);
                local_188.y = (int)((ulonglong)uVar29 >> 0x20) + *(int *)(param_1 + 0xb8c) +
                              (uint)CARRY4((uint)uVar29,*(uint *)(param_1 + 0xb88));
                SVar14 = GetKeyState(0x11);
                local_168 = (uint)(SVar14 < 0);
                iVar20 = FUN_005a2800(param_1,iVar21,local_188.x,local_188.y,local_168,&local_19c,
                                      &local_198,local_150);
                if (iVar20 != 0) {
                  if (local_19c == 0) {
                    FUN_005a2ed0(puVar1,param_1,iVar21,local_188.x,local_188.y,local_168,0);
                    FUN_005b8da0(*(undefined4 *)(param_1 + 0xbc8),0,1);
                    iVar20 = FUN_005a2800(param_1,iVar21,local_188.x,local_188.y,local_168,
                                          &local_19c,&local_198,local_150);
                  }
                  tVar4.y = local_188.y;
                  tVar4.x = local_188.x;
                  tVar3.y = local_188.y;
                  tVar3.x = local_188.x;
                  if ((iVar20 != 0) && (local_188 = tVar3, local_198 != 0)) {
                    local_178 = (tagPOINT)((ulonglong)uVar22 << 0x20);
                    local_170 = 0;
                    local_16c = 0;
                    if (iVar20 == 1) {
                      local_178.y = uVar22;
                      local_178.x = 7;
                      local_188.x = *(int *)(*(int *)(local_198 + 0x218) + 0x58) + -10;
                      local_188.y = *(int *)(*(int *)(local_198 + 0x218) + 0x5c) + -10;
                      local_180 = *(int *)(*(int *)(local_198 + 0x218) + 0x58) + 10;
                      local_17c = *(int *)(*(int *)(local_198 + 0x218) + 0x5c) + 10;
                      MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_188,2);
                      *(uint *)(*(int *)(local_198 + 0x218) + 0x68) =
                           *(uint *)(*(int *)(local_198 + 0x218) + 0x68) | 0x400;
                      FUN_0044e590(&local_178,1,&local_188);
                      *(uint *)(*(int *)(local_198 + 0x218) + 0x68) =
                           *(uint *)(*(int *)(local_198 + 0x218) + 0x68) & 0xfffffbff;
                    }
                    else {
                      local_188 = tVar4;
                      if (iVar20 == 2) {
                        local_178.y = uVar22;
                        local_178.x = 8;
                        local_188.x = *(int *)(*(int *)(local_198 + 0x218) + 0x60) + -10;
                        local_188.y = *(int *)(*(int *)(local_198 + 0x218) + 100) + -10;
                        local_180 = *(int *)(*(int *)(local_198 + 0x218) + 0x60) + 10;
                        local_17c = *(int *)(*(int *)(local_198 + 0x218) + 100) + 10;
                        MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_188,2);
                        *(uint *)(*(int *)(local_198 + 0x218) + 0x68) =
                             *(uint *)(*(int *)(local_198 + 0x218) + 0x68) | 0x800;
                        FUN_0044e590(&local_178,1,&local_188);
                        *(uint *)(*(int *)(local_198 + 0x218) + 0x68) =
                             *(uint *)(*(int *)(local_198 + 0x218) + 0x68) & 0xfffff7ff;
                      }
                    }
                  }
                }
                goto LAB_004a9911;
              }
            }
            goto switchD_004a82c8_caseD_a34a;
          }
          if (0xc515 < param_3) {
            local_18c = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xac0);
            lVar28 = ftol();
            lVar27 = *(longlong *)(param_1 + 0xb88);
            SVar14 = GetKeyState(0x11);
            local_194 = FUN_004a3070(param_1,iVar21,lVar28 + lVar27,SVar14 < 0,param_3 - 0xc515);
            goto LAB_004a98cf;
          }
          switch(param_3) {
          case 0xa348:
            iVar20 = 0x1d;
            break;
          case 0xa349:
            iVar20 = 0x1e;
            break;
          default:
            goto switchD_004a82c8_caseD_a34a;
          case 0xa37c:
          case 0xa37d:
          case 0xa37e:
            FUN_004c87d0(param_1,param_1 + 0x364,param_3,0,iVar21);
            goto LAB_004a991f;
          }
        }
        goto LAB_004a82d9;
      }
switchD_004a82c8_caseD_a34a:
      if (uVar22 == 0) {
switchD_004a8ab0_caseD_a783:
        puVar19 = *(uint **)(param_1 + 0xcd0);
        local_198 = *puVar19;
        if ((int)local_198 < 1) goto LAB_004a991f;
        if (param_3 < 0xa7be) {
          if (param_3 < 0xa7bc) {
            switch(param_3) {
            case 0xa771:
            case 0xa774:
              if ((puVar19 != (uint *)0x0) && (1 < (int)local_198)) {
                FUN_004e9f70(puVar1,0x28,0);
                FUN_004ea880(puVar1);
                local_194 = FUN_005d9840(puVar1,DAT_0064a580,&local_18c,0);
                if (-1 < local_194) {
                  iVar21 = 0;
                  if (0 < (int)local_198) {
                    do {
                      uVar15 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + iVar21 * 4)
                      ;
                      FUN_004ea750(puVar1,uVar15,2,0);
                      FUN_005d9d30(puVar1,uVar15,1);
                      local_194 = FUN_005d9da0(puVar1,local_18c,uVar15);
                      if (local_194 < 0) goto LAB_004a9046;
                      iVar21 = iVar21 + 1;
                    } while (iVar21 < (int)local_198);
                  }
                  if (-1 < local_194) goto LAB_004a9040;
                }
LAB_004a9046:
                FUN_004ea040(puVar1,0);
                local_168 = 1;
              }
              break;
            case 0xa772:
            case 0xa775:
              bVar23 = false;
              iVar21 = 0;
              if (0 < (int)local_198) {
                do {
                  iVar20 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + iVar21 * 4);
                  if (*(int *)(iVar20 + 0x38) != 0) {
                    if (!bVar23) {
                      FUN_004e9f70(puVar1,0x29,0);
                      FUN_004ea880(puVar1);
                      bVar23 = true;
                    }
                    FUN_004ea750(puVar1,iVar20,2,0);
                    iVar18 = FUN_005d9be0(puVar1,0,iVar20);
                    if (iVar18 == 0) {
                      *(undefined4 *)(iVar20 + 0x38) = 0;
                    }
                    else {
                      FUN_005d9c70(puVar1,iVar18,iVar20,1);
                    }
                  }
                  iVar21 = iVar21 + 1;
                } while (iVar21 < (int)local_198);
                if (bVar23) {
                  FUN_004eb2b0(puVar1);
                  FUN_004ea040(puVar1,0);
                  local_168 = 1;
                }
              }
              break;
            case 0xa773:
            case 0xa776:
              local_19c = 0;
              local_190 = 0;
              if (0 < (int)local_198) {
                do {
                  iVar21 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + local_190 * 4);
                  if (*(int *)(iVar21 + 0x38) != 0) {
                    if (local_19c == 0) {
                      FUN_004e9f70(puVar1,0x29,0);
                      FUN_004ea880(puVar1);
                      local_19c = 1;
                    }
                    piVar16 = (int *)FUN_005d9be0(puVar1,0,iVar21);
                    if (piVar16 == (int *)0x0) {
                      FUN_004ea750(puVar1,iVar21,2,0);
                      *(undefined4 *)(iVar21 + 0x38) = 0;
                    }
                    else {
                      iVar20 = 0;
                      iVar21 = *(int *)*piVar16;
                      if (0 < iVar21) {
                        do {
                          iVar18 = *(int *)(*piVar16 + 8);
                          iVar17 = *(int *)(*piVar16 + 4) * iVar20;
                          uVar15 = FUN_005d9aa0(puVar1,0,*(undefined4 *)(iVar17 + iVar18),
                                                *(undefined4 *)(iVar17 + 4 + iVar18));
                          FUN_004ea750(puVar1,uVar15,2,0);
                          iVar20 = iVar20 + 1;
                        } while (iVar20 < iVar21);
                      }
                      FUN_005d99b0(puVar1,piVar16);
                    }
                  }
                  local_190 = local_190 + 1;
                } while ((int)local_190 < (int)local_198);
                if (local_19c != 0) {
LAB_004a9040:
                  FUN_004eb2b0(puVar1);
                  goto LAB_004a9046;
                }
              }
            }
          }
          else {
LAB_004a9224:
            iVar20 = 0;
            local_190 = 0;
            iVar21 = FUN_004a7900(param_3);
            local_19c = 0;
            if ((int)local_198 < 1) {
LAB_004a928d:
              FUN_004e9f70(puVar1,0x37,0);
              local_19c = 0;
              if (0 < (int)local_198) {
                do {
                  iVar20 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + local_19c * 4);
                  if (*(int *)(iVar20 + 4) == 3) {
                    FUN_004ea750(puVar1,iVar20,2,0);
                    FUN_005cef60(puVar1,iVar20,iVar21);
                  }
                  local_19c = local_19c + 1;
                } while (local_19c < (int)local_198);
              }
            }
            else {
              do {
                iVar18 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + iVar20 * 4);
                if (((*(int *)(iVar18 + 4) == 3) && (local_19c = local_19c + 1, iVar21 != 0)) &&
                   (iVar18 = FUN_0047c7d0(iVar18 + 0x98,iVar21), iVar18 != 0)) {
                  local_190 = local_190 + 1;
                }
                iVar20 = iVar20 + 1;
              } while (iVar20 < (int)local_198);
              if (local_190 == local_19c) goto LAB_004a928d;
              FUN_004e9f70(puVar1,0x35,0);
              local_19c = 0;
              do {
                iVar20 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + local_19c * 4);
                if ((*(int *)(iVar20 + 4) == 3) &&
                   (iVar18 = FUN_0047c7d0(iVar20 + 0x98,iVar21), iVar18 == 0)) {
                  FUN_004ea750(puVar1,iVar20,2,0);
                  FUN_005cedd0(puVar1,iVar20,iVar21);
                }
                local_19c = local_19c + 1;
              } while (local_19c < (int)local_198);
            }
            FUN_004eb2b0(puVar1);
            FUN_004ea040(puVar1,0);
            local_164 = 1;
          }
        }
        else {
          if (param_3 == 0xa7bf) goto LAB_004a9224;
          if ((0xc577 < param_3) && (param_3 < 0xc57a)) {
            iVar21 = 0;
            if (local_190 == 0) {
              local_18c = -(uint)(puVar19 != (uint *)0x0) & local_198;
              local_19c = 0;
              if (0 < (int)local_18c) {
                do {
                  iVar21 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + local_19c * 4);
                  if (*(int *)(iVar21 + 0x38) < 1) {
                    if ((*(byte *)(iVar21 + 0x10) & 0x10) == 0) {
                      FUN_0049ce10(param_1,iVar21);
                    }
                  }
                  else {
                    piVar16 = (int *)FUN_005d9be0(puVar1,0,iVar21);
                    if (piVar16 != (int *)0x0) {
                      if ((int *)*piVar16 == (int *)0x0) {
                        iVar21 = 0;
                      }
                      else {
                        iVar21 = *(int *)*piVar16;
                      }
                      iVar20 = 0;
                      if (0 < iVar21) {
                        do {
                          iVar18 = *(int *)(*piVar16 + 8);
                          iVar17 = *(int *)(*piVar16 + 4) * iVar20;
                          iVar18 = FUN_005d9aa0(puVar1,0,*(undefined4 *)(iVar17 + iVar18),
                                                *(undefined4 *)(iVar17 + 4 + iVar18));
                          if ((*(byte *)(iVar18 + 0x10) & 0x10) == 0) {
                            FUN_0049ce10(param_1,iVar18);
                          }
                          iVar20 = iVar20 + 1;
                        } while (iVar20 < iVar21);
                      }
                    }
                  }
                  local_19c = local_19c + 1;
                } while (local_19c < (int)local_18c);
              }
            }
            else {
              SVar14 = GetKeyState(0x10);
              if (-1 < SVar14) {
                FUN_0049d980(param_1);
              }
              if (*(int *)(local_190 + 0x38) < 1) {
                if ((*(byte *)(local_190 + 0x10) & 0x10) == 0) {
                  FUN_0049ce10(param_1,local_190);
                }
              }
              else {
                piVar16 = (int *)FUN_005d9be0(puVar1,0,local_190);
                if (piVar16 != (int *)0x0) {
                  if ((int *)*piVar16 == (int *)0x0) {
                    local_19c = 0;
                  }
                  else {
                    local_19c = *(int *)*piVar16;
                  }
                  if (0 < local_19c) {
                    do {
                      iVar20 = *(int *)(*piVar16 + 8);
                      iVar18 = *(int *)(*piVar16 + 4) * iVar21;
                      iVar20 = FUN_005d9aa0(puVar1,0,*(undefined4 *)(iVar18 + iVar20),
                                            *(undefined4 *)(iVar18 + 4 + iVar20));
                      if ((iVar20 != 0) && ((*(byte *)(iVar20 + 0x10) & 0x10) == 0)) {
                        FUN_0049ce10(param_1,iVar20);
                      }
                      iVar21 = iVar21 + 1;
                    } while (iVar21 < local_19c);
                  }
                }
              }
            }
            FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0),2);
            FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
            DAT_0064767c = DAT_0064767c | 4;
          }
        }
        local_190 = **(uint **)(param_1 + 0xcd0);
        if (0 < (int)local_190) {
          uVar22 = 0;
          local_198 = 0;
          local_18c = 0;
          iVar21 = FUN_004a58b0(param_1,&local_198,&local_18c);
          if (iVar21 != 0) {
            uVar22 = local_198 & 8 | local_18c;
          }
          local_154 = uVar22 >> 1 & 1;
          local_160 = uVar22 >> 2 & 1;
          local_15c = uVar22 >> 3 & 1;
          local_158 = uVar22 >> 5 & 1;
          puVar24 = local_128;
          for (iVar21 = 0x4a; iVar21 != 0; iVar21 = iVar21 + -1) {
            *puVar24 = 0;
            puVar24 = puVar24 + 1;
          }
          uVar25 = 0xffffffff;
          local_188.x = uVar22 >> 8 & 1;
          if (0 < (int)local_190) {
            piVar16 = *(int **)(*(int *)(param_1 + 0xcd0) + 8);
            uVar22 = local_190;
            do {
              if (*piVar16 != 0) {
                uVar25 = uVar25 & *(uint *)(*piVar16 + 0xf8);
              }
              piVar16 = piVar16 + 1;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
          FUN_004e9f70(puVar1,0x33,0);
          local_19c = 0;
          if (0 < (int)local_190) {
            do {
              iVar21 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + local_19c * 4);
              if (param_3 < 0xa77d) {
                if (param_3 == 0xa77c) {
                  FUN_004ea750(puVar1,iVar21,2,0);
                  FUN_005c9030(iVar21,0x100,local_188.x == 0);
                  goto LAB_004a9864;
                }
                if (0xa1c6 < param_3) {
                  if (param_3 < 0xa1ca) {
                    if (param_3 == 0xa1c9) {
                      FUN_004ea750(puVar1,iVar21,2,0);
                      DAT_0064767c = DAT_0064767c | 0x800;
                      FUN_005c90e0(puVar1,iVar21,4,~uVar25 >> 5 & 1);
                    }
                    else if (param_3 == 0xa1c7) {
                      FUN_004ea750(puVar1,iVar21,2,0);
                      DAT_0064767c = DAT_0064767c | 0x800;
                      FUN_005c90e0(puVar1,iVar21,2,~uVar25 >> 2 & 1);
                    }
                    else if (param_3 == 0xa1c8) {
                      FUN_004ea750(puVar1,iVar21,2,0);
                      DAT_0064767c = DAT_0064767c | 0x800;
                      FUN_005c90e0(puVar1,iVar21,3,~uVar25 >> 4 & 1);
                    }
                  }
                  else if (param_3 == 0xa37b) {
                    FUN_004ea750(puVar1,iVar21,2,0);
                    DAT_0064767c = DAT_0064767c | 0x800;
                    FUN_005c90e0(puVar1,iVar21,5,~uVar25 >> 6 & 1);
                  }
                  goto switchD_004a97f1_caseD_c875;
                }
                if (param_3 == 0xa1c6) {
                  FUN_004ea750(puVar1,iVar21,2,0);
                  DAT_0064767c = DAT_0064767c | 0x800;
                  FUN_005c90e0(puVar1,iVar21,6,~uVar25 >> 7 & 1);
                  goto switchD_004a97f1_caseD_c875;
                }
                if (param_3 < 0xa093) {
                  if (param_3 == 0xa092) {
                    FUN_004ea750(puVar1,iVar21,2,0);
                    FUN_005c9030(iVar21,8,local_15c == 0);
                    if ((*(uint *)(iVar21 + 0x10) & 8) == 0) {
                      *(uint *)(iVar21 + 0x10) = *(uint *)(iVar21 + 0x10) & 0xfff7ffff;
                    }
                  }
                  else {
                    if (param_3 == 0xa08f) {
                      FUN_004ea750(puVar1,iVar21,2,0);
                      FUN_005c9030(iVar21,2,local_154 == 0);
                      goto LAB_004a9864;
                    }
                    if (param_3 == 0xa091) {
                      FUN_005c9030(iVar21,4,local_160 == 0);
                    }
                  }
                  goto switchD_004a97f1_caseD_c875;
                }
                if (param_3 != 0xa094) {
                  if (param_3 == 0xa1c5) {
                    FUN_004ea750(puVar1,iVar21,2,0);
                    DAT_0064767c = DAT_0064767c | 0x800;
                    FUN_005c90e0(puVar1,iVar21,0,~uVar25 & 1);
                  }
                  goto switchD_004a97f1_caseD_c875;
                }
                FUN_005c9030(iVar21,0x20,local_158 == 0);
LAB_004a9864:
                iVar21 = *(int *)(iVar21 + 8);
                if (iVar21 != 0) {
LAB_004a9897:
                  *(uint *)(iVar21 + 0x10) = *(uint *)(iVar21 + 0x10) | 0x200000;
                  *(uint *)*puVar1 = *(uint *)*puVar1 | 0x2000;
                }
              }
              else {
                if (0xc871 < param_3) {
                  switch(param_3) {
                  case 0xc872:
                    FUN_004ea750(puVar1,iVar21,2,0);
                    *(undefined4 *)(iVar21 + 0xf8) = 0x3ed;
LAB_004a9855:
                    puVar19 = (uint *)**(undefined4 **)(*(int *)(iVar21 + 8) + 8);
                    break;
                  case 0xc873:
                    FUN_004ea750(puVar1,iVar21,2,0);
                    *(undefined4 *)(iVar21 + 0xf8) = 0x3ee;
                    puVar19 = (uint *)**(undefined4 **)(*(int *)(iVar21 + 8) + 8);
                    *puVar19 = *puVar19 | 0x80;
                    iVar21 = *(int *)(iVar21 + 8);
                    if (iVar21 == 0) goto switchD_004a97f1_caseD_c875;
                    goto LAB_004a9897;
                  case 0xc874:
                    FUN_004ea750(puVar1,iVar21,2,0);
                    *(undefined4 *)(iVar21 + 0xf8) = 1000;
                    puVar19 = (uint *)**(undefined4 **)(*(int *)(iVar21 + 8) + 8);
                    break;
                  default:
                    goto switchD_004a97f1_caseD_c875;
                  case 0xc883:
                    FUN_004ea750(puVar1,iVar21,2,0);
                    *(uint *)(iVar21 + 0xfc) = *(uint *)(iVar21 + 0xfc) ^ 1;
                    puVar19 = (uint *)**(undefined4 **)(*(int *)(iVar21 + 8) + 8);
                  }
LAB_004a985d:
                  *puVar19 = *puVar19 | 0x80;
                  goto LAB_004a9864;
                }
                if (param_3 == 0xc871) {
                  FUN_004ea750(puVar1,iVar21,2,0);
                  *(undefined4 *)(iVar21 + 0xf8) = 0x3ec;
                  puVar19 = (uint *)**(undefined4 **)(*(int *)(iVar21 + 8) + 8);
                  goto LAB_004a985d;
                }
                if (param_3 < 0xc86f) {
                  if (param_3 == 0xc86e) {
                    FUN_004ea750(puVar1,iVar21,2,0);
                    *(undefined4 *)(iVar21 + 0xf8) = 0x3e9;
                    puVar19 = (uint *)**(undefined4 **)(*(int *)(iVar21 + 8) + 8);
                    goto LAB_004a985d;
                  }
                  if (param_3 == 0xa78a) {
                    FUN_004ea750(puVar1,iVar21,2,0);
                    if ((*(uint *)(iVar21 + 0x10) & 0x200) == 0) {
                      fVar26 = (float10)FUN_005c7ff0(iVar21);
                      local_178 = (tagPOINT)(double)fVar26;
                      FUN_005c7f20(iVar21,1,local_178);
                    }
                    else {
                      FUN_005c7f20(iVar21,0,0,0x3ff00000);
                    }
                    goto LAB_004a9864;
                  }
                  if (param_3 == 0xc613) {
                    FUN_004ea750(puVar1,iVar21,2,0);
                    DAT_0064767c = DAT_0064767c | 0x800;
                    FUN_005c90e0(puVar1,iVar21,7,~uVar25 >> 8 & 1);
                  }
                }
                else {
                  if (param_3 == 0xc86f) {
                    FUN_004ea750(puVar1,iVar21,2,0);
                    *(undefined4 *)(iVar21 + 0xf8) = 0x3ea;
                    puVar19 = (uint *)**(undefined4 **)(*(int *)(iVar21 + 8) + 8);
                    goto LAB_004a985d;
                  }
                  if (param_3 == 0xc870) {
                    FUN_004ea750(puVar1,iVar21,2,0);
                    *(undefined4 *)(iVar21 + 0xf8) = 0x3eb;
                    goto LAB_004a9855;
                  }
                }
              }
switchD_004a97f1_caseD_c875:
              local_19c = local_19c + 1;
            } while (local_19c < (int)local_190);
          }
          FUN_004eb2b0(puVar1);
          FUN_004ea040(puVar1,0);
        }
        goto LAB_004a98cf;
      }
      if (param_3 < 0xa782) {
        if (param_3 != 0xa781) {
          if (param_3 < 0xa0a3) {
            if (param_3 == 0xa0a2) {
              FUN_004a75c0(param_1,uVar22);
              goto LAB_004a991f;
            }
            if (param_3 < 0xa0a0) {
              if (param_3 == 0xa09f) {
                FUN_004a45f0(param_1,uVar22);
                goto LAB_004a991f;
              }
              if (param_3 < 0x4e8e) {
                if (0x4e83 < param_3) {
                  iVar21 = FUN_005c68e0(uVar22);
                  iVar21 = iVar21 + -10;
                  if (iVar21 < 0) {
                    iVar21 = 0;
                  }
                  FUN_004e9f70(puVar1,0x2f,0);
                  FUN_004ea750(puVar1,uVar22,2,0);
                  iVar21 = iVar21 + -0x4e84 + param_3;
LAB_004a8858:
                  FUN_005c86c0(puVar1,uVar22,iVar21);
                  goto LAB_004a885f;
                }
                if (param_3 == 0x146b) {
                  if (((*(int *)(uVar22 + 0x50) == 0) ||
                      (iVar21 = *(int *)(*(int *)(uVar22 + 0x50) + 0x18), iVar21 == 0)) ||
                     (*(int *)(uVar22 + 4) != 3)) goto LAB_004a991f;
                  local_194 = FUN_004053c0(iVar21 + 0x170);
                  goto LAB_004a98cf;
                }
              }
              else if (param_3 == 0xa08d) {
                FUN_00558900(*(undefined4 *)(param_1 + 4),uVar22);
                goto LAB_004a991f;
              }
            }
            else {
              if (param_3 == 0xa0a0) {
                FUN_004a46e0(param_1,uVar22);
                goto LAB_004a991f;
              }
              if (param_3 == 0xa0a1) {
                FUN_004a7340(param_1,uVar22);
                goto LAB_004a991f;
              }
            }
          }
          else if (param_3 < 0xa778) {
            if (param_3 == 0xa777) {
              if (*(int *)(DAT_0064762c + 0x70) == 0) {
                FUN_004e46f0(DAT_00647624,0);
              }
              if (*(int *)(DAT_0064762c + 0x70) != 0) {
                FUN_004e48b0(0,uVar22);
                SetFocus(*(HWND *)(*(int *)(DAT_0064762c + 0x70) + 8));
              }
              goto LAB_004a991f;
            }
            if (param_3 == 0xa0a3) {
              FUN_004a7830(param_1,*(undefined4 *)(param_1 + 0xcd0),1);
              goto LAB_004a991f;
            }
            if (param_3 == 0xa0a6) {
              FUN_004a7830(param_1,*(undefined4 *)(param_1 + 0xcd0),0);
              goto LAB_004a991f;
            }
          }
          else {
            if (param_3 == 0xa778) {
              local_18c = *(uint *)(uVar22 + 0x50);
              if ((local_18c == 0) || (local_19c = *(int *)(local_18c + 0x18), local_19c == 0))
              goto LAB_004a991f;
              iVar21 = FUN_005f13f0(2);
              if (iVar21 == 0) goto LAB_004a991f;
              uVar29 = 0;
              lVar27 = -1;
              if (*(int *)(iVar21 + 0x2c) != 0) {
                local_188.x = *(LONG *)(*(int *)(iVar21 + 0x2c) + 4);
                local_188.y = 0;
                local_188 = (tagPOINT)ftol();
                uVar29 = ftol();
                tVar30 = (tagPOINT)ftol();
                local_188 = tVar30;
                lVar27 = ftol();
                lVar28 = CONCAT44((*(int *)(iVar21 + 0x54) - (int)((ulonglong)uVar29 >> 0x20)) -
                                  (uint)(*(uint *)(iVar21 + 0x50) < (uint)uVar29),
                                  *(uint *)(iVar21 + 0x50) - (uint)uVar29);
                if (lVar28 <= lVar27) {
                  lVar27 = lVar28;
                }
              }
              local_194 = FUN_00405170(local_19c + 0x170,uVar29,lVar27,0);
              goto LAB_004a98cf;
            }
            if (param_3 == 0xa77b) {
              if (*(int *)(uVar22 + 0x50) == 0) goto LAB_004a991f;
              FUN_004e9f70(puVar1,0x30,0);
              FUN_004ea750(puVar1,uVar22,2,0);
              FUN_005c6b30(puVar1,uVar22,*(undefined4 *)(uVar22 + 0x50));
              if (*(int *)(uVar22 + 0x54) != 0) {
                iVar21 = 0;
                goto LAB_004a8858;
              }
LAB_004a885f:
              FUN_004eb2b0(puVar1);
              FUN_004ea040(puVar1,0);
              goto LAB_004a991f;
            }
          }
          goto switchD_004a8ab0_caseD_a783;
        }
        if (DAT_0064b4e4 == 0) {
          iVar21 = FUN_00601ab0(&local_18c,&local_164,1);
          if (iVar21 < 0) {
            DAT_0064b4f0 = 1;
          }
          else {
            uVar25 = (local_164 & 0xffff) >> 8;
            if ((int)DAT_0064b4e4 <= (int)uVar25) {
              DAT_0064b4f0 = 0;
              _DAT_0064b4f4 = local_18c;
              DAT_0064b4e4 = uVar25;
            }
          }
        }
        if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) goto LAB_004a991f;
        local_170 = *(int *)(uVar22 + 0x1fc);
        iVar21 = *(int *)(uVar22 + 0x218);
        local_178.y = uVar22;
        local_178.x = 1;
        local_16c = 0;
        local_188.x = *(int *)(iVar21 + 0x40) + -10;
        local_188.y = *(int *)(iVar21 + 0x44) + -10;
        local_180 = *(int *)(iVar21 + 0x40) + 10;
        local_17c = *(int *)(iVar21 + 0x44) + 10;
        MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_188,2);
        *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
             *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) | 0x80;
        FUN_0044e590(&local_178,0,&local_188);
        *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
             *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) & 0xffffff7f;
      }
      else {
        if (param_3 < 0xa7f4) {
          if (param_3 == 0xa7f3) {
            FUN_00561780(param_1,uVar22);
            goto LAB_004a991f;
          }
          switch(param_3) {
          case 0xa782:
            local_178.y = uVar22;
            local_178.x = 1;
            local_170 = -1;
            local_16c = 0;
            iVar21 = *(int *)(uVar22 + 0x218);
            local_188.x = *(int *)(iVar21 + 0x48) + -10;
            local_188.y = *(int *)(iVar21 + 0x4c) + -10;
            local_180 = *(int *)(iVar21 + 0x48) + 10;
            local_17c = *(int *)(iVar21 + 0x4c) + 10;
            MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_188,2);
            *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
                 *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) | 0x100;
            FUN_00521940(&local_178,&local_188);
            *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
                 *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) & 0xfffffeff;
            goto LAB_004a9911;
          default:
            goto switchD_004a8ab0_caseD_a783;
          case 0xa789:
            FUN_00558900(*(undefined4 *)(param_1 + 4),uVar22);
            break;
          case 0xa7ad:
            FUN_004a71b0(param_1,uVar22,2);
            break;
          case 0xa7ae:
            FUN_004a71b0(param_1,uVar22,3);
            break;
          case 0xa7af:
            FUN_004a71b0(param_1,uVar22,4);
          }
          goto LAB_004a991f;
        }
        if (param_3 < 0xc58e) {
          if (param_3 == 0xc58d) {
            if ((*(int *)(uVar22 + 0x50) == 0) ||
               ((*(uint *)(*(int *)(*(int *)(uVar22 + 0x50) + 0x18) + 0x134) & 0x400) == 0))
            goto LAB_004a991f;
            iVar21 = *(int *)(uVar22 + 0x218);
            local_178.y = *(int *)(iVar21 + 0x54) + -10;
            local_178.x = *(int *)(iVar21 + 0x50) + -10;
            local_170 = *(int *)(iVar21 + 0x50) + 10;
            local_16c = *(int *)(iVar21 + 0x54) + 10;
            MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_178,2);
            *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
                 *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) | 0x200;
            local_194 = FUN_005f34d0(uVar22,&local_178);
            *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
                 *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) & 0xfffffdff;
          }
          else {
            if (param_3 == 0xa7f6) {
              if (DAT_00647b14 == '\0') {
                uVar15 = _SfGetString_8(DAT_00647204,0x50f6);
                SfMsgBox(DAT_00647624,0x40,uVar15);
              }
              else {
                FUN_00561870(param_1,uVar22);
              }
              goto LAB_004a991f;
            }
            if ((param_3 < 0xc520) || (0xc522 < param_3)) goto switchD_004a8ab0_caseD_a783;
            local_194 = FUN_004a9b80(param_1,uVar22,param_3 - 0xc51f);
          }
          goto LAB_004a98cf;
        }
        if (param_3 == 0xc5cc) {
          iVar21 = *(int *)(uVar22 + 0x218);
          local_178.y = uVar22;
          local_178.x = 7;
          local_170 = 0;
          local_16c = 0;
          local_188.x = *(int *)(iVar21 + 0x58) + -10;
          local_188.y = *(int *)(iVar21 + 0x5c) + -10;
          local_180 = *(int *)(iVar21 + 0x58) + 10;
          local_17c = *(int *)(iVar21 + 0x5c) + 10;
          MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_188,2);
          *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
               *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) | 0x400;
          FUN_0044e590(&local_178,0,&local_188);
          *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
               *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) & 0xfffffbff;
        }
        else {
          if (param_3 != 0xc5cd) goto switchD_004a8ab0_caseD_a783;
          iVar21 = *(int *)(uVar22 + 0x218);
          local_178.y = uVar22;
          local_178.x = 8;
          local_170 = 0;
          local_16c = 0;
          local_188.x = *(int *)(iVar21 + 0x60) + -10;
          local_188.y = *(int *)(iVar21 + 100) + -10;
          local_180 = *(int *)(iVar21 + 0x60) + 10;
          local_17c = *(int *)(iVar21 + 100) + 10;
          MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_188,2);
          *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
               *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) | 0x800;
          FUN_0044e590(&local_178,0,&local_188);
          *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) =
               *(uint *)(*(int *)(uVar22 + 0x218) + 0x68) & 0xfffff7ff;
        }
      }
      goto LAB_004a9911;
    }
    local_164 = *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0xac0);
    lVar27 = ftol();
    local_168 = 0;
    lVar27 = (lVar27 - *(longlong *)(local_190 + 0x18)) + *(longlong *)(param_1 + 0xb88);
    iVar21 = (int)((ulonglong)lVar27 >> 0x20);
    if (((lVar27 < 0) || (*(int *)(local_190 + 0x7c) < iVar21)) ||
       ((*(int *)(local_190 + 0x7c) <= iVar21 && (*(uint *)(local_190 + 0x78) < (uint)lVar27)))) {
      iVar20 = *(int *)(local_190 + 0x24);
      if (((CONCAT44((iVar20 - *(int *)(local_190 + 0x84)) -
                     (uint)(*(uint *)(local_190 + 0x20) < *(uint *)(local_190 + 0x80)),
                     *(uint *)(local_190 + 0x20) - *(uint *)(local_190 + 0x80)) <= lVar27) &&
          (iVar21 <= iVar20)) &&
         ((iVar21 < iVar20 || ((uint)lVar27 <= *(uint *)(local_190 + 0x20))))) {
        local_168 = 3;
      }
    }
    else {
      local_168 = 1;
    }
    FUN_00476370(local_190,param_3,local_168);
  }
  else {
    iVar20 = param_3 - 0xa28b;
LAB_004a82d9:
    local_194 = FUN_0052bd70(puVar1,iVar21,iVar20,0);
    FUN_004530a0(param_1,0);
LAB_004a98cf:
    if (local_194 < 0) {
      _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 4),0x30,8,local_194,0,0);
    }
    if (local_168 == 0) {
      if (local_164 == 0) goto LAB_004a991f;
    }
    else {
      FUN_00469280(param_1);
    }
LAB_004a9911:
    FUN_00456c20(param_1);
  }
  FUN_004530a0(param_1,0);
LAB_004a991f:
  DAT_0064767c = DAT_0064767c | 4;
  return;
}


