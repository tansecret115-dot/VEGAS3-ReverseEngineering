/* Module: mp3plug.dll
   Function: FUN_5f709230
   Address: 5f709230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f709230(uint *param_1,int param_2,float param_3,float *param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float local_3a4 [115];
  float local_1d8 [116];
  
  uVar2 = param_1[0xef];
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      fVar1 = *(float *)(param_1[0xed] + iVar3 * 4);
      if (fVar1 <= param_3) {
        fVar1 = param_3;
      }
      local_3a4[iVar3] = fVar1;
      uVar2 = param_1[0xef];
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  FUN_5f6d51f0(DAT_5f760970,(uint)local_3a4,(uint)local_1d8,uVar2);
  FUN_5f6d7a10(local_1d8,local_1d8,param_1[0xef]);
  uVar2 = param_1[0xef];
  uVar4 = *param_1;
  if ((int)uVar2 < (int)uVar4) {
    do {
      local_1d8[uVar2] = *(float *)(param_1[0xf0] + uVar2 * 4);
      uVar4 = *param_1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar4);
  }
  iVar3 = 0;
  if (0 < (int)uVar4) {
    do {
      param_4[iVar3] =
           *(float *)(param_2 + iVar3 * 4) * *(float *)(param_1[0xf1] + iVar3 * 4) *
           local_1d8[iVar3];
      uVar4 = *param_1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar4);
  }
  FUN_5f6d5f70(param_4,(float *)param_1[0xec],param_4,uVar4);
  return;
}


