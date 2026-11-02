/* Module: gifplug.dll
   Function: FUN_5f6c3fa0
   Address: 5f6c3fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_5f6c3fa0(int param_1)

{
  BOOL BVar1;
  DWORD local_8;
  uint local_4;
  
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 4),&local_4,1,&local_8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0xffffffff;
  }
  if (local_8 == 0) {
    return 0xffffffff;
  }
  return local_4 & 0xff;
}


