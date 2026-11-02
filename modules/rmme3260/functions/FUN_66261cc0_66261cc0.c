/* Module: rmme3260.dll
   Function: FUN_66261cc0
   Address: 66261cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66261cc0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10);
  }
  return 0;
}


