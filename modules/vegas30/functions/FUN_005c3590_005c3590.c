/* Module: vegas30.exe
   Function: FUN_005c3590
   Address: 005c3590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005c3829) */
/* WARNING: Removing unreachable block (ram,0x005c3c17) */
/* WARNING: Removing unreachable block (ram,0x005c3d24) */
/* WARNING: Removing unreachable block (ram,0x005c3933) */

int FUN_005c3590(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_EBX;
  uint *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iStack_78;
  undefined1 *puStack_74;
  int *piStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 local_50 [40];
  int *piStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int aiStack_10 [4];
  
  puStack_74 = local_50;
  iStack_78 = 1;
  iVar6 = (**(code **)(*param_1 + 0x14))(param_1,0,0);
  if ((iVar6 < 0) ||
     (iVar6 = (**(code **)(*param_1 + 0xc))(param_1,&puStack_74,4,aiStack_10), iVar6 < 0)) {
LAB_005c35f8:
    if (puStack_74 == (undefined1 *)0x40) {
      puVar10 = &uStack_54;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      iVar6 = (**(code **)(*param_1 + 0xc))(param_1,&uStack_54,0x40,&stack0xffffff98);
      if (iVar6 < 0) {
        return iVar6;
      }
      if (iStack_78 != 0x40) {
        return -0x7ffb1ff8;
      }
      iVar14 = 0;
      if ((*(byte *)(iStack_1c + 0x134) & 0x20) != 0) {
        piVar12 = *(int **)(iStack_1c + 0x130);
        iStack_18 = 0;
        piStack_20 = (int *)0xffffffff;
        if (piVar12 != (int *)0x0) {
          iVar14 = 0;
          if (0 < *piVar12) {
            do {
              iStack_18 = *(int *)(piVar12[2] + iVar14 * 4);
              if ((*(int *)(iStack_18 + 4) == 0) &&
                 (piStack_20 = (int *)((int)piStack_20 + 1), piStack_20 == piStack_5c)) {
                if (iStack_18 != 0) goto LAB_005c38fb;
                break;
              }
              iVar14 = iVar14 + 1;
              iStack_18 = 0;
            } while (iVar14 < *piVar12);
          }
        }
        iVar14 = (int)piStack_5c - (int)piStack_20;
        do {
          iVar6 = FUN_005f2940(0,&iStack_18);
          if (iVar6 < 0) {
            return iVar6;
          }
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
LAB_005c38fb:
        if (iVar6 < 0) {
          return iVar6;
        }
        if (iStack_18 != 0) {
          *(uint *)(iStack_18 + 0x8c) =
               (uStack_58 & 1) << 7 | *(uint *)(iStack_18 + 0x8c) & 0xffffff7f;
          return iVar6;
        }
        return iVar6;
      }
      piVar12 = (int *)0xffffffff;
      iVar13 = 0;
      puStack_74 = (undefined1 *)**(int **)(iStack_1c + 0x130);
      if (0 < (int)puStack_74) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(iStack_1c + 0x130) + 8) + iVar13 * 4);
          if ((*(int *)(iVar2 + 4) == 0) &&
             (piVar12 = (int *)((int)piVar12 + 1), piVar12 == piStack_5c)) {
            iVar14 = 1;
            if (piStack_14 != (int *)0x0) {
              uVar3 = *(uint *)(iVar2 + 0x8c);
              uVar7 = (uStack_54 & 1) << 4;
              *(uint *)(iVar2 + 0x8c) = uVar7 | uVar3 & 0xffffffef;
              if (((((uVar3 & 4) == 0) && ((uVar3 & 0x40) != 0)) && ((uStack_54 & 1) != 0)) &&
                 ((uVar3 & 2) == 0)) {
                *(uint *)(iVar2 + 0x8c) = uVar7 | uVar3 & 0xffffffec;
              }
            }
            piStack_20 = (int *)(*(uint *)(*(int *)(iVar2 + 8) + 0x134) >> 5 & 1);
            if ((piStack_20 == (int *)0x0) &&
               (piStack_20 = (int *)(*(uint *)(iVar2 + 0x8c) & 1), piStack_20 == (int *)0x0)) {
              iVar4 = *(int *)(iVar2 + 0x24);
              piVar1 = (int *)(iVar2 + 0x20);
              iVar5 = *piVar1;
              iVar6 = (**(code **)(**(int **)(iVar2 + 0x88) + 0x1c))(*(int **)(iVar2 + 0x88),piVar1)
              ;
              if (iVar6 < 0) {
                iVar6 = 0;
              }
              else if ((*piVar1 != iVar5) || (*(int *)(iVar2 + 0x24) != iVar4)) {
                *(uint *)(iStack_1c + 0x134) = *(uint *)(iStack_1c + 0x134) | 0x90;
                *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x800;
              }
              if (*(int *)(iVar2 + 4) == 3) {
                piStack_20 = (int *)0x0;
                iVar6 = (**(code **)**(undefined4 **)(iVar2 + 0x88))
                                  (*(undefined4 **)(iVar2 + 0x88),&DAT_0060ef78,&piStack_20);
                if (-1 < iVar6) {
                  iVar6 = (**(code **)(*piStack_20 + 0x34))(piStack_20,iVar2 + 0x80);
                  (**(code **)(*piStack_28 + 8))(piStack_28);
                }
              }
            }
            if ((iStack_18 != 0) || (uStack_58 == 0)) {
              *(uint *)(iVar2 + 0x8c) = (uStack_58 & 1) << 7 | *(uint *)(iVar2 + 0x8c) & 0xffffff7f;
              return iVar6;
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)puStack_74);
        if (iVar14 != 0) {
          return iVar6;
        }
      }
      uVar8 = FUN_005f2d10();
      goto LAB_005c3bd5;
    }
  }
  else {
    if (aiStack_10[0] != 4) {
      puStack_74 = (undefined1 *)0x0;
    }
    iVar6 = (**(code **)(*param_1 + 0x14))(param_1,unaff_EBX,0,0,0);
    if (-1 < iVar6) goto LAB_005c35f8;
  }
  aiStack_10[0] = 0;
  iVar6 = (**(code **)(*param_1 + 0x14))(param_1,0,0,1,&stack0xffffff9c);
  if ((-1 < iVar6) &&
     (iVar6 = (**(code **)(*param_1 + 0xc))(param_1,&iStack_24,4,&iStack_18), -1 < iVar6)) {
    if (iStack_18 != 4) {
      iStack_24 = 0;
    }
    iVar6 = (**(code **)(*param_1 + 0x14))(param_1,iStack_78,puStack_74,0,0);
    if (iVar6 < 0) {
      return -0x7ffb1f7d;
    }
  }
  if (iStack_24 != 0x38) {
    return -0x7ffb1f7d;
  }
  puVar11 = (undefined4 *)&stack0xffffff98;
  for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  iVar6 = (**(code **)(*param_1 + 0xc))(param_1,&stack0xffffff98,0x38,&iStack_78);
  if (iVar6 < 0) {
    return iVar6;
  }
  if (puStack_74 != (undefined1 *)0x38) {
    return -0x7ffb1ff8;
  }
  iVar14 = 0;
  if ((*(byte *)(iStack_1c + 0x134) & 0x20) != 0) {
    piVar12 = *(int **)(iStack_1c + 0x130);
    iStack_18 = 0;
    piStack_20 = (int *)0xffffffff;
    if (piVar12 != (int *)0x0) {
      iVar14 = 0;
      if (0 < *piVar12) {
        do {
          iStack_18 = *(int *)(piVar12[2] + iVar14 * 4);
          if ((*(int *)(iStack_18 + 4) == 0) &&
             (piStack_20 = (int *)((int)piStack_20 + 1), piStack_20 == piStack_5c)) {
            if (iStack_18 != 0) goto LAB_005c3cf0;
            break;
          }
          iVar14 = iVar14 + 1;
          iStack_18 = 0;
        } while (iVar14 < *piVar12);
      }
    }
    iVar14 = (int)piStack_5c - (int)piStack_20;
    do {
      iVar6 = FUN_005f2940(0,&iStack_18);
      if (iVar6 < 0) {
        return iVar6;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
LAB_005c3cf0:
    if (iVar6 < 0) {
      return iVar6;
    }
    if (iStack_18 != 0) {
      *(uint *)(iStack_18 + 0x8c) = (uStack_58 & 1) << 7 | *(uint *)(iStack_18 + 0x8c) & 0xffffff7f;
      return iVar6;
    }
    return iVar6;
  }
  piStack_14 = (int *)0xffffffff;
  iStack_78 = **(int **)(iStack_1c + 0x130);
  iVar13 = 0;
  if (0 < iStack_78) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(iStack_1c + 0x130) + 8) + iVar13 * 4);
      if ((*(int *)(iVar2 + 4) == 0) &&
         (piStack_14 = (int *)((int)piStack_14 + 1), piStack_14 == piStack_5c)) {
        iVar14 = 1;
        piStack_20 = (int *)(*(uint *)(*(int *)(iVar2 + 8) + 0x134) >> 5 & 1);
        if ((piStack_20 == (int *)0x0) &&
           (piStack_20 = (int *)(*(uint *)(iVar2 + 0x8c) & 1), piStack_20 == (int *)0x0)) {
          iVar4 = *(int *)(iVar2 + 0x24);
          iVar5 = *(int *)(iVar2 + 0x20);
          iVar6 = (**(code **)(**(int **)(iVar2 + 0x88) + 0x1c))
                            (*(int **)(iVar2 + 0x88),(int *)(iVar2 + 0x20));
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if ((*(int *)(iVar2 + 0x20) != iVar5) || (*(int *)(iVar2 + 0x24) != iVar4)) {
            *(uint *)(iStack_1c + 0x134) = *(uint *)(iStack_1c + 0x134) | 0x90;
            *(uint *)*DAT_0064b138 = *(uint *)*DAT_0064b138 | 0x800;
          }
          if (*(int *)(iVar2 + 4) == 3) {
            piStack_20 = (int *)0x0;
            iVar6 = (**(code **)**(undefined4 **)(iVar2 + 0x88))
                              (*(undefined4 **)(iVar2 + 0x88),&DAT_0060ef78,&piStack_20);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*piStack_20 + 0x34))(piStack_20,iVar2 + 0x80);
              (**(code **)(*piStack_28 + 8))(piStack_28);
            }
          }
        }
        if ((iStack_18 != 0) || (uStack_58 == 0)) {
          *(uint *)(iVar2 + 0x8c) = (uStack_58 & 1) << 7 | *(uint *)(iVar2 + 0x8c) & 0xffffff7f;
          return iVar6;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iStack_78);
    if (iVar14 != 0) {
      return iVar6;
    }
  }
  uVar8 = FUN_005f2d10();
LAB_005c3bd5:
  uVar9 = _SfGetString_8(DAT_00647204,0x5118);
  SfErrorHandler_DetailsAddString(0x4e007,uVar9,uVar8);
  return 0x4e007;
}


