/* Module: oggplug.dll
   Function: FUN_00438c50
   Address: 00438c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00438c50(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 1 < param_1; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


