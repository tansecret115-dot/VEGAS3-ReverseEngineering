/* Module: rv303260.dll
   Function: FUN_67208560
   Address: 67208560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_67208560(int param_1)

{
  DWORD DVar1;
  
  if (((DAT_672167d4 != 0) && (*(int *)(param_1 + 0x50) != 0)) &&
     (*(HANDLE *)(param_1 + 0x5c) != (HANDLE)0x0)) {
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x5c),0xffffffff);
    if (DVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x18);
    }
    return 0x6f;
  }
  return 0;
}


