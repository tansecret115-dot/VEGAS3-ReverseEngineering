/* Module: encn3260.dll
   Function: FUN_66483800
   Address: 66483800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66483800(int param_1)

{
  undefined4 *puVar1;
  
  *(int *)(param_1 + 0x21) = *(int *)(param_1 + 0x11);
  if (*(int *)(param_1 + 0x11) != 0) {
    puVar1 = (undefined4 *)FUN_664bab40((int *)(param_1 + 0x21));
    return *puVar1;
  }
  return 0;
}


