/* Module: rv103260.dll
   Function: FUN_636a35c0
   Address: 636a35c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_636a35c0(int param_1)

{
  undefined4 uVar1;
  
  FUN_636a1150(*(int *)(param_1 + 0x8c));
  FUN_636a11b0(*(int *)(param_1 + 0x8c));
  if (*(code **)(param_1 + 0x84) != (code *)0x0) {
    (**(code **)(param_1 + 0x84))();
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x60))
                        (*(undefined4 *)(param_1 + 0x90),*(int *)(param_1 + 0x8c) + 0x194);
      return uVar1;
    }
  }
  return 0x6f;
}


