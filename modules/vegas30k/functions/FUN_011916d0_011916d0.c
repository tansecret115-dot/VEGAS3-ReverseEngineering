/* Module: vegas30k.dll
   Function: FUN_011916d0
   Address: 011916d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_011916d0(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  if ((*(uint *)(param_3 + 0xc) & 0x200) != 0) {
    return 1;
  }
  if (param_2 < 0x3c3) {
    if (param_2 != 0x3c2) {
      if (2 < param_2) {
        if (param_2 != 0x3c1) {
          return 0;
        }
        return 1;
      }
      if (((param_2 != 2) && (param_2 != 0)) && (param_2 != 1)) {
        return 0;
      }
    }
  }
  else {
    if (param_2 != 0x3c3) {
      if (param_2 == 0x3c4) {
        FUN_011910d0(param_1,param_5,param_6,param_7,param_8);
        return 1;
      }
      if (param_2 != 0x3cc) {
        return 0;
      }
      FUN_01190d20(param_1,param_4,param_5,param_8);
      return 0;
    }
    iVar1 = *(int *)(param_3 + 0x115c);
    while (iVar1 != 0) {
      *(int *)(param_3 + 0x115c) = iVar1 + -1;
      FUN_01190820(param_1,*(undefined4 *)(param_3 + 0x15c + (iVar1 + -1) * 4),0xffffffff,0xffffffff
                  );
      iVar1 = *(int *)(param_3 + 0x115c);
    }
    FUN_01190820(param_1,param_4,param_5,param_8);
  }
  return 1;
}


