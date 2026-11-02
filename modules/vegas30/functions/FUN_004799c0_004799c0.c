/* Module: vegas30.exe
   Function: FUN_004799c0
   Address: 004799c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004799c0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  
  puVar1 = *(uint **)(*(int *)(param_1 + 0x54) + 0x20);
  if (puVar1 != (uint *)0x0) {
    uVar2 = **(uint **)(param_2 + 0x30);
    if (uVar2 != *puVar1) {
      return 1;
    }
    pfVar4 = (float *)(*(uint **)(param_2 + 0x30))[2];
    uVar6 = 0;
    if (uVar2 != 0) {
      pfVar3 = (float *)(puVar1[2] + 8);
      iVar5 = (int)pfVar4 - puVar1[2];
      do {
        if (*pfVar4 != pfVar3[-2]) {
          return 1;
        }
        if (pfVar4[1] != pfVar3[-1]) {
          return 1;
        }
        if (*(float *)(iVar5 + (int)pfVar3) != *pfVar3) {
          return 1;
        }
        if (pfVar4[3] != pfVar3[1]) {
          return 1;
        }
        uVar6 = uVar6 + 1;
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 4;
      } while (uVar6 < uVar2);
    }
  }
  return 0;
}


