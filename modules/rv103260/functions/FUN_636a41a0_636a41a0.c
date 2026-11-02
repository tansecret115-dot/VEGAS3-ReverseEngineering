/* Module: rv103260.dll
   Function: FUN_636a41a0
   Address: 636a41a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636a41a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x60))
                      (*(undefined4 *)(param_1 + 0x70),*(int *)(param_1 + 0x6c) + 0x194);
    return uVar1;
  }
  return 0x6f;
}


