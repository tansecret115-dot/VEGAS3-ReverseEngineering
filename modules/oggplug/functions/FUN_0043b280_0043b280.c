/* Module: oggplug.dll
   Function: FUN_0043b280
   Address: 0043b280
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_0043b280(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 1 < param_1; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


