/* Module: sfpublish.dll
   Function: FUN_00412960
   Address: 00412960
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00412960(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPBYTE pMem;
  uint uVar3;
  uint uVar4;
  uint local_8;
  int local_4;
  
  local_8 = 0;
  local_4 = 0;
  uVar4 = 2;
  do {
    iVar1 = FUN_0041f830(param_1,uVar4,(LPBYTE)0x0,0,(LPCSTR)0x0,1);
    if (iVar1 != 0) {
      pvVar2 = GlobalAlloc(0x42,iVar1 + 1U);
      pMem = GlobalLock(pvVar2);
      if (pMem == (LPBYTE)0x0) {
        local_8 = 0x8007000e;
      }
      else {
        FUN_0041f830(param_1,uVar4,pMem,iVar1 + 1U,(LPCSTR)0x0,1);
        if (local_4 == uVar4 - 2) {
          local_4 = local_4 + 1;
        }
        else {
          uVar3 = FUN_0041f940(param_1,local_4 + 2,pMem);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          local_8 = FUN_0041fbe0(param_1,uVar4,1);
          if ((int)local_8 < 0) {
            return local_8;
          }
        }
        pvVar2 = GlobalHandle(pMem);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(pMem);
        GlobalFree(pvVar2);
      }
    }
    uVar3 = uVar4 - 1;
    uVar4 = uVar4 + 1;
    if (99 < uVar3) {
      return local_8;
    }
  } while( true );
}


