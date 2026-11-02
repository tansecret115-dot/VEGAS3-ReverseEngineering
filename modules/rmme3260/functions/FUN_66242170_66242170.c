/* Module: rmme3260.dll
   Function: FUN_66242170
   Address: 66242170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66242170(int param_1)

{
  if ((*(int *)(param_1 + 0x6c) == param_1) && (*(int *)(param_1 + 0x140) != 0)) {
    FUN_6623e030(param_1);
    FUN_6624bf90((int *)(*(int *)(param_1 + 0x140) + 0x48));
    FUN_6623e0c0(param_1);
  }
  return;
}


