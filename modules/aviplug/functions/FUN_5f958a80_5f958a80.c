/* Module: aviplug.dll
   Function: FUN_5f958a80
   Address: 5f958a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f958a80(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(uint *)(param_1 + 0x10) = param_3 & 0xffff;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < 0x70766460) {
    if ((uVar1 != 0x7076645f) && (uVar1 != 0x6e76645f)) {
      if (uVar1 != 0x6e766477) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return 0;
    }
  }
  else {
    if (uVar1 != 0x70766477) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 0;
}


