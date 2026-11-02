/* Module: vegas30.exe
   Function: FUN_004c3e90
   Address: 004c3e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3e90(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x5d0);
    if ((param_3 < 3) || (0x1c < param_3)) {
      if ((0x3f < param_3) && (param_3 < 0x60)) {
        iVar2 = param_3 * 8;
        iVar1 = param_3 - 0x40;
        param_3 = param_3 + 0x1c0;
        if (*(float *)(param_2 + -0x1a0 + iVar2) == (float)_DAT_00610fd8) {
          *(undefined4 *)(param_2 + 0x60 + iVar1 * 8) = _DAT_0064883c;
        }
      }
    }
    else {
      iVar2 = param_3 * 8;
      iVar1 = param_3 - 3;
      param_3 = param_3 + 0xfd;
      if (*(float *)(param_2 + 0x148 + iVar2) == (float)_DAT_00610fd8) {
        *(undefined4 *)(param_2 + 0x160 + iVar1 * 8) = _DAT_0064883c;
      }
    }
    *(uint *)(iVar3 + 8) = param_3 - 1;
    FUN_004c3de0(param_1,param_2,param_3);
    (**(code **)(*DAT_0064b144 + 0xd4))
              (DAT_0064b144,1,*(undefined4 *)(param_2 + 0x44),0,0,0xffffffff,0xffffffff);
  }
  return;
}


