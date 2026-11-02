/* Module: vegas30k.dll
   Function: FUN_011c15e0
   Address: 011c15e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c15e0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  uVar1 = FUN_011b5d70();
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb | 2;
  return 0;
}


