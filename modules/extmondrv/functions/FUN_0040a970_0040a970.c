/* Module: extmondrv.dll
   Function: FUN_0040a970
   Address: 0040a970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a970(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  if (*(int *)(param_1 + 0x444) != 0) {
    ICSendMessage(*(int *)(param_1 + 0x444),0x4028,0,0);
    ICSendMessage(*(undefined4 *)(param_1 + 0x444),0x4013,0,0);
    ICSendMessage(*(undefined4 *)(param_1 + 0x444),0x4015,0,0);
    ICClose(*(undefined4 *)(param_1 + 0x444));
    *(undefined4 *)(param_1 + 0x444) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


