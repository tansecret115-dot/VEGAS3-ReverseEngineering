/* Module: vidcap30.exe
   Function: FUN_0043fd80
   Address: 0043fd80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043fd80(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = 1;
  if (param_4 != 2) {
    if (param_4 == 3) {
      *(undefined4 *)(param_1 + 0x1c04) = 0;
      return 1;
    }
    if (param_4 != 0x2a) {
      if (param_3 == 0x1d9) {
        uVar4 = 0xffffffff;
        uVar3 = 0xffffffff;
      }
      else {
        if (param_3 != 0x1da) {
          return -0x7fffbfff;
        }
        uVar4 = 0;
        uVar3 = 1;
      }
      iVar2 = FUN_00425060(param_1 + 0xd8,uVar3,uVar4);
      if (iVar2 < 0) {
        return iVar2;
      }
      FUN_0043aea0(param_1);
      return iVar2;
    }
  }
  iVar1 = FUN_00424c80(param_2);
  if (iVar1 == 0) {
    if (param_3 == 0x1d9) {
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffff;
    }
    else {
      if (param_3 != 0x1da) {
        return -0x7fffbfff;
      }
      uVar4 = 0;
      uVar3 = 1;
    }
    iVar2 = FUN_00425060(param_1 + 0xd8,uVar3,uVar4);
    if (-1 < iVar2) {
      FUN_0043aea0(param_1);
    }
  }
  return iVar2;
}


