/* Module: gifplug.dll
   Function: FUN_5f6c48a0
   Address: 5f6c48a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_5f6c48a0(void *this,LPVOID param_1)

{
  void *nNumberOfBytesToRead;
  BOOL BVar1;
  void *local_4;
  
  local_4 = this;
  nNumberOfBytesToRead = (void *)FUN_5f6c3fa0((int)this);
  if ((int)nNumberOfBytesToRead < 1) {
    return 0;
  }
  BVar1 = ReadFile(*(HANDLE *)((int)this + 4),param_1,(DWORD)nNumberOfBytesToRead,(LPDWORD)&local_4,
                   (LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0;
  }
  return (local_4 != nNumberOfBytesToRead) - 1 & (uint)nNumberOfBytesToRead;
}


