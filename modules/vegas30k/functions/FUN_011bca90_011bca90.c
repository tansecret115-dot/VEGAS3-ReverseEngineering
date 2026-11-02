/* Module: vegas30k.dll
   Function: FUN_011bca90
   Address: 011bca90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bca90(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 8) & 0x14) == 0) {
    return 0;
  }
  iVar1 = FUN_011bc950(0);
  if (-1 < iVar1) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffeb;
    iVar1 = (**(code **)(param_1 + 0x21c))
                      (param_1,0x26,*(undefined4 *)(param_1 + 0x220),0,0,0xffffffff,0xffffffff,
                       0xffffffff,0xffffffff);
  }
  return iVar1;
}


