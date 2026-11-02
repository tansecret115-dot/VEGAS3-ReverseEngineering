/* Module: sfs4rw.dll
   Function: FUN_00488b30
   Address: 00488b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00488b30(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int iStack_a2c;
  int iStack_a18;
  char local_a0c [12];
  int aiStack_a00 [640];
  
  if (*(int *)((int)param_1 + 0xdd) < 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x11;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  piVar7 = *(int **)((int)param_1 + 0xe1);
  if ((piVar7[5] == 0) && (piVar7[6] == 0x3f)) {
    uVar5 = *(uint *)((int)param_1 + 0x71);
    *(undefined1 *)(param_1 + 0x41) = 0;
    if (0 < (int)uVar5) {
      pcVar10 = local_a0c;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = '\0';
        pcVar10 = pcVar10 + 1;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x41) = 1;
    if (0 < (int)*(uint *)((int)param_1 + 0x71)) {
      piVar8 = aiStack_a00;
      for (iVar6 = (*(uint *)((int)param_1 + 0x71) & 0xffffff) << 6; iVar6 != 0; iVar6 = iVar6 + -1)
      {
        *piVar8 = -1;
        piVar8 = piVar8 + 1;
      }
    }
  }
  iStack_a2c = 1;
  if (0 < *(int *)((int)param_1 + 0xdd)) {
    do {
      iStack_a18 = *piVar7;
      if ((iStack_a18 < 1) || (4 < iStack_a18)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x18;
        *(int *)(*param_1 + 0x18) = iStack_a18;
        *(undefined4 *)(*param_1 + 0x1c) = 4;
        (**(code **)*param_1)(param_1);
      }
      iVar6 = 0;
      piVar8 = piVar7;
      if (0 < iStack_a18) {
        do {
          iVar1 = piVar8[1];
          if ((iVar1 < 0) || (*(int *)((int)param_1 + 0x71) <= iVar1)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x11;
            *(int *)(*param_1 + 0x18) = iStack_a2c;
            (**(code **)*param_1)(param_1);
          }
          if ((0 < iVar6) && (iVar1 <= *piVar8)) {
            *(undefined4 *)(*param_1 + 0x14) = 0x11;
            *(int *)(*param_1 + 0x18) = iStack_a2c;
            (**(code **)*param_1)(param_1);
          }
          iVar6 = iVar6 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar6 < iStack_a18);
      }
      iVar6 = piVar7[5];
      iVar1 = piVar7[6];
      iVar2 = piVar7[7];
      iVar3 = piVar7[8];
      if ((char)param_1[0x41] == '\0') {
        if ((((iVar6 != 0) || (iVar1 != 0x3f)) || (iVar2 != 0)) || (iVar3 != 0)) {
          *(undefined4 *)(*param_1 + 0x14) = 0xf;
          *(int *)(*param_1 + 0x18) = iStack_a2c;
          (**(code **)*param_1)(param_1);
        }
        piVar8 = piVar7;
        if (0 < iStack_a18) {
          do {
            iVar6 = piVar8[1];
            if (local_a0c[iVar6] != '\0') {
              *(undefined4 *)(*param_1 + 0x14) = 0x11;
              *(int *)(*param_1 + 0x18) = iStack_a2c;
              (**(code **)*param_1)(param_1);
            }
            iStack_a18 = iStack_a18 + -1;
            local_a0c[iVar6] = '\x01';
            piVar8 = piVar8 + 1;
          } while (iStack_a18 != 0);
        }
      }
      else {
        if (((((iVar6 < 0) || (0x3f < iVar6)) ||
             ((iVar1 < iVar6 || ((0x3f < iVar1 || (iVar2 < 0)))))) || (0xd < iVar2)) ||
           ((iVar3 < 0 || (0xd < iVar3)))) {
          *(undefined4 *)(*param_1 + 0x14) = 0xf;
          *(int *)(*param_1 + 0x18) = iStack_a2c;
          (**(code **)*param_1)(param_1);
        }
        if (iVar6 == 0) {
          if (iVar1 != 0) {
            *(undefined4 *)(*param_1 + 0x14) = 0xf;
            *(int *)(*param_1 + 0x18) = iStack_a2c;
            (**(code **)*param_1)(param_1);
          }
        }
        else if (iStack_a18 != 1) {
          *(undefined4 *)(*param_1 + 0x14) = 0xf;
          *(int *)(*param_1 + 0x18) = iStack_a2c;
          (**(code **)*param_1)(param_1);
        }
        piVar8 = piVar7;
        if (0 < iStack_a18) {
          do {
            iVar9 = piVar8[1];
            if ((iVar6 != 0) && (aiStack_a00[iVar9 * 0x40] < 0)) {
              *(undefined4 *)(*param_1 + 0x14) = 0xf;
              *(int *)(*param_1 + 0x18) = iStack_a2c;
              (**(code **)*param_1)(param_1);
            }
            if (iVar6 <= iVar1) {
              piVar11 = aiStack_a00 + iVar9 * 0x40 + iVar6;
              iVar9 = (iVar1 - iVar6) + 1;
              do {
                if (*piVar11 < 0) {
                  if (iVar2 != 0) {
LAB_00488d81:
                    *(undefined4 *)(*param_1 + 0x14) = 0xf;
                    *(int *)(*param_1 + 0x18) = iStack_a2c;
                    (**(code **)*param_1)(param_1);
                  }
                }
                else if ((iVar2 != *piVar11) || (iVar3 != iVar2 + -1)) goto LAB_00488d81;
                *piVar11 = iVar3;
                piVar11 = piVar11 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            iStack_a18 = iStack_a18 + -1;
            piVar8 = piVar8 + 1;
          } while (iStack_a18 != 0);
        }
      }
      piVar7 = piVar7 + 9;
      iStack_a2c = iStack_a2c + 1;
    } while (iStack_a2c <= *(int *)((int)param_1 + 0xdd));
  }
  if ((char)param_1[0x41] == '\0') {
    iVar6 = 0;
    if (0 < *(int *)((int)param_1 + 0x71)) {
      do {
        if (local_a0c[iVar6] == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x2c;
          (**(code **)*param_1)(param_1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)((int)param_1 + 0x71));
    }
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)((int)param_1 + 0x71)) {
      piVar7 = aiStack_a00;
      do {
        if (*piVar7 < 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2c;
          (**(code **)*param_1)(param_1);
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 0x40;
      } while (iVar6 < *(int *)((int)param_1 + 0x71));
      return;
    }
  }
  return;
}


