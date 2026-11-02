/* Module: mpegin.dll
   Function: FUN_10008df0
   Address: 10008df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10008df0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0xce8) = 0;
  }
  else if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0xce8) = 0;
    if (((((*(int *)(param_1 + 0x184) != 0) && (*(int *)(param_1 + 0x2c) == 0x160)) &&
         (_DAT_10016138 <= *(double *)(param_1 + 0x38))) &&
        (*(double *)(param_1 + 0x38) <= _DAT_10016130)) &&
       (((*(int *)(param_1 + 0x30) == 0xf0 && (*(int *)(param_1 + 0x178) == 4)) ||
        ((*(int *)(param_1 + 0x30) == 0x120 && (*(int *)(param_1 + 0x178) == 3)))))) {
      *(undefined4 *)(param_1 + 0xce8) = 1;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0xce8) = 2;
    if ((iVar2 == 0x1e0) &&
       (((*(int *)(param_1 + 0x30) == 0x1e0 && (iVar4 = *(int *)(param_1 + 0x178), iVar4 == 4)) ||
        ((*(int *)(param_1 + 0x30) == 0x240 && (iVar4 = *(int *)(param_1 + 0x178), iVar4 == 3))))))
    {
      if ((((((*(int *)(param_1 + 0x168) < 4) && (*(int *)(param_1 + 0x158) == 4)) &&
            (*(int *)(param_1 + 0x15c) == 8)) && (*(int *)(param_1 + 0x18c) == 0)) &&
          ((*(int *)(param_1 + 0x174) == 2 || (*(int *)(param_1 + 0x174) == 3)))) &&
         (*(int *)(param_1 + 0x180) < 0x71)) {
        if (iVar4 == 3) {
          if (*(int *)(param_1 + 0x16c) < 0x10) {
            *(undefined4 *)(param_1 + 0xce8) = 3;
          }
        }
        else if (*(int *)(param_1 + 0x16c) < 0x13) {
          *(undefined4 *)(param_1 + 0xce8) = 3;
        }
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x178);
      if ((iVar4 == 4) || (iVar4 == 3)) {
        *(undefined4 *)(param_1 + 0xce8) = 4;
        if (iVar4 == 3) {
          if (((0xf < *(int *)(param_1 + 0x16c)) ||
              (((*(int *)(param_1 + 0x30) != 0x240 && (*(int *)(param_1 + 0x30) != 0x120)) ||
               (*(int *)(param_1 + 0x1ac) != 5)))) || (*(int *)(param_1 + 0x1a8) != 5)) {
LAB_10008f47:
            *(undefined4 *)(param_1 + 0xce8) = 2;
          }
        }
        else if ((0x12 < *(int *)(param_1 + 0x16c)) ||
                ((*(int *)(param_1 + 0x30) != 0x1e0 && (*(int *)(param_1 + 0x30) != 0xf0))))
        goto LAB_10008f47;
        if (*(int *)(param_1 + 0xce8) == 4) {
          if (((((*(int *)(param_1 + 0x158) != 4) && (*(int *)(param_1 + 0x158) != 5)) ||
               ((*(int *)(param_1 + 0x15c) != 8 ||
                ((iVar4 = *(int *)(param_1 + 0x30), iVar4 == 0xf0 &&
                 (*(int *)(param_1 + 0x18c) == 0)))))) ||
              ((iVar1 = *(int *)(param_1 + 0x174), iVar1 != 2 && (iVar1 != 3)))) ||
             (((iVar1 == 3 && (iVar2 == 0x160)) || (_DAT_10016140 < *(double *)(param_1 + 0x38)))))
          {
            *(undefined4 *)(param_1 + 0xce8) = 2;
          }
          else {
            if (iVar2 == 0x160) {
              if (0x120 < iVar4) goto LAB_10008ff0;
            }
            else if (((iVar2 != 0x2c0) && (iVar2 != 0x2d0)) || (iVar4 < 0x1e0)) {
LAB_10008ff0:
              *(undefined4 *)(param_1 + 0xce8) = 2;
            }
            if (*(int *)(param_1 + 0xce8) == 4) {
              piVar3 = (int *)(param_1 + 0x228);
              iVar4 = 3;
              do {
                if ((((iVar2 == 0x2d0) && ((*piVar3 < -0x5a0 || (0x5a0 < *piVar3)))) ||
                    ((iVar2 == 0x2c0 && ((*piVar3 < -0x520 || (0x520 < *piVar3)))))) ||
                   (piVar3[3] != 0)) {
                  *(undefined4 *)(param_1 + 0xce8) = 2;
                }
                piVar3 = piVar3 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xce8);
  if (iVar2 == 1) {
    if ((((*(int *)(param_1 + 0x98) != 2) ||
         ((*(int *)(param_1 + 0x9c) != 0 && (*(int *)(param_1 + 0x9c) != 3)))) ||
        (*(int *)(param_1 + 0xcc4) != 0xb)) || (*(int *)(param_1 + 0x8c) != 0xac44)) {
      *(undefined4 *)(param_1 + 0xce8) = 0;
    }
    goto LAB_100091e7;
  }
  if (iVar2 == 3) {
    if ((((*(int *)(param_1 + 0x98) == 2) && (*(int *)(param_1 + 0xcc0) == 0)) &&
        (*(int *)(param_1 + 0xce0) == 0)) && (*(int *)(param_1 + 0x8c) == 0xac44)) {
      iVar2 = *(int *)(param_1 + 0xcc4);
      if (*(int *)(param_1 + 0x9c) != 3) {
        if (iVar2 < 4) {
          *(undefined4 *)(param_1 + 0xce8) = 2;
        }
        goto LAB_100091e7;
      }
      bVar5 = SBORROW4(iVar2,1);
      iVar4 = iVar2 + -1;
LAB_100091a7:
      if ((bVar5 == iVar4 < 0) && (iVar2 < 0xb)) goto LAB_100091e7;
    }
  }
  else {
    if (iVar2 != 4) goto LAB_100091e7;
    if ((((*(int *)(param_1 + 0x98) == 2) && (*(int *)(param_1 + 0xcc0) == 0)) &&
        ((*(int *)(param_1 + 0xce0) == 0 &&
         ((*(int *)(param_1 + 0xcd0) == 0 && (*(int *)(param_1 + 0x8c) == 48000)))))) &&
       (*(int *)(param_1 + 0x9c) != 2)) {
      iVar2 = *(int *)(param_1 + 0xcc4);
      if (*(int *)(param_1 + 0x9c) != 3) {
        if (iVar2 < 4) {
          *(undefined4 *)(param_1 + 0xce8) = 2;
        }
        goto LAB_100091e7;
      }
      bVar5 = SBORROW4(iVar2,4);
      iVar4 = iVar2 + -4;
      goto LAB_100091a7;
    }
  }
  *(undefined4 *)(param_1 + 0xce8) = 2;
LAB_100091e7:
  iVar2 = *(int *)(param_1 + 0xce8);
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x20) != 1) {
      *(undefined4 *)(param_1 + 0xce8) = 2;
    }
  }
  else if (((iVar2 == 3) || (iVar2 == 4)) && (*(int *)(param_1 + 0x20) != 2)) {
    *(undefined4 *)(param_1 + 0xce8) = 0;
    return;
  }
  return;
}


