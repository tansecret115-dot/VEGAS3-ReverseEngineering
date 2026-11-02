/* Module: Setup.exe
   Function: FUN_00426e50
   Address: 00426e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00426e50(void *this,LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  LPCVOID local_c;
  int local_8;
  int local_4;
  
  iVar2 = 0;
  FUN_0042e120(&local_8,0x7d1,0xb,0x1e);
  local_c = (LPCVOID)0x0;
  iVar1 = FUN_00426910(this,param_1,&local_c);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_0042e1b0(&local_4);
    if (iVar1 < 0) {
      iVar2 = -0x7ffb1ecc;
    }
    else if (local_8 - local_4 < 1) {
      iVar2 = (-(uint)(*(int *)((int)local_c + 4) != 0) & 0xfffffff3) + 0x8004e141;
    }
  }
  if (local_c != (LPCVOID)0x0) {
    FUN_00403420(local_c);
  }
  return iVar2;
}


