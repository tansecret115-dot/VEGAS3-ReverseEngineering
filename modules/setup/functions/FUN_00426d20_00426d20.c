/* Module: Setup.exe
   Function: FUN_00426d20
   Address: 00426d20
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort __thiscall FUN_00426d20(void *this,LPCSTR param_1)

{
  int iVar1;
  ushort uVar2;
  LPCVOID local_4;
  
  uVar2 = *(ushort *)((int)this + 0x7cc);
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_00426910(this,param_1,&local_4);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0042f5a0((int)local_4);
    uVar2 = (ushort)iVar1 & ~uVar2;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_00403420(local_4);
  }
  return uVar2;
}


