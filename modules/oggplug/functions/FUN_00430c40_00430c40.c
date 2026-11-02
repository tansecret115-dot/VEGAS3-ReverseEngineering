/* Module: oggplug.dll
   Function: FUN_00430c40
   Address: 00430c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00430c40(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 1 < param_1; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


