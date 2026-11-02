/* Module: vidcap30.exe
   Function: FUN_004a1020
   Address: 004a1020
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004a1020(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_004a0530(param_1,2);
  return *pcVar1 == '\0';
}


