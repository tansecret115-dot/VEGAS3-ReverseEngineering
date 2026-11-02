/* Module: encn3260.dll
   Function: FUN_664862d0
   Address: 664862d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664862d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_6648bd10(*(int *)(param_1 + 0x40));
    return uVar1;
  }
  return 0;
}


