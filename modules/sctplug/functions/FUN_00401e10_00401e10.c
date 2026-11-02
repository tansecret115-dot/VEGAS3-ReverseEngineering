/* Module: sctplug.dll
   Function: FUN_00401e10
   Address: 00401e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00401e10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0x80004003;
  }
  FUN_00401e40(param_1);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 100))
                    (*(int **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  return uVar1;
}


