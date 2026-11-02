/* Module: mpgaout.dll
   Function: FUN_1000109c
   Address: 1000109c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000109c(int param_1,char *param_2)

{
  vsprintf(&DAT_1001f000,param_2,&stack0x0000000c);
  if ((param_1 != 0) && (*(code **)(param_1 + 0x44e08) != (code *)0x0)) {
    (**(code **)(param_1 + 0x44e08))(&DAT_1001f000);
  }
  return;
}


