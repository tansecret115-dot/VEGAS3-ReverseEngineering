/* Module: sftrans1.dll
   Function: FUN_0054f050
   Address: 0054f050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0054f050(int param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)(param_1 + 0x150) != 0) &&
     (puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8),
     puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return 0;
}


