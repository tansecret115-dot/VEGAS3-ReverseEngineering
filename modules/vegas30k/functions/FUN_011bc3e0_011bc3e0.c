/* Module: vegas30k.dll
   Function: FUN_011bc3e0
   Address: 011bc3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011bc3e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (((uVar1 & 1) != 0) && ((uVar1 & 2) != 0)) {
    *(uint *)(param_1 + 8) = uVar1 & 0xfffffffd;
    uVar2 = (**(code **)(param_1 + 0x21c))
                      (param_1,0x24,*(undefined4 *)(param_1 + 0x220),0,0,0xffffffff,0xffffffff,
                       0xffffffff,0xffffffff);
    *(undefined4 *)(param_1 + 0x21c) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
    return uVar2;
  }
  return 1;
}


