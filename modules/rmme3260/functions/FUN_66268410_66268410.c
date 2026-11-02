/* Module: rmme3260.dll
   Function: FUN_66268410
   Address: 66268410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66268410(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}


