/* Module: vegas30.exe
   Function: FUN_005b5a00
   Address: 005b5a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b5a00(int param_1,LPVOID param_2)

{
  BOOL BVar1;
  DWORD local_4;
  
  local_4 = 0;
  BVar1 = ReadFile(*(HANDLE *)(param_1 + 0x118),param_2,0xac,&local_4,(LPOVERLAPPED)0x0);
  if ((BVar1 != 0) && (local_4 == 0xac)) {
    return 0;
  }
  return 0x8004e008;
}


