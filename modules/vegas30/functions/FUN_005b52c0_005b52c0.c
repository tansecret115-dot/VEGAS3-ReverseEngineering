/* Module: vegas30.exe
   Function: FUN_005b52c0
   Address: 005b52c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005b52c0(int param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  LONG local_4;
  
  local_4 = 0;
  SetFilePointer(*(HANDLE *)(param_1 + 0x118),0,&local_4,0);
  uVar1 = riff_WriteFileID(*(undefined4 *)(param_1 + 0x118),0x4c444555,4);
  BVar2 = SetEndOfFile(*(HANDLE *)(param_1 + 0x118));
  if (BVar2 == 0) {
    uVar1 = 0x80004005;
  }
  FlushFileBuffers(*(HANDLE *)(param_1 + 0x118));
  return uVar1;
}


