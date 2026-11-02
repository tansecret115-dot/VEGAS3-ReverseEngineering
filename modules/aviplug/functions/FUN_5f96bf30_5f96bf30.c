/* Module: aviplug.dll
   Function: FUN_5f96bf30
   Address: 5f96bf30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96bf30(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  
  pcVar1 = FUN_5f967e40;
  if (*param_1 == 0) {
    pcVar1 = FUN_5f967e80;
  }
  fVar2 = (float10)fcos((float10)_DAT_5f9daa70);
  DAT_5f9f4a58 = (param_1[2] + 1 + param_1[1]) - param_1[3];
  DAT_5f9f4a5c = (param_1[3] + 1 + param_1[1]) - param_1[4];
  DAT_5f9f4a60 = (uint)(param_1[5] != 0) << ((char)DAT_5f9f4a5c - 1U & 0x1f);
  DAT_5f9f4a64 = (param_1[6] + 1 + param_1[1]) - param_1[7];
  DAT_5f9f4a68 = (param_1[7] + 1 + param_1[1]) - param_1[8];
  DAT_5f9f4a6c = (uint)(param_1[9] != 0) << ((char)DAT_5f9f4a68 - 1U & 0x1f);
  _DAT_5f9f4218 = (double)fVar2;
  fVar2 = (float10)fcos((float10)_DAT_5f9daa68);
  _DAT_5f9f4220 = (double)fVar2;
  fVar2 = (float10)fcos((float10)_DAT_5f9daa60);
  _DAT_5f9f4228 = (double)fVar2;
  _DAT_5f9f4230 = (double)(fVar2 + (float10)_DAT_5f9f4220);
  fVar2 = (float10)fcos((float10)_DAT_5f9daa58);
  _DAT_5f9f4238 = (double)fVar2;
  fVar2 = (float10)fcos((float10)_DAT_5f9daa50);
  _DAT_5f9f4240 = (double)fVar2;
  fVar2 = (float10)fcos((float10)_DAT_5f9daa48);
  _DAT_5f9f4248 = (double)fVar2;
  fVar2 = (float10)fcos((float10)_DAT_5f9daa40);
  _DAT_5f9f4250 = (double)fVar2;
  DAT_5f9f4a70 = (*pcVar1)(_DAT_5f9f4218,param_1[1]);
  DAT_5f9f4a74 = (*pcVar1)(DAT_5f9f4220,DAT_5f9f4224,param_1[1]);
  DAT_5f9f4a78 = (*pcVar1)(DAT_5f9f4228,DAT_5f9f422c,param_1[1]);
  _DAT_5f9f4a7c = (*pcVar1)(DAT_5f9f4230,DAT_5f9f4234,param_1[1]);
  DAT_5f9f4a80 = (*pcVar1)(DAT_5f9f4238,DAT_5f9f423c,param_1[1]);
  DAT_5f9f4a84 = (*pcVar1)(DAT_5f9f4240,DAT_5f9f4244,param_1[1]);
  DAT_5f9f4a88 = (*pcVar1)(DAT_5f9f4248,DAT_5f9f424c,param_1[1]);
  DAT_5f9f4a8c = (*pcVar1)(DAT_5f9f4250,DAT_5f9f4254,param_1[1]);
  DAT_5f9f4a90 = (DAT_5f9f4a78 + DAT_5f9f4a74) / 2;
  DAT_5f9f4a94 = (DAT_5f9f4a78 - DAT_5f9f4a74) / 2;
  DAT_5f9f4a98 = (DAT_5f9f4a84 + DAT_5f9f4a80) / 2;
  DAT_5f9f4a9c = (DAT_5f9f4a84 - DAT_5f9f4a8c) / 2;
  DAT_5f9f4aa0 = (DAT_5f9f4a88 - DAT_5f9f4a80) / 2;
  DAT_5f9f4aa4 = (DAT_5f9f4a8c - DAT_5f9f4a88) / 2;
  DAT_5f9f4aa8 = (DAT_5f9f4a8c + DAT_5f9f4a88) / 2;
  DAT_5f9f4aac = (DAT_5f9f4a88 + DAT_5f9f4a80) / 2;
  DAT_5f9f4ab0 = (DAT_5f9f4a8c + DAT_5f9f4a84) / 2;
  DAT_5f9f4ab4 = (DAT_5f9f4a84 - DAT_5f9f4a80) / 2;
  return;
}


