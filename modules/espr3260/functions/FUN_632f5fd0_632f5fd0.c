/* Module: espr3260.dll
   Function: FUN_632f5fd0
   Address: 632f5fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f5fd0(uint *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = param_3;
  for (iVar7 = 0x30; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  param_3 = (undefined4 *)0x0;
  do {
    uVar2 = *param_1;
    iVar7 = (int)param_3 + ((int)uVar2 >> 4 & 0xfU) * 3;
    iVar1 = (int)param_3 + (uVar2 & 0xf) * 3;
    fVar3 = _DAT_632fa39c;
    if ((uVar2 & 0x100) != 0) {
      fVar3 = _DAT_632fa398;
    }
    if ((float)_DAT_632fa3a0 <= fVar3) {
      if (iVar7 < 0x30) {
        iVar6 = iVar7 * 4;
        do {
          iVar5 = iVar6 + 4;
          *(float *)((int)puVar4 + iVar6) =
               *(float *)(param_2 + iVar6 + iVar7 * -4) + *(float *)((int)puVar4 + iVar6);
          iVar6 = iVar5;
        } while (iVar5 < 0xc0);
      }
    }
    else if (iVar7 < 0x30) {
      iVar6 = iVar7 * 4;
      do {
        iVar5 = iVar6 + 4;
        *(float *)((int)puVar4 + iVar6) =
             *(float *)((int)puVar4 + iVar6) - *(float *)(param_2 + iVar6 + iVar7 * -4);
        iVar6 = iVar5;
      } while (iVar5 < 0xc0);
    }
    if (iVar1 < iVar7) {
      fVar3 = -fVar3;
    }
    if ((float)_DAT_632fa3a0 <= fVar3) {
      if (iVar1 < 0x30) {
        iVar7 = iVar1 * 4;
        do {
          iVar6 = iVar7 + 4;
          *(float *)((int)puVar4 + iVar7) =
               *(float *)(param_2 + iVar7 + iVar1 * -4) + *(float *)((int)puVar4 + iVar7);
          iVar7 = iVar6;
        } while (iVar6 < 0xc0);
      }
    }
    else if (iVar1 < 0x30) {
      iVar7 = iVar1 * 4;
      do {
        iVar6 = iVar7 + 4;
        *(float *)((int)puVar4 + iVar7) =
             *(float *)((int)puVar4 + iVar7) - *(float *)(param_2 + iVar7 + iVar1 * -4);
        iVar7 = iVar6;
      } while (iVar6 < 0xc0);
    }
    param_3 = (undefined4 *)((int)param_3 + 1);
    param_1 = param_1 + 1;
  } while ((int)param_3 < 3);
  return;
}


