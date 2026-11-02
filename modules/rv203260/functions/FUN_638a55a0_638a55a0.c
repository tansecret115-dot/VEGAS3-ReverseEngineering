/* Module: rv203260.dll
   Function: FUN_638a55a0
   Address: 638a55a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638a55a0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(code **)(param_1 + 0xe8) != (code *)0x0) && (*(int *)(param_1 + 0xb0) == 0)) {
    uVar1 = (**(code **)(param_1 + 0xe8))
                      (param_1 + 0xb0,*(undefined4 *)(param_1 + 0xf6),
                       *(undefined4 *)(param_1 + 0xfa),*(undefined4 *)(param_1 + 0xc0),
                       *(undefined4 *)(param_1 + 0xc4),0);
    return uVar1;
  }
  return 0x6f;
}


