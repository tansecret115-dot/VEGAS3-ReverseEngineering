/* Module: sfxpfx2.dll
   Function: FUN_5c8d95c0
   Address: 5c8d95c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c8d95c0(int param_1)

{
  uint in_EAX;
  undefined4 uVar1;
  FARPROC pFVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = FUN_5c8d91d0();
  if ((short)uVar1 != 0) {
    return CONCAT22((short)((uint)uVar1 >> 0x10),0xffdd);
  }
  pFVar2 = GetProcAddress(DAT_5c8efc98,s_KALib_Invalidate_5c8e8ec4);
  if (pFVar2 == (FARPROC)0x0) {
    return 0xd8e9;
  }
  iVar3 = (*pFVar2)(param_1);
  return -(uint)(iVar3 != 0) & 0xffffd8e9;
}


