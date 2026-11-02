/* Module: vegas30.exe
   Function: FUN_005b5a50
   Address: 005b5a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b5a50(int param_1,LPCVOID param_2)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = 0;
  BVar1 = WriteFile(*(HANDLE *)(param_1 + 0x118),param_2,0x20,&local_4,(LPOVERLAPPED)0x0);
  if ((BVar1 != 0) && (local_4 == 0x20)) {
    return 0;
  }
  return 0x8004e009;
}


