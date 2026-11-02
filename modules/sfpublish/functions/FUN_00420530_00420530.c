/* Module: sfpublish.dll
   Function: FUN_00420530
   Address: 00420530
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00420530(int param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x30),0xffffffff);
  if (DVar1 == 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x30));
  }
  return;
}


