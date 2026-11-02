/* Module: vegas30.exe
   Function: FUN_00546f80
   Address: 00546f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00546f80(int param_1)

{
  int iVar1;
  
  ResetEvent(*(HANDLE *)(param_1 + 0x10));
  iVar1 = FUN_005446f0(6,0,0,0,0,0,0);
  if (iVar1 != 0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  }
  return 0;
}


