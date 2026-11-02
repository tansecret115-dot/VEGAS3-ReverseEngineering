/* Module: vegas30.exe
   Function: FUN_005b87c0
   Address: 005b87c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005b87c0(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_4;
  
  if (param_1 == 2) {
    if (DAT_0064b4e0 == 0) {
      iVar1 = FUN_00601ab0(&local_4,&param_1,1);
      if (iVar1 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)(param_1 & 0xff)) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e0 = param_1 & 0xff;
      }
    }
    if (0x20 < (int)DAT_0064b4e0) {
      return ((0x30 < (int)DAT_0064b4e0) - 1 & 0x80000009) + 0x7fffffff;
    }
    return 4;
  }
  if (param_1 != 3) {
    return 0;
  }
  if (DAT_0064b4e4 == 0) {
    iVar1 = FUN_00601ab0(&local_4,&param_1,1);
    if (iVar1 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar2 = (param_1 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar2) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e4 = uVar2;
      }
    }
  }
  if (0x10 < (int)DAT_0064b4e4) {
    if (0x20 < (int)DAT_0064b4e4) {
      return ((0x30 < (int)DAT_0064b4e4) - 1 & 0x80000002) + 0x7fffffff;
    }
    return 2;
  }
  return 1;
}


