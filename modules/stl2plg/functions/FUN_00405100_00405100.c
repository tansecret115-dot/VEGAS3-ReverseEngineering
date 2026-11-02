/* Module: stl2plg.dll
   Function: FUN_00405100
   Address: 00405100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405100(HANDLE param_1)

{
  uint lDistanceToMove;
  DWORD DVar1;
  
  lDistanceToMove = FUN_004050b0(param_1);
  if (lDistanceToMove != 0) {
    DVar1 = SetFilePointer(param_1,lDistanceToMove,(PLONG)0x0,1);
    if (DVar1 == 0xffffffff) {
      return 0x80004005;
    }
  }
  return 0;
}


