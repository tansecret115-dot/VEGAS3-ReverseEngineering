/* Module: mcmpgdec.dll
   Function: FUN_1000bb3c
   Address: 1000bb3c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000bb3c(int param_1,char *param_2)

{
  if (*(char **)(param_1 + 4) == (char *)0x0) {
    FUN_10026694((HWND)0x0,param_2,&DAT_10036890,0x30);
  }
  else {
    strcpy(*(char **)(param_1 + 4),param_2);
  }
  return;
}


