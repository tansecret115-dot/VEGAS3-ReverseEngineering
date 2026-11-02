/* Module: encn3260.dll
   Function: FUN_664be4d0
   Address: 664be4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664be4d0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar1 = (undefined4 *)FUN_664bab40((int *)(param_1 + 0x24));
    return *puVar1;
  }
  return 0;
}


