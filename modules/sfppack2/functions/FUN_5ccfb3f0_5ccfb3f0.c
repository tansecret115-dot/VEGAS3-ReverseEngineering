/* Module: sfppack2.dll
   Function: FUN_5ccfb3f0
   Address: 5ccfb3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccfb3f0(undefined4 param_1,int *param_2,uint *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 1;
  if (1 < *param_3 - 1) {
    puVar3 = (uint *)(param_2 + 3);
    do {
      if (*puVar3 != 0xfffffcb8) {
        uVar6 = *puVar3 + param_4;
        *puVar3 = uVar6;
        if ((int)uVar6 < -0x348) {
          uVar6 = 0xfffffcb8;
        }
        else {
          uVar6 = uVar6 & (0 < (int)uVar6) - 1;
        }
        *puVar3 = uVar6;
      }
      uVar7 = puVar3[-1] + param_4;
      puVar3[-1] = uVar7;
      uVar6 = puVar3[-3] + 3;
      if (((int)uVar7 < (int)(puVar3[-3] + 3)) ||
         (uVar6 = puVar3[1] - 3, (int)(puVar3[1] - 3) < (int)uVar7)) {
        uVar7 = uVar6;
      }
      puVar3[-1] = uVar7;
      uVar8 = uVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar8 < *param_3 - 1);
  }
  iVar4 = *param_3 - 1;
  puVar3 = (uint *)(param_2 + iVar4 * 2 + 1);
  if (param_2[iVar4 * 2 + 1] != 0) {
    uVar8 = param_2[iVar4 * 2 + 1] + param_4;
    iVar1 = param_2[iVar4 * 2];
    *puVar3 = uVar8;
    uVar6 = (iVar1 - param_2[iVar4 * 2 + -2]) + param_4;
    if (uVar6 != 0) {
      uVar7 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f) >> 1;
      lVar2 = (longlong)param_4 * (longlong)(int)(uVar8 - param_2[iVar4 * 2 + -1]);
      if (lVar2 < 0) {
        lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (uint)((uint)lVar2 < uVar7),
                         (uint)lVar2 - uVar7);
        uVar7 = 0;
      }
      *puVar3 = *puVar3 - (int)((longlong)(lVar2 + (ulonglong)uVar7) / (longlong)(int)uVar6);
    }
    uVar8 = *puVar3;
    if ((int)uVar8 < -0x348) {
      uVar8 = 0xfffffcb8;
    }
    else {
      uVar8 = uVar8 & (0 < (int)uVar8) - 1;
    }
    *puVar3 = uVar8;
  }
  uVar8 = *param_3;
  if ((3 < uVar8) && (uVar6 = 1, uVar8 != 1 && uVar8 != 2)) {
    do {
      iVar4 = param_2[2];
      if ((iVar4 < -0x344) || (-4 < iVar4)) {
        if (uVar6 < uVar8) {
          piVar5 = param_2 + 3;
          uVar8 = uVar6;
          do {
            piVar5[-1] = piVar5[1];
            iVar4 = piVar5[2];
            *piVar5 = iVar4;
            if ((iVar4 != -0x348) && (iVar4 < -800)) {
              *piVar5 = -800;
            }
            uVar8 = uVar8 + 1;
            piVar5 = piVar5 + 2;
          } while (uVar8 < *param_3);
        }
        *param_3 = *param_3 - 1;
      }
      uVar8 = *param_3;
      uVar6 = uVar6 + 1;
      param_2 = param_2 + 2;
    } while (uVar6 < uVar8 - 1);
  }
  return;
}


