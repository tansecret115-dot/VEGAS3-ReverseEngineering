/* Module: vegas30k.dll
   Function: FUN_011af0c0
   Address: 011af0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011af0c0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x810) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x810));
  }
  if (*(HANDLE *)(param_1 + 0x818) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x818));
  }
  if (*(HANDLE *)(param_1 + 0x81c) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x81c));
  }
  if (*(HANDLE *)(param_1 + 0x820) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x820));
  }
  if (*(HANDLE *)(param_1 + 0x814) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x814));
  }
  if (*(HANDLE *)(param_1 + 0x828) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x828));
  }
  if (*(HANDLE *)(param_1 + 0x82c) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x82c));
  }
  if (*(HANDLE *)(param_1 + 0x830) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x830));
  }
  if (*(HANDLE *)(param_1 + 0x834) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x834),20000);
  }
  if (*(HANDLE *)(param_1 + 0x810) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x810));
  }
  if (*(HANDLE *)(param_1 + 0x818) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x818));
  }
  if (*(HANDLE *)(param_1 + 0x81c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x81c));
  }
  if (*(HANDLE *)(param_1 + 0x820) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x820));
  }
  if (*(HANDLE *)(param_1 + 0x814) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x814));
  }
  if (*(HANDLE *)(param_1 + 0x828) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x828));
  }
  if (*(HANDLE *)(param_1 + 0x82c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x82c));
  }
  if (*(HANDLE *)(param_1 + 0x830) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x830));
  }
  if (*(HANDLE *)(param_1 + 0x834) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x834));
  }
  *(undefined4 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  *(undefined4 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x814) = 0;
  *(undefined4 *)(param_1 + 0x828) = 0;
  *(undefined4 *)(param_1 + 0x82c) = 0;
  *(undefined4 *)(param_1 + 0x834) = 0;
  return 0;
}


