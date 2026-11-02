/* Module: sfs4rw.dll
   Function: FUN_00415c90
   Address: 00415c90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_00415c90(void *this,uint param_1)

{
  int iVar1;
  uint local_c;
  DWORD local_8 [2];
  
  local_8[0] = 4;
  iVar1 = FUN_004159e0(this,"InstFlags",local_8 + 1,(LPBYTE)&local_c,local_8);
  local_8[1] = 4;
  if (iVar1 == 0) {
    local_c = local_c & ~param_1;
    iVar1 = FUN_00415a80(this,"InstFlags",4,(BYTE *)&local_c,local_8[0]);
  }
  return iVar1 == 0;
}


