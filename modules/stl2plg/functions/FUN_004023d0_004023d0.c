/* Module: stl2plg.dll
   Function: FUN_004023d0
   Address: 004023d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004023d0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0xc),2000);
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 0xc));
  }
  return 0;
}


