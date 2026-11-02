/* Module: encn3260.dll
   Function: FUN_664bd7c0
   Address: 664bd7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664bd7c0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = (undefined4 *)FUN_664bab40((int *)(param_1 + 0x30));
    return *puVar1;
  }
  return 0;
}


