/* Module: vegas30.exe
   Function: FUN_005d2ae0
   Address: 005d2ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d2ae0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  uVar2 = Mixer_NumBusTypePorts(0x100);
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = DAT_00649410;
    if (uVar2 - 1 < DAT_00649410) {
      uVar5 = uVar2 - 1;
    }
  }
  piVar3 = (int *)FUN_005b87b0(param_1);
  iVar1 = *piVar3;
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      if (piVar3 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar3;
      }
      if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(piVar3[2] + iVar6 * 4);
      }
      if ((*(int *)(iVar4 + 4) == 2) && (uVar2 <= *(uint *)(iVar4 + 0x3c))) {
        *(uint *)(iVar4 + 0x3c) = uVar5;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  if (*(int *)(param_2 + 0x52c) != 0) {
    piVar3 = (int *)FUN_005b87b0(param_1);
    iVar1 = *piVar3;
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        if (piVar3 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar3;
        }
        if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(piVar3[2] + iVar6 * 4);
        }
        if (*(int *)(iVar4 + 4) == 2) {
          uVar2 = *(int *)(iVar4 + 0x44) + *(int *)(param_2 + 0x52c);
          *(uint *)(iVar4 + 0x44) = uVar2;
          if ((int)uVar2 < 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(uint *)(param_2 + 0x114);
            if (uVar2 <= *(uint *)(param_2 + 0x114)) {
              uVar5 = uVar2;
            }
          }
          *(uint *)(iVar4 + 0x44) = uVar5;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    *(undefined4 *)(param_2 + 0x52c) = 0;
    return 0;
  }
  if (*(uint *)(param_2 + 0x114) < *(uint *)(param_1 + 0x7d4)) {
    piVar3 = (int *)FUN_005b87b0(param_1);
    iVar6 = 0;
    iVar1 = *piVar3;
    if (0 < iVar1) {
      do {
        if (piVar3 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar3;
        }
        if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(piVar3[2] + iVar6 * 4);
        }
        if (*(int *)(iVar4 + 4) == 2) {
          uVar2 = *(uint *)(param_2 + 0x530);
          uVar5 = *(uint *)(iVar4 + 0x44);
          if (uVar2 == 0) {
            if (*(uint *)(param_2 + 0x114) <= uVar5) goto LAB_005d2bda;
          }
          else if (uVar5 == uVar2) {
LAB_005d2bda:
            *(undefined4 *)(iVar4 + 0x44) = 0;
          }
          else if (uVar2 < uVar5) {
            *(uint *)(iVar4 + 0x44) = uVar5 - 1;
          }
          uVar2 = *(uint *)(param_2 + 0x530);
          if (uVar2 < *(uint *)(param_1 + 0x7d4)) {
            puVar8 = (uint *)(iVar4 + 0x154 + uVar2 * 8);
            do {
              puVar7 = puVar8 + 2;
              uVar5 = (*puVar8 ^ *puVar7) & 1 ^ *puVar8;
              *puVar8 = uVar5;
              uVar2 = uVar2 + 1;
              *puVar8 = (uVar5 ^ *puVar7) & 4 ^ uVar5;
              puVar8[1] = puVar8[3];
              puVar8 = puVar7;
            } while (uVar2 < *(uint *)(param_1 + 0x7d4));
          }
          *(uint *)(iVar4 + 0x154 + *(int *)(param_2 + 0x114) * 8) =
               *(uint *)(iVar4 + 0x154 + *(int *)(param_2 + 0x114) * 8) & 0xfffffffe;
          *(uint *)(iVar4 + 0x154 + *(int *)(param_2 + 0x114) * 8) =
               *(uint *)(iVar4 + 0x154 + *(int *)(param_2 + 0x114) * 8) | 4;
          *(undefined4 *)(iVar4 + 0x158 + *(int *)(param_2 + 0x114) * 8) = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    *(undefined4 *)(param_2 + 0x530) = 0;
  }
  else if (*(uint *)(param_2 + 0x118) < *(uint *)(param_1 + 0x7d8)) {
    piVar3 = (int *)FUN_005b87b0(param_1);
    iVar6 = 0;
    iVar1 = *piVar3;
    if (0 < iVar1) {
      do {
        if (piVar3 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar3;
        }
        if ((iVar6 < 0) || (iVar4 + -1 < iVar6)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(piVar3[2] + iVar6 * 4);
        }
        if (*(int *)(iVar4 + 4) == 2) {
          uVar2 = *(uint *)(param_2 + 0x530);
          if (uVar2 < *(uint *)(param_1 + 0x7d8)) {
            puVar8 = (uint *)(iVar4 + 0x5c + uVar2 * 8);
            do {
              puVar7 = puVar8 + 2;
              uVar5 = (*puVar8 ^ *puVar7) & 2 ^ *puVar8;
              *puVar8 = uVar5;
              uVar2 = uVar2 + 1;
              *puVar8 = (uVar5 ^ *puVar7) & 4 ^ uVar5;
              puVar8[1] = puVar8[3];
              puVar8 = puVar7;
            } while (uVar2 < *(uint *)(param_1 + 0x7d8));
          }
          *(uint *)(iVar4 + 0x5c + *(int *)(param_2 + 0x118) * 8) =
               *(uint *)(iVar4 + 0x5c + *(int *)(param_2 + 0x118) * 8) & 0xfffffffd;
          *(uint *)(iVar4 + 0x5c + *(int *)(param_2 + 0x118) * 8) =
               *(uint *)(iVar4 + 0x5c + *(int *)(param_2 + 0x118) * 8) | 4;
          *(undefined4 *)(iVar4 + 0x60 + *(int *)(param_2 + 0x118) * 8) = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
      return 1;
    }
  }
  return 1;
}


