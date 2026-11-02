/* Module: vegas30.exe
   Function: FUN_00501c20
   Address: 00501c20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00501c20(HANDLE param_1)

{
  DWORD DVar1;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  undefined2 local_8;
  undefined1 local_6;
  DWORD local_4;
  
  local_8 = DAT_00610cac;
  lpNumberOfBytesWritten = &local_4;
  lpOverlapped = (LPOVERLAPPED)0x0;
  local_6 = DAT_00610cae;
  DVar1 = lstrlenA((LPCSTR)&local_8);
  WriteFile(param_1,&local_8,DVar1,lpNumberOfBytesWritten,lpOverlapped);
  DVar1 = lstrlenA((LPCSTR)&local_8);
  return -(uint)(local_4 != DVar1) & 0x8004e009;
}


