/* Module: pncrt.dll
   Function: FUN_7800e580
   Address: 7800e580
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_7800e580(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_7800e5c0(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) != 0) {
    iVar1 = _commit(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}


