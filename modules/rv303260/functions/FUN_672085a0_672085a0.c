/* Module: rv303260.dll
   Function: FUN_672085a0
   Address: 672085a0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte FUN_672085a0(void)

{
  DWORD DVar1;
  
  if ((DAT_672167d4 != 0) && (0 < (int)DAT_672167d8)) {
    DVar1 = WaitForMultipleObjects(DAT_672167d8,(HANDLE *)&DAT_67216768,1,0xffffffff);
    return -(DVar1 != 0) & 0x6f;
  }
  return 0;
}


