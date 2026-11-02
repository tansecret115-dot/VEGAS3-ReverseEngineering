/* Module: vegas30k.dll
   Function: FUN_0118b7c0
   Address: 0118b7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0118b7c0(int param_1,DWORD param_2)

{
  bool bVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  if ((*(uint *)(param_1 + 0x50) & 1) == 0) {
    return 0x8000ffff;
  }
  bVar1 = true;
  DVar2 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x3c) == DVar2) {
    bVar1 = true;
  }
  else {
    DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),0);
    if (DVar3 == 0) {
      ResetEvent(*(HANDLE *)(param_1 + 0x38));
      *(DWORD *)(param_1 + 0x3c) = DVar2;
    }
    else {
      if (DVar3 == 0x102) {
        DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),param_2);
        if (DVar3 == 0) {
          ResetEvent(*(HANDLE *)(param_1 + 0x38));
          *(DWORD *)(param_1 + 0x3c) = DVar2;
          goto LAB_0118b839;
        }
      }
      bVar1 = false;
    }
LAB_0118b839:
    if (!bVar1) goto LAB_0118b858;
  }
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x38),0);
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  SetEvent(*(HANDLE *)(param_1 + 0x38));
LAB_0118b858:
  return (uint)!bVar1;
}


