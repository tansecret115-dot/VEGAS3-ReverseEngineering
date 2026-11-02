/* Module: mpgmux.dll
   Function: FUN_100114db
   Address: 100114db
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100114db(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10011ef0((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}


