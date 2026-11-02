/* Module: mpegin.dll
   Function: FUN_1000f41a
   Address: 1000f41a
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000f41a(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10012630((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}


