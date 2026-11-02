/* Module: rv203260.dll
   Function: thunk_FUN_638a8550
   Address: 638a8750
   Source: Ghidra pseudocode (Stage 10 batch) */


byte thunk_FUN_638a8550(void)

{
  DWORD DVar1;
  
  if ((DAT_638b66e4 != 0) && (0 < (int)DAT_638b66e8)) {
    DVar1 = WaitForMultipleObjects(DAT_638b66e8,(HANDLE *)&DAT_638b6678,1,0xffffffff);
    return -(DVar1 != 0) & 0x6f;
  }
  return 0;
}


