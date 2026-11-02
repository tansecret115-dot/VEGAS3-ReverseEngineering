/* Module: rv303260.dll
   Function: FUN_67208510
   Address: 67208510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_67208510(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  if (((DAT_672167d4 != 0) && (*(int *)(param_1 + 0x50) != 0)) && (*(int *)(param_1 + 0x58) != 0)) {
    ResetEvent(*(HANDLE *)(param_1 + 0x5c));
    BVar1 = SetEvent(*(HANDLE *)(param_1 + 0x58));
    return (-(uint)(BVar1 != 0) & 0xffffff91) + 0x6f;
  }
  iVar2 = FUN_672085d0(param_1);
  *(int *)(param_1 + 0x18) = iVar2;
  return iVar2;
}


