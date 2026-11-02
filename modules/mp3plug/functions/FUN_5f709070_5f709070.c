/* Module: mp3plug.dll
   Function: FUN_5f709070
   Address: 5f709070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f709070(uint *param_1,int param_2,int param_3,float param_4,undefined4 param_5,float *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float local_3d0 [116];
  float local_200 [124];
  
  uVar2 = param_1[0xef];
  iVar1 = 0;
  if (0 < (int)uVar2) {
    do {
      local_3d0[iVar1] =
           (param_4 - *(float *)(param_2 + iVar1 * 4) * param_4) +
           *(float *)(param_2 + iVar1 * 4) * *(float *)(param_1[0xf2] + iVar1 * 4);
      uVar2 = param_1[0xef];
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  FUN_5f6d5f70((float *)param_1[0xed],local_3d0,local_3d0,uVar2);
  FUN_5f6d51f0(DAT_5f760970,(uint)local_3d0,(uint)local_200,param_1[0xef]);
  FUN_5f6d7a10(local_200,local_200,param_1[0xef]);
  uVar2 = param_1[0xef];
  uVar3 = *param_1;
  if ((int)uVar2 < (int)uVar3) {
    do {
      local_200[uVar2] = *(float *)(param_1[0xf0] + uVar2 * 4);
      uVar3 = *param_1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)uVar3);
  }
  iVar1 = 0;
  if (0 < (int)uVar3) {
    do {
      param_6[iVar1] =
           *(float *)(param_3 + iVar1 * 4) * *(float *)(param_1[0xf1] + iVar1 * 4) *
           local_200[iVar1];
      uVar3 = *param_1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar3);
  }
  FUN_5f6d5f70(param_6,(float *)param_1[0xec],param_6,uVar3);
  return;
}


