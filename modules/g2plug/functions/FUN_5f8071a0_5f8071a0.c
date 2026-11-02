/* Module: g2plug.dll
   Function: FUN_5f8071a0
   Address: 5f8071a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f8074c3) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x5f8072f1 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_5f8071a0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte *_Memory;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  HGLOBAL pvVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int *unaff_EBP;
  int *piVar11;
  char *pcVar12;
  int *unaff_EDI;
  bool bVar13;
  int *piStack_90;
  int *piStack_8c;
  uint uStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  int *piStack_78;
  ulong uStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_3c;
  byte *pbStack_38;
  int *piStack_34;
  
  if ((*(int *)(param_3 + 0x134) == 0) && (*(int *)(param_3 + 0x140) == 3)) {
    *(undefined4 *)(param_3 + 0x140) = 2;
  }
  piStack_3c = DAT_5f87749c;
  if (DAT_5f87749c != (int *)0x0) {
    (**(code **)*DAT_5f87749c)();
    uVar2 = *(uint *)(param_3 + 0x138);
    iVar9 = 9;
    puVar8 = (uint *)(param_2 + 0x6a4);
    do {
      *puVar8 = uVar2 & 1;
      piVar11 = DAT_5f87749c;
      uVar2 = uVar2 >> 1;
      iVar9 = iVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (iVar9 != 0);
    (**(code **)(*DAT_5f87749c + 0xc))();
    iVar9 = (**(code **)(iRam00000000 + 0xc))();
    pbStack_38 = *(byte **)(param_3 + 300);
    if (*(int *)(param_3 + 0x148) == -1) {
      pbStack_38 = (byte *)0x0;
    }
    piStack_34 = *(int **)(param_3 + 0x128);
    if (*(int *)(param_3 + 0x140) == -1) {
      piStack_34 = (int *)0x0;
    }
    _Memory = calloc(1,0x100);
    while (((-1 < (int)piStack_3c && (-1 < iVar9)) && (iVar9 != 0x40012))) {
      piStack_3c = (int *)(**(code **)*unaff_EDI)();
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))();
      }
      unaff_EDI = (int *)0x0;
      if ((int)piStack_3c < 0) break;
      (**(code **)(iRam00000000 + 0xc))();
      pbVar3 = _Memory;
      if (&stack0x00000000 == (undefined1 *)0x18) {
LAB_5f807345:
        if (piVar11 == (int *)0x0) {
LAB_5f80741f:
          if (*(int *)(param_3 + 0x41b) != 0) {
            pcVar12 = "application/x-pn-realevent";
            do {
              bVar1 = *pbVar3;
              bVar13 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_5f807454:
                iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_5f807459;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar13 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_5f807454;
              pbVar3 = pbVar3 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            iVar9 = 0;
LAB_5f807459:
            pbVar3 = pbStack_38;
            if (iVar9 == 0) {
              *(undefined4 *)(param_2 + 0x6d0) = 0;
              goto LAB_5f8074b5;
            }
          }
          if (*(int *)(param_3 + 0x130) != 0) {
            pcVar12 = "application/x-pn-imagemap";
            do {
              bVar1 = *pbVar3;
              bVar13 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_5f8074a2:
                iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_5f8074a7;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar13 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_5f8074a2;
              pbVar3 = pbVar3 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            iVar9 = 0;
LAB_5f8074a7:
            if (iVar9 == 0) {
              *(undefined4 *)(param_2 + 0x6d4) = 0;
              goto LAB_5f8074b5;
            }
          }
        }
        else {
          pcVar12 = "video/x-pn-realvideo";
          do {
            bVar1 = *pbVar3;
            bVar13 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_5f80737c:
              iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_5f807381;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar13 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_5f80737c;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar9 = 0;
LAB_5f807381:
          pbVar3 = pbStack_38;
          if (iVar9 != 0) goto LAB_5f80741f;
          *(undefined4 *)(param_2 + 0x6cc) = 0;
          (**(code **)(iRam00000000 + 4))();
          piStack_68 = *(int **)(param_2 + 0x6cc);
          piStack_64 = (int *)&DAT_5f86a520;
          piStack_6c = (int *)0x5f8073b0;
          iVar9 = (**(code **)*piStack_68)();
          if (-1 < iVar9) {
            piStack_64 = (int *)0x5f8073c6;
            pvVar7 = GlobalAlloc(0x40,0x34);
            puVar4 = GlobalLock(pvVar7);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4 = FUN_5f80ab90(puVar4);
            }
            *(undefined4 **)(param_2 + 0x698) = puVar4;
            if (puVar4 != (undefined4 *)0x0) {
              iVar9 = 0;
              piVar10 = unaff_EDI;
              do {
                if (*piVar10 != 0) break;
                iVar9 = iVar9 + 1;
                piVar10 = piVar10 + 1;
              } while (iVar9 < 9);
              piStack_6c = *(int **)(param_2 + 0x694);
              piStack_64 = (int *)0x0;
              piStack_70 = (int *)0x5f807412;
              piStack_68 = puVar4;
              (**(code **)(*piStack_6c + 0xc))();
            }
          }
        }
      }
      else {
        pcVar12 = "audio/x-pn-realaudio";
        do {
          bVar1 = *pbVar3;
          bVar13 = bVar1 < (byte)*pcVar12;
          if (bVar1 != *pcVar12) {
LAB_5f807329:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_5f80732e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar13 = bVar1 < (byte)pcVar12[1];
          if (bVar1 != pcVar12[1]) goto LAB_5f807329;
          pbVar3 = pbVar3 + 2;
          pcVar12 = pcVar12 + 2;
        } while (bVar1 != 0);
        iVar9 = 0;
LAB_5f80732e:
        pbVar3 = pbStack_38;
        if (iVar9 != 0) goto LAB_5f807345;
        *(undefined4 *)(param_2 + 0x6c8) = 0;
LAB_5f8074b5:
        (**(code **)(iRam00000000 + 4))();
      }
      piStack_64 = (int *)0x5f8074e0;
      iVar9 = (**(code **)(*piStack_34 + 0x10))();
    }
    free(_Memory);
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))();
    }
    piVar11 = *(int **)(param_2 + 0x6c8);
    if ((((((piVar11 == (int *)0x0) && (piStack_34 != (int *)0x0)) ||
          ((*(int *)(param_2 + 0x6cc) == 0 && (pbStack_38 != (byte *)0x0)))) ||
         ((*(int *)(param_2 + 0x6d0) == 0 && (*(int *)(param_3 + 0x41b) != 0)))) ||
        ((*(int *)(param_2 + 0x6d4) == 0 && (*(int *)(param_3 + 0x130) != 0)))) ||
       ((int)piStack_3c < 0)) {
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 8))();
        *(undefined4 *)(param_2 + 0x6c8) = 0;
      }
      if (*(int **)(param_2 + 0x6cc) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x6cc) + 8))();
        *(undefined4 *)(param_2 + 0x6cc) = 0;
      }
      if (*(int **)(param_2 + 0x6d0) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x6d0) + 8))();
        *(undefined4 *)(param_2 + 0x6d0) = 0;
      }
      if (*(int **)(param_2 + 0x6d4) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x6d4) + 8))();
        *(undefined4 *)(param_2 + 0x6d4) = 0;
      }
      iVar9 = -0x7fffbffe;
LAB_5f807b30:
      return -(uint)(iVar9 != 0) & 0x80004005;
    }
    (**(code **)(*DAT_5f87749c + 0x34))();
    pcVar12 = "video/x-pn-realvideo";
    piStack_64 = DAT_5f87749c;
    piStack_68 = (int *)0x5f8075da;
    (**(code **)(*DAT_5f87749c + 0x34))();
    piStack_68 = *(int **)(param_3 + 0x41b);
    piStack_6c = (int *)0x5f86af0c;
    piStack_70 = DAT_5f87749c;
    uStack_74 = 0x5f8075f1;
    (**(code **)(*DAT_5f87749c + 0x34))();
    uStack_74 = *(ulong *)(param_3 + 0x130);
    piStack_78 = (int *)0x5f86aef0;
    piStack_7c = DAT_5f87749c;
    uStack_80 = 0x5f807608;
    (**(code **)(*DAT_5f87749c + 0x34))();
    uStack_80 = 0;
    piStack_84 = DAT_5f87749c;
    uStack_88 = 0x5f807616;
    (**(code **)(*DAT_5f87749c + 0x24))();
    uStack_88 = (uint)(*(int *)(param_3 + 0x14c) == 1);
    piStack_8c = DAT_5f87749c;
    piStack_90 = (int *)0x5f807630;
    (**(code **)(*DAT_5f87749c + 0x2c))();
    piVar11 = (int *)(param_2 + 0x688);
    piStack_90 = piVar11;
    iVar9 = (**(code **)(*DAT_5f87749c + 0x10))();
    if (iVar9 < 0) {
      if (*(int **)(param_2 + 0x6c8) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x6c8) + 8))();
        *(undefined4 *)(param_2 + 0x6c8) = 0;
      }
      if (*(int **)(param_2 + 0x6cc) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x6cc) + 8))();
        *(undefined4 *)(param_2 + 0x6cc) = 0;
      }
      if (*(int **)(param_2 + 0x6d0) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x6d0) + 8))();
        *(undefined4 *)(param_2 + 0x6d0) = 0;
      }
      if (*(int **)(param_2 + 0x6d4) != (int *)0x0) {
        (**(code **)(**(int **)(param_2 + 0x6d4) + 8))();
        *(undefined4 *)(param_2 + 0x6d4) = 0;
        return 0x80004005;
      }
    }
    else {
      iVar9 = (**(code **)(*(int *)*piVar11 + 0x20))();
      if (iVar9 < 0) {
        if (*(int **)(param_2 + 0x6c8) != (int *)0x0) {
          (**(code **)(**(int **)(param_2 + 0x6c8) + 8))();
          *(undefined4 *)(param_2 + 0x6c8) = 0;
        }
        if (*(int **)(param_2 + 0x6cc) != (int *)0x0) {
          (**(code **)(**(int **)(param_2 + 0x6cc) + 8))();
          *(undefined4 *)(param_2 + 0x6cc) = 0;
        }
        if (*(int **)(param_2 + 0x6d0) != (int *)0x0) {
          (**(code **)(**(int **)(param_2 + 0x6d0) + 8))();
          *(undefined4 *)(param_2 + 0x6d0) = 0;
        }
        piVar10 = *(int **)(param_2 + 0x6d4);
      }
      else {
        (**(code **)(*(int *)*piVar11 + 0x30))();
        (**(code **)(*(int *)*piVar11 + 0x38))();
        (**(code **)(*(int *)*piVar11 + 0x40))();
        (**(code **)(*(int *)*piVar11 + 0x48))();
        if (*(char *)(param_3 + 0x2e0) != '\0') {
          FUN_5f806e80(0x5f86aee4,(char *)(param_3 + 0x2e0));
        }
        (**(code **)(*(int *)*piVar11 + 0x60))();
        (**(code **)(*(int *)*piVar11 + 0x58))((int *)*piVar11,*(undefined4 *)(param_3 + 0x158));
        (**(code **)(*(int *)*piVar11 + 0x50))((int *)*piVar11,*(undefined4 *)(param_3 + 0x15c));
        (**(code **)(*(int *)*piVar11 + 0x18))((int *)*piVar11,0);
        (**(code **)(*(int *)*piVar11 + 0x10))((int *)*piVar11,1);
        iVar9 = (**(code **)(*DAT_5f87749c + 0x18))(DAT_5f87749c,&stack0xffffff3c);
        if (iVar9 < 0) {
          if (*(int **)(param_2 + 0x6c8) != (int *)0x0) {
            (**(code **)(**(int **)(param_2 + 0x6c8) + 8))();
            *(undefined4 *)(param_2 + 0x6c8) = 0;
          }
          if (*(int **)(param_2 + 0x6cc) != (int *)0x0) {
            (**(code **)(**(int **)(param_2 + 0x6cc) + 8))();
            *(undefined4 *)(param_2 + 0x6cc) = 0;
          }
          if (*(int **)(param_2 + 0x6d0) != (int *)0x0) {
            (**(code **)(**(int **)(param_2 + 0x6d0) + 8))();
            *(undefined4 *)(param_2 + 0x6d0) = 0;
          }
          piVar10 = *(int **)(param_2 + 0x6d4);
        }
        else {
          puVar4 = (undefined4 *)(param_2 + 0x68c);
          iVar9 = (**(code **)*piStack_7c)();
          if (-1 < iVar9) {
            if (piStack_7c != (int *)0x0) {
              (**(code **)(*piStack_7c + 8))();
              piStack_7c = (int *)0x0;
            }
            if ((uStack_88 == 0) && (piStack_84 != (int *)0x0)) {
              (**(code **)(*(int *)*puVar4 + 0x44))();
            }
            if (*(int *)(pcVar12 + 0x13c) != 0) {
              (**(code **)(*(int *)*puVar4 + 0x34))();
            }
            if (*(int *)(pcVar12 + 0x150) != 0) {
              (**(code **)(*(int *)*puVar4 + 0x3c))();
            }
            if (uStack_88 != 0) {
              (**(code **)(*(int *)*puVar4 + 0x2c))();
              iVar5 = (**(code **)**(undefined4 **)(param_2 + 0x6cc))();
              if (-1 < iVar5) {
                if ((pcVar12[0x66b] & 1U) != 0) {
                  (**(code **)(*piStack_64 + 0x10))();
                }
                if ((pcVar12[0x66b] & 2U) != 0) {
                  (**(code **)(*piStack_64 + 0x18))();
                }
                if ((pcVar12[0x66b] & 4U) != 0) {
                  (**(code **)(*piStack_64 + 0x20))();
                }
                if ((pcVar12[0x66b] & 8U) != 0) {
                  (**(code **)(*piStack_64 + 0x28))();
                }
                if ((pcVar12[0x66b] & 0x10U) != 0) {
                  (**(code **)(*piStack_64 + 0x28))();
                }
                (**(code **)(*piStack_64 + 8))();
              }
            }
            if (piStack_84 != (int *)0x0) {
              (**(code **)(*(int *)*puVar4 + 0x24))();
            }
            (**(code **)(*(int *)*puVar4 + 0x14))();
            uVar2 = 0;
            piVar11 = piStack_78;
            do {
              if (((*piVar11 != 0) &&
                  ((**(code **)(*(int *)*puVar4 + 0xc))(), piStack_64[0x4b] != 0)) &&
                 (iVar9 = (**(code **)(*DAT_5f8774a0 + 0xc))(), iVar9 == 0)) {
                iVar9 = (**(code **)*piStack_6c)();
                if (iVar9 == 0) {
                  (**(code **)(*piStack_68 + 0x40))();
                  (**(code **)(*piStack_70 + 0x38))();
                  if ((*(int *)((int)piStack_64 + 0x65b) != 0) &&
                     (*(int *)((int)piStack_64 + 0x663) != 0)) {
                    (**(code **)(*piStack_68 + 0x50))();
                  }
                  if (*(int *)((int)piStack_64 + 0x667) != 0) {
                    (**(code **)(*piStack_68 + 0x48))();
                  }
                  if (piStack_68 != (int *)0x0) {
                    (**(code **)(*piStack_68 + 8))();
                    piStack_68 = (int *)0x0;
                  }
                }
                if (piStack_6c != (int *)0x0) {
                  (**(code **)(*piStack_6c + 8))();
                  piStack_6c = (int *)0x0;
                }
              }
              uVar2 = uVar2 + 1;
              piVar11 = piVar11 + 1;
            } while (uVar2 < 9);
            lVar6 = SfG2GetCodecInfo(*(_GUID *)(piStack_64 + 1),(uchar **)&piStack_90,&uStack_74);
            if (-1 < lVar6) {
              SfRealG2_RestoreTargetData((uchar *)piStack_90,uStack_74);
              pvVar7 = GlobalHandle(piStack_90);
              GlobalUnlock(pvVar7);
              pvVar7 = GlobalHandle(piStack_90);
              GlobalFree(pvVar7);
            }
            goto LAB_5f807b30;
          }
          if (*(int **)(param_2 + 0x6c8) != (int *)0x0) {
            (**(code **)(**(int **)(param_2 + 0x6c8) + 8))();
            *(undefined4 *)(param_2 + 0x6c8) = 0;
          }
          if (*(int **)(param_2 + 0x6cc) != (int *)0x0) {
            (**(code **)(**(int **)(param_2 + 0x6cc) + 8))();
            *(undefined4 *)(param_2 + 0x6cc) = 0;
          }
          if (*(int **)(param_2 + 0x6d0) != (int *)0x0) {
            (**(code **)(**(int **)(param_2 + 0x6d0) + 8))();
            *(undefined4 *)(param_2 + 0x6d0) = 0;
          }
          piVar10 = *(int **)(param_2 + 0x6d4);
        }
      }
      if (piVar10 != (int *)0x0) {
        (**(code **)(*piVar10 + 8))();
        *(undefined4 *)(param_2 + 0x6d4) = 0;
      }
      if ((int *)*piVar11 != (int *)0x0) {
        (**(code **)(*(int *)*piVar11 + 8))();
        *piVar11 = 0;
      }
    }
  }
  return 0x80004005;
}


