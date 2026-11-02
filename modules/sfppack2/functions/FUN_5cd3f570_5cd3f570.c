/* Module: sfppack2.dll
   Function: FUN_5cd3f570
   Address: 5cd3f570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cd3f570(int param_1)

{
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  return *(undefined4 *)(param_1 + 0xc);
}


