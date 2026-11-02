/* Module: vegas30k.dll
   Function: FUN_011c9e90
   Address: 011c9e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c9e90(int param_1)

{
  MMRESULT MVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x2e4) = 0x3c0;
  if ((*(uint *)(param_1 + 0x58) & 1) == 0) {
    return -0x7ffb1fff;
  }
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 2;
  *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  *(undefined4 *)(param_1 + 600) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x254) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x264) = 0xffffffff;
  MVar1 = waveInStart(*(HWAVEIN *)(param_1 + 0x40));
  iVar2 = FUN_011c1770(MVar1);
  if (iVar2 < 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xfffffffd;
    return iVar2;
  }
  uVar3 = FUN_011c8000();
  *(undefined4 *)(param_1 + 0x26c) = uVar3;
  *(undefined4 *)(param_1 + 0x268) = uVar3;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  FUN_011c7f40(2,0,0);
  return iVar2;
}


