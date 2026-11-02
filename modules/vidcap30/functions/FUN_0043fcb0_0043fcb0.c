/* Module: vidcap30.exe
   Function: FUN_0043fcb0
   Address: 0043fcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043fcb0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_5 != 0) {
    if (param_4 != 2) {
      if (param_4 == 3) {
        *(undefined4 *)(param_1 + 0x1c04) = 0;
        return uVar1;
      }
      if (param_4 != 0x2a) {
        if (param_3 == 0x1d9) {
          *(undefined4 *)(param_1 + 0x1c04) = 0x1d9;
          uVar1 = FUN_00426cf0(param_2);
          return uVar1;
        }
        if (param_3 != 0x1da) {
          return 0x80004001;
        }
        *(undefined4 *)(param_1 + 0x1c04) = 0x1da;
        uVar1 = FUN_00426cb0(param_2);
        return uVar1;
      }
    }
    if ((*(byte *)(param_1 + 0x1c34) & 4) != 0) {
      if (param_3 != 0x1d9) {
        if (param_3 != 0x1da) {
          return 0x80004001;
        }
        *(undefined4 *)(param_1 + 0x1c04) = 0x1da;
        uVar1 = FUN_00426cb0(param_2);
        return uVar1;
      }
      *(undefined4 *)(param_1 + 0x1c04) = 0x1d9;
      uVar1 = FUN_00426cf0(param_2);
    }
  }
  return uVar1;
}


