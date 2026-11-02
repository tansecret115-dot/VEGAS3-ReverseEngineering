/* Module: vegas30.exe
   Function: FUN_005b7ad0
   Address: 005b7ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005b7ad0(DWORD param_1,byte param_2,int *param_3)

{
  BOOL BVar1;
  DWORD local_4;
  
  if ((param_2 & 1) != 0) {
    local_4 = param_1;
    BVar1 = ReadFile(*(HANDLE *)(param_1 + 0x118),&param_2,1,&local_4,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      return 0x8004e008;
    }
    if (local_4 != 1) {
      return 0x8004e008;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *param_3 + 1;
    }
  }
  return 0;
}


