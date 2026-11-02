/* Module: vidpcore.dll
   Function: FUN_5de82350
   Address: 5de82350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de82350(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  uVar3 = 0;
  puVar2 = (uint *)*param_1;
  fVar4 = (float10)(uint)param_1[3] / (float10)param_3;
  if (param_1[1] != 0) {
    fVar5 = (float10)param_2;
    do {
      uVar1 = 0xff101010;
      fVar6 = ((float10)(uint)param_1[2] + (float10)uVar3) / fVar5;
      if (((((float10)_DAT_5df291e8 <= fVar6) && ((float10)_DAT_5df291e8 <= fVar4)) &&
          (fVar6 <= (float10)_DAT_5df291e0)) && (fVar4 <= (float10)_DAT_5df291e0)) {
        uVar1 = ftol();
        uVar1 = ((uVar1 | 0xffffff00) << 8 | uVar1) << 8 | uVar1;
        fVar5 = extraout_ST0;
        fVar4 = extraout_ST1;
      }
      *puVar2 = uVar1;
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < (uint)param_1[1]);
  }
  return 1;
}


