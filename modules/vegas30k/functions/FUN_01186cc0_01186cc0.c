/* Module: vegas30k.dll
   Function: FUN_01186cc0
   Address: 01186cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01186cc0(int param_1)

{
  undefined4 uVar1;
  
  ResetEvent(*(HANDLE *)(param_1 + 0x810));
  ResetEvent(*(HANDLE *)(param_1 + 0x818));
  ResetEvent(*(HANDLE *)(param_1 + 0x820));
  *(undefined4 *)(param_1 + 0x858) = 0;
  *(undefined4 *)(param_1 + 0x85c) = 0;
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x850) = 0;
    *(undefined4 *)(param_1 + 0x848) = 0;
    *(undefined4 *)(param_1 + 0x854) = 0;
    *(undefined4 *)(param_1 + 0x84c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_1 + 0x840);
    *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(param_1 + 0x844);
    *(undefined4 *)(param_1 + 0x848) = *(undefined4 *)(param_1 + 0x850);
    *(undefined4 *)(param_1 + 0x84c) = *(undefined4 *)(param_1 + 0x844);
  }
  if ((-1 < *(int *)(param_1 + 0x844)) &&
     ((0 < *(int *)(param_1 + 0x844) || (*(int *)(param_1 + 0x840) != 0)))) {
    do {
      FUN_01186790();
      if ((*(uint *)(*(int *)(param_1 + 0x2c) + 8) & 0x80000000) != 0) {
        *(undefined4 *)(param_1 + 0x8b0) = 1;
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x80000000;
        SetEvent(*(HANDLE *)(param_1 + 0x820));
        return 0;
      }
      if ((*(uint *)(param_1 + 0x20) & 0x4000) != 0) {
        *(undefined4 *)(param_1 + 0x8b0) = 1;
        SetEvent(*(HANDLE *)(param_1 + 0x820));
        return 0;
      }
    } while ((*(int *)(param_1 + 0x85c) < *(int *)(param_1 + 0x844)) ||
            ((*(int *)(param_1 + 0x85c) <= *(int *)(param_1 + 0x844) &&
             (*(uint *)(param_1 + 0x858) < *(uint *)(param_1 + 0x840)))));
  }
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x824) = 1;
  SetEvent(*(HANDLE *)(param_1 + 0x818));
  SetEvent(*(HANDLE *)(param_1 + 0x820));
  if (*(int *)(param_1 + 0x620) == 0) {
    while (WaitForSingleObject(*(HANDLE *)(param_1 + 0x810),2), *(int *)(param_1 + 0x614) != 0) {
      if (*(int *)(param_1 + 0x824) == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x620) != 0) {
        return 0;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


