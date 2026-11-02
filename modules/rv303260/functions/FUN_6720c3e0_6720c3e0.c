/* Module: rv303260.dll
   Function: FUN_6720c3e0
   Address: 6720c3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6720c3e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x92) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x92))(*(undefined4 *)(param_1 + 0xea));
    return uVar1;
  }
  return 0x6f;
}


