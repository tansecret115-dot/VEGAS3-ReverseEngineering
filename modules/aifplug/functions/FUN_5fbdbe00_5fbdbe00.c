/* Module: aifplug.dll
   Function: FUN_5fbdbe00
   Address: 5fbdbe00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5fbdbe00(HANDLE param_1,undefined4 param_2)

{
  DWORD local_4;
  
  FUN_5fbdbc20((undefined1 *)&param_2,1);
  WriteFile(param_1,&param_2,4,&local_4,(LPOVERLAPPED)0x0);
  return -(uint)(local_4 != 4) & 0x8004e009;
}


