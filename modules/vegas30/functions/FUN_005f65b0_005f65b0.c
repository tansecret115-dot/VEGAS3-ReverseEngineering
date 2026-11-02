/* Module: vegas30.exe
   Function: FUN_005f65b0
   Address: 005f65b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005f65b0(int param_1,LPSTR param_2,int param_3)

{
  lstrcpynA(param_2,(LPCSTR)(param_1 + 0x10),param_3);
  param_2[param_3 + -1] = '\0';
  return 0;
}


