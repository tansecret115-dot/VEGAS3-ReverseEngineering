/* Module: sftrans1.dll
   Function: FUN_00538360
   Address: 00538360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00538360(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_00538350();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  uVar1 = FUN_005382d0();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


