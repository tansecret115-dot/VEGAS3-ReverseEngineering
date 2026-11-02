/* Module: mpgmux.dll
   Function: FUN_1000eb7a
   Address: 1000eb7a
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000eb7a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000eba8(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_10012446(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


