/* Module: encn3260.dll
   Function: FUN_664be2a0
   Address: 664be2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664be2a0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined4 *)FUN_664bab40((int *)(param_1 + 0x18));
    return *puVar1;
  }
  return 0;
}


