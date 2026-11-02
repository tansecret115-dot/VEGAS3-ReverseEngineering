/* Module: vegas30k.dll
   Function: FUN_01018d70
   Address: 01018d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01018d70(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_01018c20(param_1);
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)FUN_01018c60(param_1);
    return puVar2;
  }
  return &DAT_80070057;
}


