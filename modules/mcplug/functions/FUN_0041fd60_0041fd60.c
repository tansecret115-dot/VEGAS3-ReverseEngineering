/* Module: mcplug.dll
   Function: FUN_0041fd60
   Address: 0041fd60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041fd60(undefined4 param_1,undefined4 param_2,uchar *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  pDVar2 = &DAT_00487edc;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar2 = 0;
    pDVar2 = pDVar2 + 1;
  }
  DAT_00487edc = GetCurrentThreadId();
  DAT_00487ee0 = param_1;
  DAT_00487ee4 = param_2;
  _mbscpy(&DAT_00487ef0,param_3);
  return 1;
}


