/* Module: rv203260.dll
   Function: FUN_638ad140
   Address: 638ad140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638ad140(int param_1)

{
  undefined4 uVar1;
  
  if (*(code **)(param_1 + 0x92) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x92))(*(undefined4 *)(param_1 + 0x156));
    return uVar1;
  }
  return 0x6f;
}


