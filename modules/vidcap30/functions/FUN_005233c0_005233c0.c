/* Module: vidcap30.exe
   Function: FUN_005233c0
   Address: 005233c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005233c0(HANDLE param_1,LPDWORD param_2,LPVOID param_3)

{
  DWORD local_4;
  
  local_4 = 0x5000;
  *param_2 = 0xffffffff;
  WNetEnumResourceA(param_1,param_2,param_3,&local_4);
  return;
}


