/* Module: vegas30.exe
   Function: FUN_005b9640
   Address: 005b9640
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b9640(LPCRITICAL_SECTION param_1)

{
  LONG LVar1;
  int iVar2;
  int iVar3;
  HGLOBAL hMem;
  LPCRITICAL_SECTION p_Var4;
  HANDLE pvVar5;
  
  p_Var4 = param_1 + 0x82;
  iVar2 = _SfList_CreateExZ_32(&p_Var4->LockCount,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (iVar2 < 0) {
    return iVar2;
  }
  LVar1 = p_Var4->LockCount;
  iVar3 = FUN_0059e0c0(0);
  pvVar5 = (HANDLE)0x0;
  if (0 < iVar3) {
    while( true ) {
      hMem = GlobalAlloc(0x40,0xa58);
      p_Var4 = GlobalLock(hMem);
      if (p_Var4 == (LPCRITICAL_SECTION)0x0) break;
      p_Var4[10].LockSemaphore = pvVar5;
      InitializeCriticalSection(p_Var4);
      param_1 = p_Var4;
      iVar2 = _SfList_InsertList_16(LVar1,0xffffffff,&param_1,1);
      if (iVar2 < 0) {
        return iVar2;
      }
      pvVar5 = (HANDLE)((int)pvVar5 + 1);
      if (iVar3 <= (int)pvVar5) {
        return iVar2;
      }
    }
    iVar2 = -0x7ff8fff2;
  }
  return iVar2;
}


