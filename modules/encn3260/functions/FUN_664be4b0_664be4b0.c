/* Module: encn3260.dll
   Function: FUN_664be4b0
   Address: 664be4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664be4b0(int param_1)

{
  undefined4 *puVar1;
  
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != 0) {
    puVar1 = (undefined4 *)FUN_664bab40((int *)(param_1 + 0x24));
    return *puVar1;
  }
  return 0;
}


