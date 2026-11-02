/* Module: wavplug.dll
   Function: FUN_5f3a59a0
   Address: 5f3a59a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f3a59a0(HANDLE param_1,LPVOID param_2,LPVOID param_3)

{
  BOOL BVar1;
  
  BVar1 = ReadFile(param_1,param_2,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  if (param_2 != (LPVOID)0x4) {
    return 0x8004e008;
  }
  BVar1 = ReadFile(param_1,param_3,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  return -(uint)(param_2 != (LPVOID)0x4) & 0x8004e008;
}


