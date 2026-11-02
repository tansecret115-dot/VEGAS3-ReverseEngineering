/* Module: mp3plug.dll
   Function: FUN_5f71b7d0
   Address: 5f71b7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f71b7d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  
  if ((*(int *)(param_3 + 0x10) == 0) || (*(int *)(param_3 + 0x14) != 2)) {
    iVar10 = *(int *)(param_3 + 0x54);
    iVar3 = 0;
    if (0 < iVar10) {
      iVar9 = *(int *)(param_5 + 4) * 0x94;
      do {
        iVar11 = *(int *)(param_5 + 0x18) * 0x1bc;
        iVar5 = ((*(int *)(param_3 + 0x3c) * (&DAT_5f766a00)[iVar3] + *(int *)(param_4 + iVar3 * 4))
                 * (*(int *)(param_3 + 0x40) + 1) * 2 + 0xd2) - *(int *)(param_3 + 8);
        iVar4 = *(int *)(&DAT_5f7698b4 + iVar9 + iVar11 + iVar3 * 4);
        iVar11 = *(int *)(&DAT_5f7698b0 + iVar3 * 4 + iVar11 + iVar9);
        iVar3 = iVar3 + 1;
        if ((iVar5 < 0x80) && (-1 < iVar5)) {
          fVar1 = *(float *)(&DAT_5f766800 + iVar5 * 4);
          if (iVar11 < iVar4) {
            do {
              iVar10 = *(int *)(param_1 + iVar11 * 4);
              iVar5 = iVar10;
              if (iVar10 < 0) {
                iVar5 = -iVar10;
              }
              if (iVar5 == 0) {
                *(undefined4 *)(param_2 + iVar11 * 4) = 0;
              }
              else {
                if (iVar5 < 0x80) {
                  fVar2 = *(float *)(&DAT_5f766600 + iVar5 * 4);
                }
                else {
                  dVar13 = pow((double)iVar5,_DAT_5f766a90);
                  fVar2 = (float)dVar13;
                }
                if (iVar10 < 1) {
                  *(float *)(param_2 + iVar11 * 4) = -fVar2 * fVar1;
                }
                else {
                  *(float *)(param_2 + iVar11 * 4) = fVar2 * fVar1;
                }
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar4);
            iVar10 = *(int *)(param_3 + 0x54);
          }
        }
        else if (iVar11 < iVar4) {
          iVar10 = param_2 + iVar4 * 4;
          puVar7 = (undefined4 *)(param_2 + iVar11 * 4);
          iVar5 = (iVar10 - (int)puVar7 & 0xfffffff8U) + (int)puVar7;
          for (; (int)puVar7 < iVar5; puVar7 = puVar7 + 2) {
            *puVar7 = 0;
            puVar7[1] = 0;
          }
          for (; (int)puVar7 < iVar10; puVar7 = puVar7 + 1) {
            *puVar7 = 0;
          }
          iVar10 = *(int *)(param_3 + 0x54);
        }
      } while (iVar3 < iVar10);
    }
  }
  else if (*(int *)(param_3 + 0x18) == 0) {
    if (0 < *(int *)(param_3 + 0x58)) {
      iVar3 = *(int *)(param_5 + 4) * 0x94;
      iVar10 = 0;
      do {
        iVar4 = *(int *)(param_5 + 0x18) * 0x1bc;
        iVar9 = iVar10 + 1;
        iVar5 = *(int *)(&DAT_5f76990c + iVar10 * 4 + iVar4 + iVar3);
        iVar11 = 0;
        iVar4 = *(int *)(&DAT_5f769910 + iVar3 + iVar4 + iVar10 * 4) - iVar5;
        while( true ) {
          iVar12 = ((*(int *)(param_3 + 0x40) + 1) *
                    *(int *)(param_4 + 0x5c + iVar11 * 0x34 + iVar10 * 4) * 2 +
                    *(int *)(param_3 + 0x28 + iVar11 * 4) * 8 + 0xd2) - *(int *)(param_3 + 8);
          iVar5 = iVar5 * 3 + iVar11 * iVar4;
          iVar8 = iVar4 + iVar5;
          if ((iVar12 < 0x80) && (-1 < iVar12)) {
            fVar1 = *(float *)(&DAT_5f766800 + iVar12 * 4);
            for (; iVar5 < iVar8; iVar5 = iVar5 + 1) {
              iVar12 = *(int *)(param_1 + iVar5 * 4);
              iVar6 = iVar12;
              if (iVar12 < 0) {
                iVar6 = -iVar12;
              }
              if (iVar6 == 0) {
                *(undefined4 *)(param_2 + iVar5 * 4) = 0;
              }
              else {
                if (iVar6 < 0x80) {
                  fVar2 = *(float *)(&DAT_5f766600 + iVar6 * 4);
                }
                else {
                  dVar13 = pow((double)iVar6,_DAT_5f766a80);
                  fVar2 = (float)dVar13;
                }
                if (iVar12 < 1) {
                  *(float *)(param_2 + iVar5 * 4) = -fVar2 * fVar1;
                }
                else {
                  *(float *)(param_2 + iVar5 * 4) = fVar2 * fVar1;
                }
              }
            }
          }
          else if (iVar5 < iVar8) {
            puVar7 = (undefined4 *)(param_2 + iVar5 * 4);
            iVar5 = param_2 + iVar8 * 4;
            iVar12 = (iVar5 - (int)puVar7 & 0xfffffff8U) + (int)puVar7;
            for (; (int)puVar7 < iVar12; puVar7 = puVar7 + 2) {
              *puVar7 = 0;
              puVar7[1] = 0;
            }
            for (; (int)puVar7 < iVar5; puVar7 = puVar7 + 1) {
              *puVar7 = 0;
            }
          }
          iVar11 = iVar11 + 1;
          if (2 < iVar11) break;
          iVar5 = *(int *)(&DAT_5f76990c + iVar10 * 4 + *(int *)(param_5 + 0x18) * 0x1bc + iVar3);
        }
        iVar10 = iVar9;
      } while (iVar9 < *(int *)(param_3 + 0x58));
    }
  }
  else {
    FUN_5f71b3d0(param_3,param_2);
  }
  if (*(int *)(param_3 + 0x4c) < 0x240) {
    puVar7 = (undefined4 *)(param_2 + *(int *)(param_3 + 0x4c) * 4);
    iVar10 = ((param_2 + 0x900) - (int)puVar7 & 0xfffffff8U) + (int)puVar7;
    for (; (int)puVar7 < iVar10; puVar7 = puVar7 + 2) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    for (; (int)puVar7 < param_2 + 0x900; puVar7 = puVar7 + 1) {
      *puVar7 = 0;
    }
  }
  return;
}


