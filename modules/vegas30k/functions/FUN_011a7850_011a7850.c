/* Module: vegas30k.dll
   Function: FUN_011a7850
   Address: 011a7850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011a7850(int param_1,LPSTR param_2,uint param_3)

{
  if (0x104 < param_3) {
    param_3 = 0x104;
  }
  lstrcpynA(param_2,(LPCSTR)(param_1 + 0x1ec),param_3);
  param_2[param_3 - 1] = '\0';
  return 0;
}


