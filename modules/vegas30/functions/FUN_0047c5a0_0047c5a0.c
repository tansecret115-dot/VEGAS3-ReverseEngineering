/* Module: vegas30.exe
   Function: FUN_0047c5a0
   Address: 0047c5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047c5a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    if (((*(float *)(param_2 + 0x20) != *(float *)(param_1 + 0x20)) ||
        (*(float *)(param_2 + 0x24) != *(float *)(param_1 + 0x24))) &&
       (fVar4 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20),
       (float)_DAT_00610fd8 != fVar4)) {
      fVar1 = *(float *)(param_2 + 0x24);
      fVar2 = *(float *)(param_2 + 0x20);
      iVar7 = **(int **)(param_1 + 0x30);
      if (iVar7 != 0) {
        pfVar6 = (float *)((*(int **)(param_1 + 0x30))[2] + 8);
        do {
          fVar3 = (*pfVar6 - *(float *)(param_1 + 0x20)) * ((fVar1 - fVar2) / fVar4) +
                  *(float *)(param_2 + 0x20);
          if (*(float *)(param_2 + 0x20) <= fVar3) {
            if (*(float *)(param_2 + 0x24) < fVar3) {
              fVar3 = *(float *)(param_2 + 0x24);
            }
          }
          else {
            fVar3 = *(float *)(param_2 + 0x20);
          }
          *pfVar6 = fVar3;
          pfVar6 = pfVar6 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    uVar5 = FUN_0052b980(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    return 0;
  }
  return 1;
}


