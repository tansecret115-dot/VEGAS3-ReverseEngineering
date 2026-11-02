/* Module: vidcap30.exe
   Function: FUN_0057f950
   Address: 0057f950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057f950(int param_1)

{
  undefined4 uVar1;
  
  if ((*(HANDLE *)(param_1 + 0xd0) != (HANDLE)0x0) && (*(int *)(param_1 + 0xd4) != 0)) {
    ResetEvent(*(HANDLE *)(param_1 + 0xd0));
    uVar1 = FUN_0057e330();
    return uVar1;
  }
  return 0x80004005;
}


