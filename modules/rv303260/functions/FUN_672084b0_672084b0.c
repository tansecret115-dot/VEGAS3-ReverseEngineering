/* Module: rv303260.dll
   Function: FUN_672084b0
   Address: 672084b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_672084b0(int param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  while( true ) {
    SetEvent(*(HANDLE *)(param_1 + 0x5c));
    DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x58),0xffffffff);
    if (DVar1 != 0) break;
    uVar2 = FUN_672085d0(param_1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
  }
  return 0;
}


