/* Module: vegas30.exe
   Function: FUN_005b3b60
   Address: 005b3b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b3b60(undefined4 param_1,undefined4 param_2)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  LPCVOID pMem;
  int iVar3;
  
  FUN_005b8640(param_1,0);
  pvVar1 = GlobalAlloc(0x40,0x430);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  pMem = (LPCVOID)FUN_005b4030();
  if (pMem != (LPCVOID)0x0) {
    *(undefined4 *)((int)pMem + 0x3b4) = param_1;
    iVar3 = FUN_005b4760();
    if (-1 < iVar3) {
      FUN_005b8640(param_1,pMem);
      FUN_005b7b20(param_1);
      FUN_005b7b20(param_1);
      FUN_005b7b30(1);
      FUN_005b7b30(2);
      iVar3 = FUN_005b7b40(param_2);
      if (-1 < iVar3) {
        iVar3 = FUN_005b7b40(param_2);
        if (-1 < iVar3) {
          iVar3 = FUN_005b50e0(0xc0000000,1);
          if (-1 < iVar3) {
            iVar3 = FUN_005b50e0(0xc0000000,1);
            if (iVar3 < 0) {
              FUN_005b5180();
            }
            else {
              iVar3 = FUN_005b52c0();
              if ((-1 < iVar3) && (iVar3 = FUN_005b52c0(), -1 < iVar3)) {
                FUN_005b3ea0(param_1,0);
                return iVar3;
              }
            }
          }
          FUN_005b7bf0();
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        FUN_005b7bf0();
        if (-1 < iVar3) {
          return iVar3;
        }
      }
      FUN_005b4800();
      if (-1 < iVar3) {
        return iVar3;
      }
    }
    FUN_005b40e0();
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    FUN_005b8640(param_1,0);
    return iVar3;
  }
  return -0x7ff8fff2;
}


