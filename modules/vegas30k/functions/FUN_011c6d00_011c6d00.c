/* Module: vegas30k.dll
   Function: FUN_011c6d00
   Address: 011c6d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c6d00(int param_1)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  
  if (((*(uint *)(param_1 + 0x68) & 2) == 0) || ((*(uint *)(param_1 + 0x68) & 4) == 0)) {
    return -0x7ffb1fff;
  }
  iVar1 = (**(code **)(param_1 + 0x17c))(param_1,6,*(undefined4 *)(param_1 + 0x180),0,0);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    MVar2 = waveOutPause(*(HWAVEOUT *)(param_1 + 0x6c));
    iVar1 = FUN_011c1770(MVar2);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xffffffef | 8;
      if (0 < *(int *)(param_1 + 0x1c0)) {
        do {
          iVar1 = FUN_011c7300(*(undefined4 *)(*(int *)(param_1 + 0x208) * 0x20 + 0x1c4 + param_1),
                               *(undefined4 *)(param_1 + 0x1bc));
          if (iVar1 < 0) {
            return -0x7ffb1f5f;
          }
          *(uint *)(*(int *)(param_1 + 0x208) * 0x20 + 0x1c8 + param_1) =
               (uint)*(ushort *)(param_1 + 400) * iVar1;
          iVar1 = FUN_011c72a0(*(undefined4 *)(param_1 + 0x208));
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar3 = *(int *)(param_1 + 0x208) + 1;
          *(int *)(param_1 + 0x208) = iVar3;
        } while (iVar3 < *(int *)(param_1 + 0x1c0));
      }
      if (-1 < iVar1) {
        if (*(int *)(param_1 + 0x1c0) <= *(int *)(param_1 + 0x208)) {
          *(undefined4 *)(param_1 + 0x208) = 0;
        }
        iVar1 = (**(code **)(param_1 + 0x17c))(param_1,7,*(undefined4 *)(param_1 + 0x180),0,0);
      }
    }
  }
  return iVar1;
}


