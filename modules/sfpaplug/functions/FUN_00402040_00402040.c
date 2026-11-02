/* Module: sfpaplug.dll
   Function: FUN_00402040
   Address: 00402040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00402040(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0x80004003;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 100))
                    (*(int **)(param_1 + 0x28),*(int *)(param_1 + 0x30));
  return uVar1;
}


