/* Module: mp3plug.dll
   Function: FUN_5f6d2cc0
   Address: 5f6d2cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f6d2cc0(int param_1,undefined4 *param_2,uint param_3,int param_4,int param_5,int *param_6,
            byte *param_7,int *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 8) * 0x240 < (int)param_3) || ((int)param_3 % *(int *)(param_1 + 8) != 0))
  {
    return 1;
  }
  if (param_5 < *(int *)(param_1 + 0x68)) {
    return 2;
  }
  *param_6 = 0;
  if ((*(int *)(param_1 + 0x54) != 0) &&
     (iVar1 = FUN_5f6e2c90(*(int *)(param_1 + 0x54)), iVar1 != 0)) {
    puVar2 = (undefined4 *)FUN_5f6e2c90(*(int *)(param_1 + 0x54));
    *puVar2 = 0;
  }
  if (param_3 != 0) goto LAB_5f6d2d84;
  do {
    if ((*(int *)(param_1 + 0x6c) <= *(int *)(param_1 + 0x8c)) &&
       (*(int *)(param_1 + 0x74) % *(int *)(param_1 + 100) == 0)) {
      iVar1 = *param_6;
LAB_5f6d2d5c:
      if (iVar1 == 0) {
        FUN_5f6e2c50(*(int *)(param_1 + 0x54),param_4,param_6);
      }
      break;
    }
    iVar1 = *param_6;
    if (iVar1 != 0) goto LAB_5f6d2d5c;
LAB_5f6d2d84:
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 1) {
      iVar1 = 0;
      if (0 < (int)param_3) {
        if (0 < (int)(param_3 & 0xfffffffe)) {
          do {
            *(undefined4 *)(*(int *)(param_1 + 0x70) + iVar1 * 8) = param_2[iVar1];
            *(undefined4 *)(*(int *)(param_1 + 0x70) + 8 + iVar1 * 8) = param_2[iVar1 + 1];
            iVar1 = iVar1 + 2;
          } while (iVar1 < (int)(param_3 & 0xfffffffe));
        }
        for (; iVar1 < (int)param_3; iVar1 = iVar1 + 1) {
          *(undefined4 *)(*(int *)(param_1 + 0x70) + iVar1 * 8) = param_2[iVar1];
        }
      }
      for (; iVar1 < 0x240; iVar1 = iVar1 + 1) {
        *(undefined4 *)(*(int *)(param_1 + 0x70) + iVar1 * 8) = 0;
      }
      FUN_5f6e30f0(*(int *)(param_1 + 0x4c),*(undefined4 **)(param_1 + 0x70),0x240);
      iVar1 = *(int *)(param_1 + 8);
    }
    else if (iVar1 == 2) {
      if (*(int *)(param_1 + 0xc) == 1) {
        iVar1 = 0;
        uVar4 = (int)(param_3 + (0x7fffffff < param_3)) >> 1;
        if (0 < (int)uVar4) {
          if (0 < (int)(uVar4 & 0xfffffffe)) {
            do {
              *(float *)(*(int *)(param_1 + 0x70) + iVar1 * 8) =
                   ((float)param_2[iVar1 * 2 + 1] + (float)param_2[iVar1 * 2]) * _DAT_5f75c574;
              *(float *)(*(int *)(param_1 + 0x70) + 8 + iVar1 * 8) =
                   ((float)param_2[iVar1 * 2 + 3] + (float)param_2[iVar1 * 2 + 2]) * _DAT_5f75c574;
              iVar1 = iVar1 + 2;
            } while (iVar1 < (int)(uVar4 & 0xfffffffe));
          }
          for (; iVar1 < (int)uVar4; iVar1 = iVar1 + 1) {
            *(float *)(*(int *)(param_1 + 0x70) + iVar1 * 8) =
                 ((float)param_2[iVar1 * 2 + 1] + (float)param_2[iVar1 * 2]) * _DAT_5f75c574;
          }
        }
        for (; iVar1 < 0x240; iVar1 = iVar1 + 1) {
          *(undefined4 *)(*(int *)(param_1 + 0x70) + iVar1 * 8) = 0;
        }
        FUN_5f6e30f0(*(int *)(param_1 + 0x4c),*(undefined4 **)(param_1 + 0x70),0x240);
        iVar1 = *(int *)(param_1 + 8);
      }
      else {
        FUN_5f6e30f0(*(int *)(param_1 + 0x4c),param_2,(int)(param_3 + (0x7fffffff < param_3)) >> 1);
        if ((int)(0x480 - param_3) < 1) {
          iVar1 = *(int *)(param_1 + 8);
        }
        else {
          iVar1 = 0;
          do {
            FUN_5f6e30f0(*(int *)(param_1 + 0x4c),(undefined4 *)&DAT_5f752990,1);
            iVar1 = iVar1 + 2;
          } while (iVar1 < (int)(0x480 - param_3));
          iVar1 = *(int *)(param_1 + 8);
        }
      }
    }
    if ((int)param_3 < iVar1 * 0x240) {
      *(int *)(param_1 + 0x8c) = (*(int *)(param_1 + 0x8c) + 0x240) - (int)param_3 / iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x74) % *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_5f6e4aa0(*(undefined4 **)(param_1 + 0x50));
        uVar3 = FUN_5f6e4a50(*(int **)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0x7c) = uVar3;
        uVar3 = FUN_5f6e4a70(*(int **)(param_1 + 0x50));
        *(undefined4 *)(param_1 + 0x80) = uVar3;
        iVar5 = FUN_5f6e4a90(*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x7c));
        iVar5 = iVar5 + *(int *)(param_1 + 0x80) * 8;
        *(int *)(param_1 + 0x84) = iVar5;
        FUN_5f6e1b10(*(int *)(param_1 + 0x3c),iVar5 - *(int *)(param_1 + 0x5c));
        FUN_5f6e1b30(*(int *)(param_1 + 0x3c));
      }
    }
    FUN_5f6e3120(*(int *)(param_1 + 0x4c));
    FUN_5f6e45a0();
    FUN_5f6e3150(*(int **)(param_1 + 0x4c),iVar1,*(undefined4 **)(param_1 + 0x48));
    if (*(int *)(param_1 + 0xc) == 2) {
      if (**(int **)(param_1 + 0x48) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 2;
      }
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | uVar4;
      *(uint *)(param_1 + 0x78) =
           *(uint *)(param_1 + 0x78) | (uint)(*(int *)(*(int *)(param_1 + 0x48) + 4) != 0);
    }
    FUN_5f6e48e0(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x58));
    FUN_5f6e0e50(*(int **)(param_1 + 0x3c),*(int **)(param_1 + 0x48),
                 *(int **)(param_1 + 0x40 + iVar1 * 4));
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + **(int **)(param_1 + 0x40 + iVar1 * 4);
    FUN_5f6e1b40(*(int *)(param_1 + 0x3c),**(int **)(param_1 + 0x40 + iVar1 * 4));
    if (iVar1 == *(int *)(param_1 + 0x60) + -1) {
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar1 = FUN_5f6e1b20(*(int *)(param_1 + 0x3c));
        uVar3 = FUN_5f6e4ac0(*(int *)(param_1 + 0x50),
                             (*(int *)(param_1 + 0x88) - iVar1) + *(int *)(param_1 + 0x5c));
        *(undefined4 *)(param_1 + 0x7c) = uVar3;
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      iVar1 = FUN_5f6e2050(param_6,*(int *)(param_1 + 0x54),(int *)(param_1 + 0x40),
                           *(uint *)(param_1 + 0x7c),*(int *)(param_1 + 0x80),
                           *(undefined4 *)(param_1 + 0x78),param_4,param_6,param_7,param_8);
      FUN_5f6e1b10(*(int *)(param_1 + 0x3c),-(iVar1 - *(int *)(param_1 + 0x5c)));
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar1 = FUN_5f6e4a90(*(int *)(param_1 + 0x50),*(int *)(param_1 + 0x7c));
        FUN_5f6e1b10(*(int *)(param_1 + 0x3c),iVar1 - *(int *)(param_1 + 0x5c));
      }
    }
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  } while (param_3 == 0);
  if (param_5 < *param_6) {
    return 4;
  }
  return 0;
}


