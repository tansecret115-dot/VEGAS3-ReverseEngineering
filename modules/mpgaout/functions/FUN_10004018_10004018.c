/* Module: mpgaout.dll
   Function: FUN_10004018
   Address: 10004018
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10004018(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_50;
  int local_44;
  int local_1c [7];
  
  iVar3 = *(int *)(param_3 + 0x10);
  iVar4 = *(int *)(param_3 + 0x18);
  iVar10 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = iVar10 + 1;
      iVar9 = 0;
      if (0 < iVar4) {
        iVar11 = param_1 + 0x80;
        iVar7 = param_1 + 0x100;
        iVar14 = iVar10 * 0x180;
        iVar10 = iVar10 * 0x80;
        do {
          iVar2 = iVar9 * 4;
          iVar9 = iVar9 + 1;
          local_1c[3] = *(int *)(iVar11 + iVar2 + iVar14) - *(int *)(iVar7 + iVar2 + iVar14);
          local_44 = 0;
          local_50 = 1;
          piVar8 = local_1c;
          do {
            iVar12 = *(int *)((int)local_1c + local_44 + 8);
            if (iVar12 < -2) {
              *piVar8 = 0;
            }
            else if (iVar12 < 0) {
              *piVar8 = 1;
            }
            else if (iVar12 == 0) {
              *piVar8 = 2;
            }
            else if (iVar12 - 1U < 2) {
              *piVar8 = 3;
            }
            else {
              *piVar8 = 4;
            }
            piVar8 = piVar8 + 1;
            local_44 = local_44 + 4;
            local_50 = local_50 + -1;
          } while (-1 < local_50);
          iVar12 = *(int *)(&DAT_1001e320 + local_1c[1] * 4 + local_1c[0] * 0x14);
          if (iVar12 == 0x123) {
            *(undefined4 *)(param_2 + iVar10 + iVar2) = 0;
            goto LAB_100042cf;
          }
          iVar6 = iVar11;
          if (iVar12 < 0x124) {
            if (iVar12 == 0x113) {
              *(undefined4 *)(param_2 + iVar10 + iVar2) = 1;
              iVar12 = param_1;
LAB_1000420e:
              *(undefined4 *)(iVar6 + iVar14 + iVar2) = *(undefined4 *)(iVar12 + iVar14 + iVar2);
            }
            else if (iVar12 < 0x114) {
              if (iVar12 == 0x111) {
                *(undefined4 *)(param_2 + iVar10 + iVar2) = 2;
                iVar2 = iVar14 + iVar2;
                *(undefined4 *)(iVar7 + iVar2) = *(undefined4 *)(param_1 + iVar2);
                *(undefined4 *)(iVar11 + iVar2) = *(undefined4 *)(param_1 + iVar2);
              }
            }
            else if (iVar12 == 0x122) {
              *(undefined4 *)(param_2 + iVar10 + iVar2) = 3;
              iVar6 = iVar7;
              iVar12 = iVar11;
              goto LAB_1000420e;
            }
          }
          else {
            iVar13 = param_1;
            if (iVar12 == 0x222) {
              *(undefined4 *)(param_2 + iVar10 + iVar2) = 2;
              uVar5 = *(uint *)(iVar11 + iVar14 + iVar2);
              *(uint *)(iVar7 + iVar14 + iVar2) = uVar5;
            }
            else {
              if (iVar12 < 0x223) {
                if (iVar12 == 0x133) {
                  *(undefined4 *)(param_2 + iVar10 + iVar2) = 3;
                  iVar12 = iVar7;
                  goto LAB_1000420e;
                }
                goto LAB_100042cf;
              }
              if (iVar12 == 0x333) {
                *(undefined4 *)(param_2 + iVar10 + iVar2) = 2;
                uVar5 = *(uint *)(iVar7 + iVar14 + iVar2);
                *(uint *)(iVar11 + iVar14 + iVar2) = uVar5;
              }
              else {
                if (iVar12 != 0x444) goto LAB_100042cf;
                *(undefined4 *)(param_2 + iVar10 + iVar2) = 2;
                iVar12 = iVar14 + iVar2;
                uVar5 = *(uint *)(iVar7 + iVar12);
                if (uVar5 < *(uint *)(param_1 + iVar12)) {
                  *(uint *)(param_1 + iVar12) = uVar5;
                }
                uVar5 = *(uint *)(param_1 + iVar12);
                *(uint *)(iVar7 + iVar12) = uVar5;
                iVar13 = iVar11;
              }
            }
            *(uint *)(iVar13 + iVar14 + iVar2) = uVar5;
          }
LAB_100042cf:
        } while (iVar9 < iVar4);
      }
      iVar10 = iVar1;
    } while (iVar1 < iVar3);
  }
  return;
}


