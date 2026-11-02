/* Module: sctplug.dll
   Function: FUN_00414450
   Address: 00414450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00414450(HANDLE param_1,int *param_2,undefined4 *param_3)

{
  HANDLE hFile;
  BOOL BVar1;
  int local_8;
  DWORD local_4;
  
  hFile = param_1;
  FUN_00414310(param_1,&param_1,&local_8);
  if (param_2 != (int *)0x0) {
    *param_2 = local_8 + -4;
  }
  if (param_1 != (HANDLE)0x46464952) {
    return 0x8004e080;
  }
  BVar1 = ReadFile(hFile,&param_1,4,&local_4,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return 0x8004e008;
  }
  if (local_4 != 4) {
    return 0x8004e008;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1;
  }
  return 0;
}


