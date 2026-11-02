/* Module: oggplug.dll
   Function: FUN_00439d30
   Address: 00439d30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00439d30(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + (param_1 & 1);
  }
  return iVar1;
}


