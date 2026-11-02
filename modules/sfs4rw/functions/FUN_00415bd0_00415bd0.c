/* Module: sfs4rw.dll
   Function: FUN_00415bd0
   Address: 00415bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_00415bd0(void *this,uint param_1)

{
  int iVar1;
  DWORD local_c [2];
  uint local_4;
  
  local_c[0] = 4;
  local_c[1] = 4;
  iVar1 = FUN_004159e0(this,"InstFlags",local_c + 1,(LPBYTE)&local_4,local_c);
  if (iVar1 == 0) {
    return local_4 & param_1;
  }
  return 0;
}


