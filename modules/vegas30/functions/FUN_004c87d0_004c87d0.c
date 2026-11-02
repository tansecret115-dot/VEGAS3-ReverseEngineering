/* Module: vegas30.exe
   Function: FUN_004c87d0
   Address: 004c87d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c87d0(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  RECT *pRVar1;
  byte bVar2;
  undefined4 *puVar3;
  SHORT SVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  tagPOINT *ptVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  int local_8c;
  RECT *local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  tagPOINT local_74;
  uint local_6c;
  uint local_68;
  uint local_64;
  tagPOINT local_60;
  uint local_58;
  uint local_54;
  undefined1 local_50 [80];
  
  local_88 = *(RECT **)(param_1 + 0x5d0);
  puVar3 = *(undefined4 **)(param_1 + 0xbc8);
  iVar10 = 1;
  if ((DAT_0064761c & 0x800) != 0) {
    if (param_3 < 0xa0a6) {
      if (0xa0a3 < param_3) {
        return;
      }
      if (param_3 < 0x9d0e) {
        if (0x9d0a < param_3) {
          return;
        }
        if (param_3 == 0x24) {
          return;
        }
        if (param_3 == 199) {
          return;
        }
      }
      else if (param_3 == 0x9d0f) {
        return;
      }
    }
    else {
      if (param_3 == 0xa0c0) {
        return;
      }
      if (param_3 == 0xa0c6) {
        return;
      }
      if (param_3 == 0xa1d1) {
        return;
      }
    }
  }
  if ((param_3 < 0xa2cb) || (0xa2ea < param_3)) {
    if ((0xa315 < param_3) && (param_3 < 0xa331)) {
      iVar10 = param_3 - 0xa314;
      goto LAB_004c903f;
    }
    if ((0x1b72 < param_3) && (param_3 < 0x1c73)) {
      if (param_5 == 0) {
        return;
      }
      FUN_004e9f70(puVar3,0xe,0);
      if ((*(byte *)(param_5 + 0x10) & 0x10) == 0) {
        FUN_004ea250(puVar3,param_5,0xd,0);
        FUN_004c4510(param_1,param_5,param_3 - 0x1b73);
        FUN_004eb2b0(puVar3);
        FUN_004ea040(puVar3,0);
        return;
      }
      if (*(int *)(param_1 + 0xbc8) == 0) {
        local_78 = 0;
      }
      else {
        local_78 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      if ((*(int *)(param_1 + 0xbc8) == 0) ||
         (iVar10 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar10 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = _DAT_00000000;
        if (*(int *)(param_1 + 0xbc8) != 0) {
          puVar5 = (uint *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
          uVar14 = *puVar5;
        }
      }
      local_8c = 0;
      if (0 < (int)uVar14) {
        do {
          iVar10 = *(int *)(*(int *)(local_78 + 8) + local_8c * 4);
          if ((*(byte *)(iVar10 + 0x10) & 0x10) != 0) {
            FUN_004ea250(puVar3,iVar10,0xd,0);
            FUN_004c4510(param_1,iVar10,param_3 - 0x1b73);
          }
          local_8c = local_8c + 1;
        } while (local_8c < (int)uVar14);
      }
      FUN_004eb2b0(puVar3);
      FUN_004ea040(puVar3,0);
      return;
    }
    if ((param_3 < 0x1970) || (0x1a6f < param_3)) {
      if ((0x1a6f < param_3) && (param_3 < 0x1b6d)) {
        if (param_5 == 0) {
          return;
        }
        FUN_004ca340(param_1,param_5,param_3 - 0x1a70);
        FUN_004ca3b0(param_1,param_5,0);
        return;
      }
      if ((param_3 < 0x2198) || (0x2397 < param_3)) {
        if ((param_3 < 0x1b6d) || (0x1b6f < param_3)) {
          if ((0x1c72 < param_3) && (param_3 < 0x205c)) {
            FUN_004c3de0(param_1,0,param_3 - 0x1c73);
            return;
          }
          if (((0x2133 < param_3) && (param_3 < 0x2198)) && (param_5 != 0)) {
            if ((*(byte *)(param_5 + 0x10) & 0x10) != 0) {
              if (puVar3 == (undefined4 *)0x0) {
                local_58 = 0;
              }
              else {
                local_58 = FUN_005b87b0(puVar3);
              }
              if ((*(int *)(param_1 + 0xbc8) == 0) ||
                 (iVar10 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar10 == 0)) {
                uVar14 = 0;
              }
              else {
                uVar14 = _DAT_00000000;
                if (*(int *)(param_1 + 0xbc8) != 0) {
                  puVar5 = (uint *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
                  uVar14 = *puVar5;
                }
              }
              local_64 = 0;
              local_54 = uVar14;
              FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0x244,0);
              local_78 = 0;
              if (0 < (int)uVar14) {
                do {
                  iVar10 = *(int *)(*(int *)(local_58 + 8) + local_78 * 4);
                  if ((*(int *)(iVar10 + 4) == 3) && ((*(byte *)(iVar10 + 0x10) & 0x10) != 0)) {
                    local_60.x = FUN_004c4fc0(param_3,&local_74);
                    if (local_60.x == *(uint *)(iVar10 + 0x13c)) {
                      iVar9 = 0x10;
                      bVar15 = false;
                      iVar6 = 0;
                      bVar16 = true;
                      pbVar12 = (byte *)(iVar10 + 0x144);
                      ptVar13 = &local_74;
                      do {
                        if (iVar9 == 0) break;
                        iVar9 = iVar9 + -1;
                        bVar2 = (byte)ptVar13->x;
                        bVar15 = *pbVar12 < bVar2;
                        bVar16 = *pbVar12 == bVar2;
                        pbVar12 = pbVar12 + 1;
                        ptVar13 = (tagPOINT *)((int)&ptVar13->x + 1);
                      } while (bVar16);
                      if (!bVar16) {
                        iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      }
                      if (iVar6 == 0) goto LAB_004c8d7a;
                    }
                    FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar10,0x29,0);
                    *(LONG *)(iVar10 + 0x13c) = local_60.x;
                    *(LONG *)(iVar10 + 0x144) = local_74.x;
                    *(LONG *)(iVar10 + 0x148) = local_74.y;
                    *(uint *)(iVar10 + 0x14c) = local_6c;
                    iVar6 = *(int *)(iVar10 + 0x15c) + 1;
                    *(uint *)(iVar10 + 0x150) = local_68;
                    if (iVar6 < 2) {
                      iVar6 = 1;
                    }
                    *(int *)(iVar10 + 0x15c) = iVar6;
                    local_64 = 1;
                  }
LAB_004c8d7a:
                  local_78 = local_78 + 1;
                } while (local_78 < (int)local_54);
                if (local_64 != 0) {
                  FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
                  DAT_0064767c = DAT_0064767c | 0x1000;
                  FUN_004530a0(param_1,0x7fff);
                }
              }
              FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
            }
            DAT_0064767c = DAT_0064767c | 0x400;
          }
        }
        else if (param_5 != 0) {
          FUN_004ca340(param_1,param_5,0);
          FUN_004ca3b0(param_1,param_5,param_3 - 0x1b6d);
        }
      }
      else if (param_5 != 0) {
        FUN_004ca340(param_1,param_5,param_3 - 0x2198 >> 1);
        FUN_004ca3b0(param_1,param_5,((param_3 & 1) != 0) + '\x01');
      }
      if (param_3 < 0xa0c1) {
        if (param_3 == 0xa0c0) {
LAB_004c8f84:
          uVar7 = FUN_004ca930(param_1);
          iVar10 = FUN_00435c40(puVar3,param_5);
          if ((*(int *)(param_1 + 0xbc8) != 0) &&
             (iVar6 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar6 != 0)) {
            if (*(int *)(param_1 + 0xbc8) == 0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
            }
            if (0 < *piVar8) {
              *(undefined4 *)(param_1 + 0xcbc) = 0xffffffff;
              FUN_004cb540(param_1,uVar7,0,1);
            }
          }
        }
        else if (param_3 < 0x9d13) {
          if (param_3 != 0x9d12) {
            if (param_3 < 0x9ca6) {
              if (param_3 == 0x9ca5) {
LAB_004c8f14:
                SendMessageA(DAT_00647624,0x111,param_3 & 0xffff,0);
                return;
              }
              if (2 < param_3) {
                if (param_3 < 5) {
                  FUN_004c76b0(param_1,param_3 == 3);
                  return;
                }
                if (param_3 == 0x24) {
                  FUN_004d37e0(param_1);
                  return;
                }
              }
            }
            else if (param_3 == 0x9d0f) goto LAB_004c8f84;
            goto switchD_004c9063_default;
          }
          if (param_5 == 0) {
            iVar10 = FUN_004a7930(2,0xffffffff);
          }
          else {
            iVar10 = FUN_004a7930(2,*(undefined4 *)(param_5 + 0x18));
          }
        }
        else if (param_3 < 0xa0a5) {
          if (param_3 == 0xa0a4) {
            iVar10 = FUN_00436200(puVar3,param_5);
          }
          else {
            if (param_3 != 0x9d13) {
              if (param_3 == 0x9e8f) goto LAB_004c8f14;
              goto switchD_004c9063_default;
            }
            if (param_5 == 0) {
              iVar10 = FUN_004a7930(3,0xffffffff);
            }
            else {
              iVar10 = FUN_004a7930(3,*(undefined4 *)(param_5 + 0x18));
            }
          }
        }
        else {
          if (param_3 != 0xa0a5) goto switchD_004c9063_default;
          iVar10 = FUN_00436260(puVar3,param_5);
        }
      }
      else {
        if (param_3 < 0xa34a) {
          if (param_3 == 0xa349) {
            iVar10 = 0x1e;
          }
          else if (param_3 < 0xa2b4) {
            if (param_3 == 0xa2b3) {
              iVar10 = 1;
            }
            else {
              if (param_3 == 0xa1d1) {
                iVar10 = FUN_00435da0(puVar3,param_5);
                goto LAB_004c9db6;
              }
              if (param_3 != 0xa2b2) goto switchD_004c9063_default;
              iVar10 = 0;
            }
          }
          else {
            if (param_3 != 0xa348) goto switchD_004c9063_default;
            iVar10 = 0x1d;
          }
          goto LAB_004c903f;
        }
        switch(param_3) {
        case 0xc5c8:
          FUN_004d3740(param_1,0,0x3fd00000);
          return;
        case 0xc5c9:
          FUN_004d3740(param_1,0,0x3fe00000);
          return;
        case 0xc5ca:
          FUN_004d3740(param_1,0,0x3ff00000);
          return;
        case 0xc5cb:
          FUN_004d3740(param_1,0,0x40000000);
          return;
        }
switchD_004c9063_default:
        if (param_5 == 0) {
          return;
        }
        if (*(int *)(param_5 + 4) == 2) {
          puVar5 = *(uint **)(*(int *)(param_5 + 0x69c) + 0x54);
          if (param_3 < 0xcb) {
            if (param_3 == 0xca) {
              if ((*puVar5 & 0x200) != 0) {
                return;
              }
              pRVar1 = (RECT *)(puVar5 + 0x25);
              *puVar5 = *puVar5 | 0x200;
              InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
              local_74.x = pRVar1->left;
              local_74.y = puVar5[0x26];
              local_6c = puVar5[0x27];
              local_68 = puVar5[0x28];
              MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_74,2);
              local_88 = (RECT *)(puVar5[3] - puVar5[1]);
              local_84 = puVar5[4] - puVar5[2];
              FUN_00505c10(param_1,param_5,&local_74,&local_88,param_4 != 0);
              *puVar5 = *puVar5 & 0xfffffdff;
              InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
              *(uint *)*puVar3 = *(uint *)*puVar3 | 8;
              return;
            }
            switch(param_3) {
            case 0x42:
              if ((*(byte *)(param_5 + 0x10) & 0x80) != 0) {
                return;
              }
              FUN_004c9fb0(param_1,param_5,0,puVar5 + 0x31);
              return;
            case 0x46:
switchD_004c8ea4_caseD_46:
              iVar10 = FUN_004c7800(param_1,param_5,puVar5 + 0xd);
              goto LAB_004c9db6;
            case 199:
              uVar14 = ~*(uint *)(param_5 + 0x10) >> 7 & 1;
              if ((uVar14 != 0) &&
                 (((SVar4 = GetKeyState(0x10), SVar4 < 0 ||
                   ((iVar10 = FUN_005c6340(*(undefined4 *)(param_1 + 0xbc8)), iVar10 == 0 &&
                    (DAT_0064b000 == 0)))) &&
                  (iVar10 = FUN_005e3b70(*(undefined4 *)(param_1 + 0xbc8),DAT_00647624), iVar10 == 0
                  )))) {
                return;
              }
              if ((*(byte *)(param_5 + 0x10) & 0x10) == 0) {
                FUN_004c7de0(param_1,param_5,uVar14);
              }
              else {
                iVar10 = 0;
                if (*(int *)(param_1 + 0xbc8) == 0) {
                  local_64 = 0;
                }
                else {
                  local_64 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
                }
                if ((*(int *)(param_1 + 0xbc8) == 0) ||
                   (iVar6 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar6 == 0)) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = _DAT_00000000;
                  if (*(int *)(param_1 + 0xbc8) != 0) {
                    puVar5 = (uint *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
                    uVar11 = *puVar5;
                  }
                }
                if (0 < (int)uVar11) {
                  do {
                    iVar6 = *(int *)(*(int *)(local_64 + 8) + iVar10 * 4);
                    if (((*(byte *)(iVar6 + 0x10) & 0x10) != 0) && (*(int *)(iVar6 + 4) == 2)) {
                      FUN_004c7de0(param_1,iVar6,uVar14);
                    }
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < (int)uVar11);
                }
              }
              local_88->left = local_88->left | 1;
              FUN_004530a0(param_1,0x1000);
              FUN_00456c20(param_1);
              return;
            case 200:
              if ((*puVar5 & 0x100) != 0) {
                return;
              }
              iVar10 = *(int *)(param_1 + 0xce4);
              if (((*(byte *)(iVar10 + 0x10) & 0x80) != 0) &&
                 (iVar6 = Transport_IsRecording(), iVar6 != 0)) {
                return;
              }
              local_88 = (RECT *)(puVar5 + 0x21);
              *puVar5 = *puVar5 | 0x100;
              InvalidateRect(*(HWND *)(param_1 + 4),local_88,0);
              iVar6 = FUN_004c6df0(iVar10,*(uint *)(iVar10 + 0x10) >> 7 & 1);
              if (iVar6 != 0) {
                local_60.x = puVar5[0x23];
                local_60.y = puVar5[0x24];
                ClientToScreen(*(HWND *)(param_1 + 4),&local_60);
                iVar6 = FUN_00404830(*(undefined4 *)(param_1 + 4),iVar6,&local_60,2);
                if (iVar6 != 0) {
                  FUN_004c87d0(param_1,param_2,iVar6,0,iVar10);
                }
              }
              *puVar5 = *puVar5 & 0xfffffeff;
              InvalidateRect(*(HWND *)(param_1 + 4),local_88,0);
              return;
            }
          }
          else if (param_3 < 0xa0c8) {
            if (param_3 == 0xa0c7) goto switchD_004c8ea4_caseD_46;
            if (param_3 == 0xcb) {
              if ((*puVar5 & 0x400) != 0) {
                return;
              }
              pRVar1 = (RECT *)(puVar5 + 0x29);
              *puVar5 = *puVar5 | 0x400;
              InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
              if ((*(LPCSTR *)(param_5 + 0xc) == (LPCSTR)0x0) ||
                 (iVar10 = lstrlenA(*(LPCSTR *)(param_5 + 0xc)), iVar10 == 0)) {
                SfPrintF(local_50,DAT_0063eac0,*(undefined4 *)(param_5 + 0x18));
              }
              local_88 = (RECT *)0x1;
              local_84 = param_5;
              local_74.x = pRVar1->left;
              local_80 = param_1;
              local_74.y = puVar5[0x2a];
              local_6c = puVar5[0x2b];
              local_68 = puVar5[0x2c];
              MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_74,2);
              FUN_00505da0(&local_88,&PTR_LAB_0063ebb8,local_50,DAT_00647624,&local_74,
                           *(undefined4 *)(param_1 + 4));
              *puVar5 = *puVar5 & 0xfffffbff;
              InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
              return;
            }
            if (param_3 == 0xd5) {
              FUN_004353f0(puVar3,param_5,~*(uint *)(*(int *)(param_1 + 0xce4) + 0x634) & 1);
              InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(puVar5 + 0x1d),0);
              return;
            }
          }
          else if (param_3 == 0xa0d4) {
            FUN_004353f0(puVar3,param_5,~*(uint *)(param_5 + 0x634) & 1);
            return;
          }
        }
        if (*(int *)(param_5 + 4) == 3) {
          puVar5 = *(uint **)(*(int *)(param_5 + 0x69c) + 0x54);
          if (param_3 < 0xa0c8) {
            if (param_3 != 0xa0c7) {
              switch(param_3) {
              case 0x46:
                break;
              default:
                goto switchD_004c94ed_caseD_47;
              case 0x49:
                FUN_004c9fb0(param_1,param_5,0x80,puVar5 + 0x39);
                return;
              case 0xc3:
                FUN_004c8590(param_1,param_5,~*(uint *)(param_5 + 0x10) >> 0x12 & 1,
                             *(uint *)(param_5 + 0x10) >> 0x13 & 1);
                return;
              case 0xc4:
                GetKeyState(0x10);
                GetKeyState(0x11);
                FUN_004c8590(param_1,param_5,*(uint *)(param_5 + 0x10) >> 0x12 & 1,
                             ~*(uint *)(param_5 + 0x10) >> 0x13 & 1);
                return;
              case 0xca:
                if (DAT_0064b4e4 == 0) {
                  iVar10 = FUN_00601ab0(&local_60,&local_88,1);
                  if (iVar10 < 0) {
                    DAT_0064b4f0 = 1;
                  }
                  else {
                    uVar14 = ((uint)local_88 & 0xffff) >> 8;
                    if ((int)DAT_0064b4e4 <= (int)uVar14) {
                      DAT_0064b4f0 = 0;
                      _DAT_0064b4f4 = local_60.x;
                      DAT_0064b4e4 = uVar14;
                    }
                  }
                }
                if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
                  return;
                }
                if ((*puVar5 & 0x200) != 0) {
                  return;
                }
                local_80 = *(undefined4 *)(param_5 + 0x138);
                *puVar5 = *puVar5 | 0x200;
                pRVar1 = (RECT *)(puVar5 + 0x29);
                local_7c = 0;
                local_84 = param_5;
                local_88 = (RECT *)0x2;
                InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
                local_74.x = pRVar1->left;
                local_74.y = puVar5[0x2a];
                local_6c = puVar5[0x2b];
                local_68 = puVar5[0x2c];
                MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_74,2);
                FUN_0044e590(&local_88,param_4 != 0,&local_74);
                *puVar5 = *puVar5 & 0xfffffdff;
                InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
                return;
              case 0xcd:
                if (DAT_0064b4e4 == 0) {
                  iVar10 = FUN_00601ab0(&local_60,&local_88,1);
                  if (iVar10 < 0) {
                    DAT_0064b4f0 = 1;
                  }
                  else {
                    uVar14 = ((uint)local_88 & 0xffff) >> 8;
                    if ((int)DAT_0064b4e4 <= (int)uVar14) {
                      DAT_0064b4f0 = 0;
                      _DAT_0064b4f4 = local_60.x;
                      DAT_0064b4e4 = uVar14;
                    }
                  }
                }
                if (0x20 < (int)DAT_0064b4e4) {
                  if (DAT_0064b4e0 == 0) {
                    iVar10 = FUN_00601ab0(&local_54,&local_64,1);
                    if (iVar10 < 0) {
                      DAT_0064b4f0 = 1;
                    }
                    else if ((int)DAT_0064b4e0 <= (int)(local_64 & 0xff)) {
                      DAT_0064b4f0 = 0;
                      _DAT_0064b4f4 = local_54;
                      DAT_0064b4e0 = local_64 & 0xff;
                    }
                  }
                  if (0x20 < (int)DAT_0064b4e0) {
                    FUN_004e9f70(puVar3,0x247,0);
                    FUN_004ea250(puVar3,param_5,0x29,0);
                    FUN_005cb160(puVar3,param_5,5,~*(uint *)(param_5 + 0x44) >> 5 & 1);
                    FUN_004eb2b0(puVar3);
                    FUN_004ea040(puVar3,0);
                    return;
                  }
                }
                if (DAT_0064b578 == 0) {
                  return;
                }
                FUN_0057a990(DAT_00647624,0x12);
                return;
              case 0xce:
                if (DAT_0064b4e4 == 0) {
                  iVar10 = FUN_00601ab0(&local_60,&local_88,1);
                  if (iVar10 < 0) {
                    DAT_0064b4f0 = 1;
                  }
                  else {
                    uVar14 = ((uint)local_88 & 0xffff) >> 8;
                    if ((int)DAT_0064b4e4 <= (int)uVar14) {
                      DAT_0064b4f0 = 0;
                      _DAT_0064b4f4 = local_60.x;
                      DAT_0064b4e4 = uVar14;
                    }
                  }
                }
                if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
                  return;
                }
                if ((*puVar5 & 0x400) != 0) {
                  return;
                }
                pRVar1 = (RECT *)(puVar5 + 0x2d);
                *puVar5 = *puVar5 | 0x400;
                InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
                local_74.x = pRVar1->left;
                local_7c = 0;
                local_74.y = puVar5[0x2e];
                local_88 = (RECT *)0x2;
                local_6c = puVar5[0x2f];
                local_84 = param_5;
                local_68 = puVar5[0x30];
                local_80 = 0xffffffff;
                MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_74,2);
                FUN_00521940(&local_88,&local_74);
                *puVar5 = *puVar5 & 0xfffffbff;
                InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
                return;
              case 0xcf:
                if (DAT_0064b4e4 == 0) {
                  iVar10 = FUN_00601ab0(&local_60,&local_88,1);
                  if (iVar10 < 0) {
                    DAT_0064b4f0 = 1;
                  }
                  else {
                    uVar14 = ((uint)local_88 & 0xffff) >> 8;
                    if ((int)DAT_0064b4e4 <= (int)uVar14) {
                      DAT_0064b4f0 = 0;
                      _DAT_0064b4f4 = local_60.x;
                      DAT_0064b4e4 = uVar14;
                    }
                  }
                }
                if ((DAT_0064b4e4 != 0x20) && (DAT_0064b4e4 != 0x40)) {
                  return;
                }
                if ((*puVar5 & 0x800) != 0) {
                  return;
                }
                pRVar1 = (RECT *)(puVar5 + 0x31);
                *puVar5 = *puVar5 | 0x800;
                InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
                local_74.x = pRVar1->left;
                local_7c = 0;
                local_80 = 0;
                local_74.y = puVar5[0x32];
                local_88 = (RECT *)0x3;
                local_84 = param_5;
                local_6c = puVar5[0x33];
                local_68 = puVar5[0x34];
                MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_74,2);
                FUN_0044e590(&local_88,0,&local_74);
                *puVar5 = *puVar5 & 0xfffff7ff;
                InvalidateRect(*(HWND *)(param_1 + 4),pRVar1,0);
                return;
              }
            }
            iVar10 = FUN_004c7800(param_1,param_5,puVar5 + 0x15);
            goto LAB_004c9db6;
          }
          if (param_3 < 0xa37b) {
            if (param_3 == 0xa37a) {
              FUN_005cb160(puVar3,param_5,4,~*(uint *)(param_5 + 0x44) >> 4 & 1);
              return;
            }
            switch(param_3) {
            case 0xa1ca:
              FUN_005cb160(puVar3,param_5,0,~*(uint *)(param_5 + 0x44) >> 1 & 1);
              return;
            case 0xa1cb:
              FUN_005cb160(puVar3,param_5,1,~*(uint *)(param_5 + 0x44) >> 2 & 1);
              return;
            case 0xa1cc:
              FUN_005cb160(puVar3,param_5,2,~*(uint *)(param_5 + 0x44) & 1);
              return;
            case 0xa1ce:
              FUN_005cb160(puVar3,param_5,3,~*(uint *)(param_5 + 0x44) >> 3 & 1);
              return;
            }
          }
          else {
            if (param_3 == 0xa37c) {
              FUN_004c8210(param_1,param_5,1);
              return;
            }
            if (param_3 == 0xa37d) {
              FUN_004c8210(param_1,param_5,3);
              return;
            }
            if (param_3 == 0xa37e) {
              FUN_004c8210(param_1,param_5,4);
              return;
            }
          }
        }
switchD_004c94ed_caseD_47:
        if (param_3 < 0xa0c2) {
          if (param_3 == 0xa0c1) {
            FUN_004354b0(puVar3,param_5,~param_4 >> 1 & 1);
            return;
          }
          switch(param_3) {
          case 0xc1:
            if ((*(uint *)(param_1 + 0x18) & 0x80000) == 0) {
              *(uint *)(param_5 + 0x10) = *(uint *)(param_5 + 0x10) ^ 0x10000;
            }
            else {
              *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfff7ffff;
              *(uint *)(param_5 + 0x10) = *(uint *)(param_5 + 0x10) | 0x10000;
            }
            FUN_00456c20(param_1);
            *(uint *)*puVar3 = *(uint *)*puVar3 | 0x10;
            PostMessageA(*(HWND *)(param_1 + 4),0x111,0xa1d0,0);
            return;
          case 0xc2:
            uVar14 = *(uint *)(param_1 + 0x18);
            if ((uVar14 & 0x80000) == 0) {
              *(uint *)(param_1 + 0x18) = uVar14 | 0x80000;
              FUN_004549b0(param_1,*(int *)(param_5 + 0x18) * *(int *)(param_1 + 0xbb0),
                           *(int *)(param_1 + 0xbb0),5);
            }
            else {
              *(uint *)(param_1 + 0x18) = uVar14 & 0xfff7ffff;
              *(uint *)(param_5 + 0x10) = *(uint *)(param_5 + 0x10) & 0xfffeffff;
            }
            FUN_00456c20(param_1);
            *(uint *)*puVar3 = *(uint *)*puVar3 | 0x10;
            PostMessageA(*(HWND *)(param_1 + 4),0x111,0xa1d0,0);
            return;
          default:
            goto switchD_004c9b7f_caseD_c3;
          case 0xc5:
            SVar4 = GetKeyState(0x11);
            FUN_00435570(puVar3,param_5,SVar4 < 0);
            return;
          case 0xc6:
            SVar4 = GetKeyState(0x11);
            FUN_004357f0(puVar3,param_5,SVar4 < 0);
            return;
          case 0x100:
            iVar10 = FUN_00435890(puVar3,param_5,1,0xffffffff);
            break;
          case 0x101:
            iVar10 = FUN_00435890(puVar3,param_5,1,1);
          }
        }
        else {
          if (param_3 < 0xa0c5) {
            if (param_3 == 0xa0c4) {
              FUN_004356c0(puVar3,param_5,~param_4 >> 3 & 1);
              return;
            }
            if (param_3 != 0xa0c2) {
              if (param_3 != 0xa0c3) {
                return;
              }
              FUN_00435610(puVar3,param_5,~param_4 >> 2 & 1);
              return;
            }
            FUN_00435730(puVar3,param_5,~param_4 & 1);
            return;
          }
          if (param_3 == 0xa0c6) {
            iVar10 = FUN_00435a30(param_1,param_5);
          }
          else {
            if (param_3 != 0xc4e3) {
              return;
            }
            iVar10 = FUN_00436ae0(param_5);
          }
        }
      }
    }
    else {
      if (param_5 == 0) {
        return;
      }
      FUN_004e9f70(puVar3,0x4e,0);
      if ((*(byte *)(param_5 + 0x10) & 0x10) == 0) {
        if (*(int *)(param_5 + 0x44) != param_3 - 0x1970) {
          FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),param_5,0xe,0);
          FUN_004c4490(param_1,param_5,param_3 - 0x1970);
          iVar10 = 0;
LAB_004c8b06:
          FUN_004eb2b0(puVar3);
        }
      }
      else {
        if (*(int *)(param_1 + 0xbc8) == 0) {
          local_78 = 0;
        }
        else {
          local_78 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        }
        if ((*(int *)(param_1 + 0xbc8) == 0) ||
           (iVar6 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar6 == 0)) {
          local_58 = 0;
        }
        else {
          local_58 = _DAT_00000000;
          if (*(int *)(param_1 + 0xbc8) != 0) {
            puVar5 = (uint *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
            local_58 = *puVar5;
          }
        }
        local_8c = 0;
        if (0 < (int)local_58) {
          do {
            iVar6 = *(int *)(*(int *)(local_78 + 8) + local_8c * 4);
            if (((*(byte *)(iVar6 + 0x10) & 0x10) != 0) &&
               (*(int *)(iVar6 + 0x44) != param_3 - 0x1970)) {
              FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar6,0xe,0);
              FUN_004c4490(param_1,iVar6,param_3 - 0x1970);
              iVar10 = 0;
            }
            local_8c = local_8c + 1;
          } while (local_8c < (int)local_58);
          if (iVar10 != 1) goto LAB_004c8b06;
        }
      }
      FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
    }
  }
  else {
    iVar10 = param_3 - 0xa28b;
LAB_004c903f:
    iVar10 = FUN_0052bd70(puVar3,param_5,iVar10,0);
    FUN_004530a0(param_1,0);
  }
LAB_004c9db6:
  if (iVar10 < 0) {
    _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 4),0x30,8,iVar10,0,0);
  }
switchD_004c9b7f_caseD_c3:
  return;
}


