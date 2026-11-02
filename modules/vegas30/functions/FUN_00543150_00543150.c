/* Module: vegas30.exe
   Function: FUN_00543150
   Address: 00543150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00543150(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_006575d0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = _SfList_CreateExZ_32(&DAT_006575d0,8,0xffffffff,0xffffffff,0x80000004,0,0,0);
  if ((-1 < iVar1) &&
     (iVar1 = _SfList_CreateExZ_32(&DAT_006575e4,4,0xffffffff,0xffffffff,0x80000004,0,0,0),
     -1 < iVar1)) {
    DAT_006575d4 = GetCurrentThreadId();
    DAT_006575d8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,1,(LPCSTR)0x0);
    if ((DAT_006575d8 != (HANDLE)0x0) &&
       ((DAT_006575e8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0),
        DAT_006575e8 != (HANDLE)0x0 &&
        (DAT_006575dc = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00543070,&DAT_006575d0,0,
                                     (LPDWORD)&DAT_006575e0), DAT_006575dc != (HANDLE)0x0)))) {
      return iVar1;
    }
    iVar1 = -0x7ff8fff2;
  }
  FUN_00543210();
  return iVar1;
}


