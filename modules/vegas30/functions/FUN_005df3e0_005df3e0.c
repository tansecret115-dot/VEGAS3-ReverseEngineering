/* Module: vegas30.exe
   Function: FUN_005df3e0
   Address: 005df3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_005df3e0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "TRUE";
  if (param_1 == 0) {
    pcVar1 = "FALSE";
  }
  return pcVar1;
}


