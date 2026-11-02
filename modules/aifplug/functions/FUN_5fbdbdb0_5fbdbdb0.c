/* Module: aifplug.dll
   Function: FUN_5fbdbdb0
   Address: 5fbdbdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5fbdbdb0(HANDLE param_1,undefined4 *param_2)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *param_2;
  local_4 = param_2[1];
  FUN_5fbdbc20((undefined1 *)&local_8,2);
  WriteFile(param_1,&local_8,8,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  return -(uint)(param_2 != (undefined4 *)0x8) & 0x8004e009;
}


