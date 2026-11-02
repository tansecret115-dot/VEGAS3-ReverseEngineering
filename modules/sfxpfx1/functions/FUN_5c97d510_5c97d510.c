/* Module: sfxpfx1.dll
   Function: FUN_5c97d510
   Address: 5c97d510
   Source: Ghidra pseudocode (Stage 10 batch) */


ushort __thiscall FUN_5c97d510(void *this,LPCSTR param_1)

{
  int iVar1;
  ushort uVar2;
  LPCVOID local_4;
  
  uVar2 = *(ushort *)((int)this + 0x7cc);
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_5c97d160(this,param_1,&local_4);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_5c985aa0((int)local_4);
    uVar2 = (ushort)iVar1 & uVar2;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_5c942920(local_4);
  }
  return uVar2;
}


