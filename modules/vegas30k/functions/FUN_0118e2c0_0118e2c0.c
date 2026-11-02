/* Module: vegas30k.dll
   Function: FUN_0118e2c0
   Address: 0118e2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __fastcall FUN_0118e2c0(int param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    uVar1 = FUN_01177b20();
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return CONCAT44(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x24) +
                  (uint)CARRY4(*(uint *)(param_1 + 0x38),*(uint *)(param_1 + 0x20)),
                  *(uint *)(param_1 + 0x38) + *(uint *)(param_1 + 0x20));
}


