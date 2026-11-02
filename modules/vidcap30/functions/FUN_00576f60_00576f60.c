/* Module: vidcap30.exe
   Function: FUN_00576f60
   Address: 00576f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00576f60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00576f50();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  uVar1 = FUN_00576ed0();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


