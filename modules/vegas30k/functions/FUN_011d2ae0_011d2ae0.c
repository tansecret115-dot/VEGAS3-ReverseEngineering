/* Module: vegas30k.dll
   Function: FUN_011d2ae0
   Address: 011d2ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011d2ae0(int param_1)

{
  uint uVar1;
  int iVar2;
  MMRESULT MVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x154) & 1) == 0) {
    return -0x7ffb1fff;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar2 = FUN_011d2ab0();
    return iVar2;
  }
  iVar2 = FUN_011c3870(param_1,*(undefined4 *)(param_1 + 0x40));
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
    uVar1 = *(uint *)(param_1 + 0x154);
    if (((uVar1 & 2) == 0) || ((uVar1 & 4) != 0)) {
      *(uint *)(param_1 + 0x154) = uVar1 & 0xfffffffd | 4;
      MVar3 = waveOutPause(*(HWAVEOUT *)(param_1 + 0x3c));
      iVar2 = FUN_011c1770(MVar3);
    }
    else {
      *(uint *)(param_1 + 0x154) = uVar1 & 0xfffffffd | 4;
      MVar3 = waveOutPause(*(HWAVEOUT *)(param_1 + 0x3c));
      iVar2 = FUN_011c1770(MVar3);
    }
    if (-1 < iVar2) {
      *(undefined4 *)(param_1 + 500) = 0;
      if (0 < *(int *)(param_1 + 0x1ec)) {
        do {
          iVar4 = FUN_011d1750(*(undefined4 *)((*(int *)(param_1 + 500) + 0xd) * 0x20 + param_1),
                               *(undefined4 *)(param_1 + 0x1e8));
          if (iVar4 < 0) {
            iVar2 = -0x7ffb1f5f;
            break;
          }
          *(uint *)(*(int *)(param_1 + 500) * 0x20 + 0x1a4 + param_1) =
               (uint)*(ushort *)(*(int *)(param_1 + 0x19c) + 0xc) * iVar4;
          if ((*(uint *)(param_1 + 0x154) & 0x200) == 0) {
            FUN_011d2c60(*(undefined4 *)(param_1 + 500));
          }
          iVar4 = *(int *)(param_1 + 500) + 1;
          *(int *)(param_1 + 500) = iVar4;
        } while (iVar4 < *(int *)(param_1 + 0x1ec));
      }
      if (*(int *)(param_1 + 500) == *(int *)(param_1 + 0x1ec)) {
        *(undefined4 *)(param_1 + 500) = 0;
      }
    }
  }
  return iVar2;
}


