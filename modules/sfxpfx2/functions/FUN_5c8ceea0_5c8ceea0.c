/* Module: sfxpfx2.dll
   Function: FUN_5c8ceea0
   Address: 5c8ceea0
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort __thiscall FUN_5c8ceea0(void *this,LPCSTR param_1)

{
  int iVar1;
  ushort uVar2;
  LPCVOID local_4;
  
  uVar2 = *(ushort *)((int)this + 0x7cc);
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_5c8cea90(this,param_1,&local_4);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_5c8d73d0((int)local_4);
    uVar2 = (ushort)iVar1 & ~uVar2;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_5c892960(local_4);
  }
  return uVar2;
}


