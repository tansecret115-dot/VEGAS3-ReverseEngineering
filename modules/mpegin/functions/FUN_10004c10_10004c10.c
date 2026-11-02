/* Module: mpegin.dll
   Function: FUN_10004c10
   Address: 10004c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_10004c10(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x12e54);
  if (*(int *)(iVar2 + 0x2d4) != 0) {
    *(uint *)(param_1 + 0x4e5c) = (uint)(*(byte *)(iVar2 + 0x2c4) >> 7);
    *(uint *)(param_1 + 0x4e60) = (*(byte *)(iVar2 + 0x2c4) & 0x40) >> 6;
    uVar3 = (uint)(*(byte *)(iVar2 + 0x2c5) >> 6);
    *(uint *)(param_1 + 0x4e64) = uVar3;
    if (uVar3 == 0) {
      uVar3 = (*(byte *)(iVar2 + 0x2c5) & 0x30) >> 4;
      *(uint *)(param_1 + 0x4e68) = uVar3;
      if (1 < uVar3) {
        FUN_10007e90(param_1,(byte *)s_Invalid_PCM_frequency_10018990);
        return 1;
      }
      bVar1 = *(byte *)(iVar2 + 0x2c5);
      uVar3 = bVar1 & 7;
      *(uint *)(param_1 + 0x4e6c) = uVar3;
      if (uVar3 != 1 && (bVar1 & 7) != 0) {
        FUN_10007e90(param_1,(byte *)s_Unsupported_number_of_PCM_channe_1001896c);
        return 1;
      }
      *(uint *)(param_1 + 0x4e70) = (uint)*(byte *)(iVar2 + 0x2c6);
      *(undefined4 *)(param_1 + 0x94) =
           *(undefined4 *)(&DAT_100186b4 + *(int *)(param_1 + 0x4e64) * 4);
      *(uint *)(param_1 + 0x90) = (uint)(0 < *(int *)(param_1 + 0x4e6c));
      iVar4 = *(int *)(param_1 + 0x4e6c) + 1;
      *(int *)(param_1 + 0xca0) = iVar4;
      *(int *)(param_1 + 0xa4) = iVar4 * 2;
      *(undefined4 *)(param_1 + 0x8c) =
           *(undefined4 *)(&DAT_100186a4 + *(int *)(param_1 + 0x4e68) * 4);
      iVar4 = *(int *)(&DAT_100186c4 + *(int *)(param_1 + 0x4e68) * 4);
      *(int *)(param_1 + 0xa0) = iVar4;
      if (1 < *(int *)(param_1 + 0xca0)) {
        *(int *)(param_1 + 0xa0) = iVar4 * 2;
      }
      if (*(int *)(param_1 + 0x8c) == 48000) {
        *(undefined4 *)(param_1 + 0xcb0) = 0x50;
      }
      else {
        *(undefined4 *)(param_1 + 0xcb0) = 0xa0;
      }
      *(int *)(param_1 + 0xcac) = *(int *)(param_1 + 0xa4) * *(int *)(param_1 + 0xcb0);
      *(undefined4 *)(iVar2 + 0x68) = 1;
      *(undefined4 *)(param_1 + 0x4e58) = 4;
      return 0;
    }
    FUN_10007e90(param_1,(byte *)s_Unsupported_PCM_quantization_100189a8);
  }
  return 1;
}


