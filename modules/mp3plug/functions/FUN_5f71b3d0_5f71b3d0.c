/* Module: mp3plug.dll
   Function: FUN_5f71b3d0
   Address: 5f71b3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f71b3d0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int in_EAX;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  int in_stack_00000010;
  int in_stack_00000014;
  
  iVar5 = *(int *)(in_stack_00000014 + 4);
  cVar3 = *(char *)(in_stack_00000014 + 0x20);
  iVar9 = 0;
  while( true ) {
    if (cVar3 == '\0') {
      iVar11 = 6;
    }
    else {
      iVar11 = 8;
    }
    if (iVar11 <= iVar9) break;
    iVar7 = ((*(int *)(param_1 + 0x3c) * (&DAT_5f766a00)[iVar9] +
             *(int *)(in_stack_00000010 + iVar9 * 4)) * (*(int *)(param_1 + 0x40) + 1) * 2 + 0xd2) -
            *(int *)(param_1 + 8);
    iVar12 = *(int *)(in_stack_00000014 + 0x18) * 0x1bc;
    iVar13 = iVar5 * 0x94;
    iVar6 = *(int *)(&DAT_5f7698b4 + iVar13 + iVar12 + iVar9 * 4);
    iVar11 = iVar9 + 1;
    iVar12 = *(int *)(&DAT_5f7698b0 + iVar9 * 4 + iVar12 + iVar13);
    iVar9 = iVar11;
    if ((iVar7 < 0x80) && (-1 < iVar7)) {
      fVar1 = *(float *)(&DAT_5f766800 + iVar7 * 4);
      if (iVar12 < iVar6) {
        do {
          iVar11 = *(int *)(in_EAX + iVar12 * 4);
          iVar7 = iVar11;
          if (iVar11 < 0) {
            iVar7 = -iVar11;
          }
          if (iVar7 == 0) {
            *(undefined4 *)(param_2 + iVar12 * 4) = 0;
          }
          else {
            if (iVar7 < 0x80) {
              fVar2 = *(float *)(&DAT_5f766600 + iVar7 * 4);
            }
            else {
              dVar14 = pow((double)iVar7,_DAT_5f766a58);
              fVar2 = (float)dVar14;
            }
            if (iVar11 < 1) {
              *(float *)(param_2 + iVar12 * 4) = -fVar2 * fVar1;
            }
            else {
              *(float *)(param_2 + iVar12 * 4) = fVar2 * fVar1;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar6);
        cVar3 = *(char *)(in_stack_00000014 + 0x20);
      }
    }
    else if (iVar12 < iVar6) {
      iVar11 = param_2 + iVar6 * 4;
      puVar4 = (undefined4 *)(param_2 + iVar12 * 4);
      iVar7 = (iVar11 - (int)puVar4 & 0xfffffff8U) + (int)puVar4;
      for (; (int)puVar4 < iVar7; puVar4 = puVar4 + 2) {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      for (; (int)puVar4 < iVar11; puVar4 = puVar4 + 1) {
        *puVar4 = 0;
      }
      cVar3 = *(char *)(in_stack_00000014 + 0x20);
    }
  }
  if ((*(int *)(param_1 + 0x50) == 0) && (3 < *(int *)(param_1 + 0x58))) {
    iVar5 = iVar5 * 0x94;
    iVar9 = 3;
    do {
      iVar6 = *(int *)(in_stack_00000014 + 0x18) * 0x1bc;
      iVar11 = iVar9 + 1;
      iVar7 = *(int *)(&DAT_5f76990c + iVar9 * 4 + iVar6 + iVar5);
      iVar12 = 0;
      iVar6 = *(int *)(&DAT_5f769910 + iVar5 + iVar6 + iVar9 * 4) - iVar7;
      while( true ) {
        iVar13 = ((*(int *)(param_1 + 0x40) + 1) *
                  *(int *)(in_stack_00000010 + 0x5c + iVar12 * 0x34 + iVar9 * 4) * 2 +
                  *(int *)(param_1 + 0x28 + iVar12 * 4) * 8 + 0xd2) - *(int *)(param_1 + 8);
        iVar7 = iVar7 * 3 + iVar12 * iVar6;
        iVar10 = iVar6 + iVar7;
        if ((iVar13 < 0x80) && (-1 < iVar13)) {
          fVar1 = *(float *)(&DAT_5f766800 + iVar13 * 4);
          for (; iVar7 < iVar10; iVar7 = iVar7 + 1) {
            iVar13 = *(int *)(in_EAX + iVar7 * 4);
            iVar8 = iVar13;
            if (iVar13 < 0) {
              iVar8 = -iVar13;
            }
            if (iVar8 == 0) {
              *(undefined4 *)(param_2 + iVar7 * 4) = 0;
            }
            else {
              if (iVar8 < 0x80) {
                fVar2 = *(float *)(&DAT_5f766600 + iVar8 * 4);
              }
              else {
                dVar14 = pow((double)iVar8,_DAT_5f766a68);
                fVar2 = (float)dVar14;
              }
              if (iVar13 < 1) {
                *(float *)(param_2 + iVar7 * 4) = -fVar2 * fVar1;
              }
              else {
                *(float *)(param_2 + iVar7 * 4) = fVar2 * fVar1;
              }
            }
          }
        }
        else if (iVar7 < iVar10) {
          puVar4 = (undefined4 *)(param_2 + iVar7 * 4);
          iVar7 = param_2 + iVar10 * 4;
          iVar13 = (iVar7 - (int)puVar4 & 0xfffffff8U) + (int)puVar4;
          for (; (int)puVar4 < iVar13; puVar4 = puVar4 + 2) {
            *puVar4 = 0;
            puVar4[1] = 0;
          }
          for (; (int)puVar4 < iVar7; puVar4 = puVar4 + 1) {
            *puVar4 = 0;
          }
        }
        iVar12 = iVar12 + 1;
        if (2 < iVar12) break;
        iVar7 = *(int *)(&DAT_5f76990c +
                        iVar9 * 4 + *(int *)(in_stack_00000014 + 0x18) * 0x1bc + iVar5);
      }
      iVar9 = iVar11;
    } while (iVar11 < *(int *)(param_1 + 0x58));
  }
  return;
}


