/* Module: sfs4rw.dll
   Function: FUN_00411280
   Address: 00411280
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00411280(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  HKEY__ local_4;
  
  FUN_00418010((int *)&local_8);
  uVar1 = FUN_004112e0(param_1,&local_4);
  if ((int)uVar1 < 0) {
    return -0x7ff8fffb;
  }
  if (local_8 < (uint)local_4.unused) {
    return 0;
  }
  iVar2 = FUN_004149f0(param_1,(HKEY)0x0,"4",4,(byte *)&local_8,4,1,1);
  return iVar2;
}


