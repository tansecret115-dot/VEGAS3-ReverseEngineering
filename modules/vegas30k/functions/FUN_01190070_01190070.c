/* Module: vegas30k.dll
   Function: FUN_01190070
   Address: 01190070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01190454) */

int __fastcall FUN_01190070(int param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  if ((*(uint *)(param_1 + 0xc) & 0x40000) != 0) {
    iVar3 = FUN_0118fee0();
    return iVar3;
  }
  if (*(int *)(param_1 + 0x58) != 8) {
    return 1;
  }
  if ((((*(uint *)(param_1 + 0xc) & 0x40) != 0) &&
      (*(int *)(param_1 + 0xfc) <= *(int *)(param_1 + 0xa4))) &&
     ((*(int *)(param_1 + 0xfc) < *(int *)(param_1 + 0xa4) ||
      (*(uint *)(param_1 + 0xf8) < *(uint *)(param_1 + 0xa0))))) {
    FUN_01191cd0();
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbf;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar4 = uVar6 & 0x20;
  if ((uVar4 == 0) && ((uVar6 & 0xc0) == 0)) {
    uVar6 = *(uint *)(param_1 + 0xa0);
    iVar3 = *(int *)(param_1 + 0x1184);
    iVar10 = *(int *)(param_1 + 0xa4);
    lVar2 = *(longlong *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xf8) = uVar6;
    *(uint *)(param_1 + 0xe8) = uVar6;
    *(int *)(param_1 + 0xfc) = iVar10;
    *(int *)(param_1 + 0xec) = iVar10;
    if (iVar3 == 0) {
      uVar12 = 0;
    }
    else {
      ftol();
      uVar12 = ftol();
    }
    iVar8 = (int)((ulonglong)uVar12 >> 0x20);
    uVar4 = (uint)CARRY4((uint)uVar12,uVar6);
    iVar7 = iVar8 + iVar10;
    iVar9 = iVar7 + uVar4;
    if ((iVar9 < 0) ||
       ((iVar9 == 0 || SCARRY4(iVar8,iVar10) != SCARRY4(iVar7,uVar4) && ((uint)uVar12 + uVar6 == 0))
       )) {
      if (iVar3 == 0) {
        lVar11 = 0;
      }
      else {
        ftol();
        lVar11 = ftol();
      }
      if (lVar11 + lVar2 != 0) {
        *(uint *)(param_1 + 0xa8) = -uVar6;
        *(uint *)(param_1 + 0xac) = -(iVar10 + (uint)(uVar6 != 0));
        if (iVar3 == 0) {
          uVar12 = 0;
        }
        else {
          ftol();
          uVar12 = ftol();
        }
        *(int *)(param_1 + 0xa8) = (int)uVar12;
        *(undefined4 *)(param_1 + 0xf8) = 0;
        *(int *)(param_1 + 0xac) = (int)((ulonglong)uVar12 >> 0x20);
        *(undefined4 *)(param_1 + 0xfc) = 0;
        goto LAB_011903dc;
      }
      if (iVar3 == 0) {
        lVar11 = 0;
      }
      else {
        ftol();
        lVar11 = ftol();
      }
      *(longlong *)(param_1 + 0xf8) = lVar11 + lVar2;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
        goto LAB_011903dc;
      }
      ftol();
    }
    else {
      if (iVar3 == 0) {
        lVar11 = 0;
      }
      else {
        ftol();
        lVar11 = ftol();
      }
      *(longlong *)(param_1 + 0xf8) = lVar11 + lVar2;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
        goto LAB_011903dc;
      }
      ftol();
    }
    uVar12 = ftol();
    *(undefined8 *)(param_1 + 0xa8) = uVar12;
LAB_011903dc:
    iVar10 = *(int *)(param_1 + 0xf0);
    if (iVar10 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      if ((-1 < *(int *)(param_1 + 0xac)) &&
         ((0 < *(int *)(param_1 + 0xac) || (*(int *)(param_1 + 0xa8) != 0)))) {
        lVar11 = __allmul(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),iVar10,
                          iVar10 >> 0x1f);
        lVar11 = lVar11 + lVar2;
        iVar10 = (int)((ulonglong)lVar11 >> 0x20);
        *(longlong *)(param_1 + 0xa8) = lVar11;
        uVar5 = *(undefined4 *)(param_1 + 0xa8);
        if ((iVar10 < 1) && (lVar11 < 0)) {
          uVar5 = 0;
          iVar10 = 0;
        }
        *(undefined4 *)(param_1 + 0xa8) = uVar5;
        *(int *)(param_1 + 0xac) = iVar10;
        if (*(int *)(param_1 + 0xa8) != 0 || *(int *)(param_1 + 0xac) != 0) {
          if (iVar3 == 0) {
            uVar12 = 0;
          }
          else {
            ftol();
            uVar12 = ftol();
          }
          *(undefined8 *)(param_1 + 0xa8) = uVar12;
        }
      }
    }
    iVar3 = FUN_01191c80(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    if (iVar3 < 0) {
      return iVar3;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20;
    return 0;
  }
  if (uVar4 == 0) {
LAB_011905c0:
    if ((uVar6 & 0x40) != 0) {
      if ((uVar6 & 0x80) == 0) {
        iVar3 = FUN_01191c60(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
        if (iVar3 < 0) {
          return iVar3;
        }
        piVar1 = *(int **)(param_1 + 0x40);
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbf | 0x80;
        if (piVar1 == (int *)0x0) {
          return iVar3;
        }
        uVar6 = *(uint *)(param_1 + 0xe8) + *(uint *)(param_1 + 0xa8);
        iVar7 = uVar6 - *(uint *)(param_1 + 0xa0);
        iVar10 = ((*(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xac) +
                  (uint)CARRY4(*(uint *)(param_1 + 0xe8),*(uint *)(param_1 + 0xa8))) -
                 *(int *)(param_1 + 0xa4)) - (uint)(uVar6 < *(uint *)(param_1 + 0xa0));
        if ((iVar10 < 1) && (iVar10 < 0)) {
          iVar7 = 0;
          iVar10 = 0;
        }
        (**(code **)(*piVar1 + 0xdc))(piVar1,iVar7,iVar10);
        return iVar3;
      }
      goto LAB_0119065a;
    }
  }
  else {
    if ((uVar6 & 0xc0) == 0) {
      *(uint *)(param_1 + 0xc) = uVar6 & 0xffffffdf;
      uVar6 = *(uint *)(param_1 + 0xe8) + *(uint *)(param_1 + 0xa8);
      iVar10 = uVar6 - *(uint *)(param_1 + 0xa0);
      iVar3 = ((*(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xac) +
               (uint)CARRY4(*(uint *)(param_1 + 0xe8),*(uint *)(param_1 + 0xa8))) -
              *(int *)(param_1 + 0xa4)) - (uint)(uVar6 < *(uint *)(param_1 + 0xa0));
      if ((iVar3 < 1) && (iVar3 < 0)) {
        iVar10 = 0;
        iVar3 = 0;
      }
      iVar3 = FUN_01191ca0(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),iVar10,
                           iVar3);
      if (iVar3 < 0) {
        FUN_01191cd0();
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffbf | 0x300;
        SetEvent(*(HANDLE *)(param_1 + 0x24));
        return iVar3;
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40;
      return iVar3;
    }
    if (uVar4 == 0) goto LAB_011905c0;
  }
  if ((uVar6 & 0x80) == 0) {
    return 1;
  }
LAB_0119065a:
  iVar3 = *(int *)(param_1 + 0xa4);
  uVar6 = *(uint *)(param_1 + 0xa0);
  if ((iVar3 <= *(int *)(param_1 + 0xfc)) &&
     (((iVar3 < *(int *)(param_1 + 0xfc) || (uVar6 < *(uint *)(param_1 + 0xf8))) &&
      (piVar1 = *(int **)(param_1 + 0x40), piVar1 != (int *)0x0)))) {
    uVar4 = *(uint *)(param_1 + 0xe8) + *(uint *)(param_1 + 0xa8);
    iVar10 = uVar4 - uVar6;
    iVar3 = ((*(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xac) +
             (uint)CARRY4(*(uint *)(param_1 + 0xe8),*(uint *)(param_1 + 0xa8))) - iVar3) -
            (uint)(uVar4 < uVar6);
    if ((iVar3 < 1) && (iVar3 < 0)) {
      iVar10 = 0;
      iVar3 = 0;
    }
    (**(code **)(*piVar1 + 0xdc))(piVar1,iVar10,iVar3);
  }
  return 1;
}


