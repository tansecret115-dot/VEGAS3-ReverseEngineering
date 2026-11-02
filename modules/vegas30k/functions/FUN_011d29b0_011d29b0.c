/* Module: vegas30k.dll
   Function: FUN_011d29b0
   Address: 011d29b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011d29b0(int param_1)

{
  int iVar1;
  MMRESULT MVar2;
  
  if ((*(byte *)(param_1 + 0x154) & 1) == 0) {
    return -0x7ffb1fff;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = FUN_011d2960();
    return iVar1;
  }
  iVar1 = FUN_011c3850(param_1,*(undefined4 *)(param_1 + 0x40));
  if (-1 < iVar1) {
    if (((*(uint *)(param_1 + 0x154) & 4) != 0) && (*(int *)(param_1 + 0x158) == 3)) {
      *(undefined4 *)(param_1 + 0x158) = 0x3bd;
    }
    *(undefined4 *)(param_1 + 0x158) = 0x3bd;
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x154) & 0xfffffff9;
    *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
    MVar2 = waveOutReset(*(HWAVEOUT *)(param_1 + 0x3c));
    iVar1 = FUN_011c1770(MVar2);
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x234) = 0;
    (**(code **)(param_1 + 0x15c))(param_1,5,*(undefined4 *)(param_1 + 0x160),0,0,0,0);
  }
  return iVar1;
}


