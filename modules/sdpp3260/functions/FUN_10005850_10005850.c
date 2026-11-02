/* Module: sdpp3260.dll
   Function: FUN_10005850
   Address: 10005850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_10005850(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined4 *)FUN_10002800((int *)(param_1 + 0x10));
    uVar1 = *puVar2;
  }
  return uVar1;
}


