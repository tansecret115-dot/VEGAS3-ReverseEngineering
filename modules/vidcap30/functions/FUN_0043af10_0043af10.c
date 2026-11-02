/* Module: vidcap30.exe
   Function: FUN_0043af10
   Address: 0043af10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043af10(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_3 + 8) >> 5 & 4;
  if ((*(uint *)(param_1 + 0x1c34) & 4) != uVar1) {
    *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffb | uVar1;
  }
  if ((((*(byte *)(param_1 + 0x1ae8) & 1) == 0) &&
      (uVar1 = *(uint *)(param_3 + 8), (uVar1 & 1) != 0)) && ((uVar1 & 2) != 0)) {
    if (((uVar1 & 8) != 0) && ((*(uint *)(param_1 + 0x1c34) & 0x100) == 0)) {
      *(undefined4 *)(param_1 + 0x1c00) = 0x1d6;
      return;
    }
    if ((uVar1 & 0x80) != 0) {
      *(undefined4 *)(param_1 + 0x1c00) = 0x1d7;
      *(undefined4 *)(param_1 + 0x1c04) = 0;
      return;
    }
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x200) != 0) {
        *(undefined4 *)(param_1 + 0x1c04) = 0x1dd;
        return;
      }
      if ((uVar1 & 0x400) == 0) {
        if ((uVar1 & 0x800) != 0) {
          *(undefined4 *)(param_1 + 0x1c04) = 0x1dd;
          return;
        }
        if ((uVar1 & 0x1000) == 0) {
          if ((uVar1 & 0x2000) != 0) {
            *(undefined4 *)(param_1 + 0x1c04) = 0x1dd;
            return;
          }
          if ((uVar1 & 0x4000) == 0) {
            return;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x1c04) = 0x1db;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c00) = 0;
      *(undefined4 *)(param_1 + 0x1c04) = 0;
      if (((*(uint *)(param_1 + 0x1c34) & 0xa0) == 0) &&
         ((*(uint *)(param_1 + 0x1c34) & 0x200) == 0)) {
        *(undefined4 *)(param_1 + 0x1bfc) = 0;
        return;
      }
    }
  }
  return;
}


