/* Module: vegas30k.dll
   Function: FUN_01063a00
   Address: 01063a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01063a00(int param_1,LPSTR param_2,int param_3)

{
  lstrcpynA(param_2,(LPCSTR)(param_1 + 4),param_3);
  param_2[param_3 + -1] = '\0';
  return 0;
}


