/* Module: mpegin.dll
   Function: FUN_100048b0
   Address: 100048b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_100048b0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_10005910((int *)(*(int *)(param_1 + 0x12e54) + 0x200),
               *(uint *)(*(int *)(param_1 + 0x12e54) + 0x214) & 7);
  uVar1 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x200,'\f');
  while (((uVar1 != 0xfff && (iVar2 = *(int *)(param_1 + 0x12e54), *(int *)(iVar2 + 0x244) == 0)) &&
         (*(int *)(iVar2 + 0x240) == 0))) {
    FUN_10005910((int *)(iVar2 + 0x200),8);
    uVar1 = FUN_100058d0(*(int *)(param_1 + 0x12e54) + 0x200,'\f');
  }
  FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),0xc);
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
  *(uint *)(param_1 + 0xcb8) = uVar1;
  uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
  *(uint *)(param_1 + 0xcbc) = uVar1;
  if (uVar1 == 0) {
    FUN_10007e90(param_1,(byte *)s_Invalid_MPEG_audio_layer_10018950);
  }
  else {
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0xcc0) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),4);
    *(uint *)(param_1 + 0xcc4) = uVar1;
    if (uVar1 == 0) {
      FUN_10007e90(param_1,(byte *)s_Cannot_handle_free_form_MPEG_bit_10018928);
      return 1;
    }
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0xcc8) = uVar1;
    if (uVar1 == 3) {
      FUN_10007e90(param_1,(byte *)s_Invalid_MPEG_frequency_10018910);
      return 1;
    }
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0xccc) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
    *(uint *)(param_1 + 0xcd0) = uVar1;
    uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
    *(uint *)(param_1 + 0x9c) = uVar1;
    if ((int)uVar1 < 4) {
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
      *(uint *)(param_1 + 0xcd4) = uVar1;
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
      *(uint *)(param_1 + 0xcd8) = uVar1;
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),1);
      *(uint *)(param_1 + 0xcdc) = uVar1;
      uVar1 = FUN_10005cb0((int *)(*(int *)(param_1 + 0x12e54) + 0x200),2);
      *(uint *)(param_1 + 0xce0) = uVar1;
      if (*(int *)(*(int *)(param_1 + 0x12e54) + 0x244) == 0) {
        *(undefined4 *)(param_1 + 0x94) = 0x10;
        uVar1 = (uint)(*(int *)(param_1 + 0x9c) < 3);
        *(uint *)(param_1 + 0x90) = uVar1;
        if (uVar1 == 0) {
          *(undefined4 *)(param_1 + 0xa4) = 2;
        }
        else {
          *(undefined4 *)(param_1 + 0xa4) = 4;
        }
        *(uint *)(param_1 + 0xca0) = (*(int *)(param_1 + 0x9c) != 3) + 1;
        iVar2 = *(int *)(param_1 + 0xcbc);
        *(undefined4 *)(param_1 + 0x8c) =
             *(undefined4 *)(&DAT_100185e0 + *(int *)(param_1 + 0xcc8) * 4);
        *(int *)(param_1 + 0x98) = iVar2;
        if (iVar2 == 1) {
          *(undefined4 *)(param_1 + 0x98) = 3;
          *(undefined4 *)(param_1 + 0x4e58) = 3;
        }
        else if (iVar2 == 2) {
          *(undefined4 *)(param_1 + 0x4e58) = 2;
        }
        else if (iVar2 == 3) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          *(undefined4 *)(param_1 + 0x4e58) = 1;
        }
        iVar2 = *(int *)(&DAT_100185b4 +
                        (*(int *)(param_1 + 0x98) * 0xf + *(int *)(param_1 + 0xcc4)) * 4);
        *(int *)(param_1 + 0xa0) = iVar2;
        if (*(int *)(param_1 + 0x98) == 1) {
          *(undefined4 *)(param_1 + 0xcb0) = 0x180;
          iVar2 = iVar2 * 0xf;
        }
        else {
          *(undefined4 *)(param_1 + 0xcb0) = 0x480;
          iVar2 = *(int *)(param_1 + 0xa0) * 0x2d;
        }
        *(uint *)(param_1 + 0xcac) = (uint)(iVar2 * 0xc80) / *(uint *)(param_1 + 0x8c);
        *(undefined4 *)(*(int *)(param_1 + 0x12e54) + 0x68) = 1;
        return 0;
      }
    }
  }
  return 1;
}


