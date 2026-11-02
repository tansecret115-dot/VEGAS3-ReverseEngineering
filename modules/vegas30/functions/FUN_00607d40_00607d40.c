/* Module: vegas30.exe
   Function: FUN_00607d40
   Address: 00607d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00607d40(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00607d30();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  uVar1 = FUN_00607cb0();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


