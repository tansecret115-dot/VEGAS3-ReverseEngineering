/* Module: sfmarket2.dll
   Function: FUN_0042e690
   Address: 0042e690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042e690(int param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x30),0xffffffff);
  if (DVar1 == 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x30));
  }
  return;
}


