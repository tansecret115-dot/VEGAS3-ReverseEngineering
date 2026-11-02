/* Module: mpegin.dll
   Function: FUN_10014c6e
   Address: 10014c6e
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10014c6e(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10014c9c(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_10015303(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


