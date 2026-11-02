/* Module: aviplug.dll
   Function: FUN_5f9409d0
   Address: 5f9409d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9409d0(undefined4 *param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *param_1 = 0;
  hMem = GlobalAlloc(0x42,0x10);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = -0x7ff8fff2;
  }
  else {
    iVar2 = FUN_5f9797b0(puVar1 + 3,0x18,-1,-1,4);
    if (-1 < iVar2) {
      *param_1 = puVar1;
      return iVar2;
    }
  }
  FUN_5f940a40(puVar1);
  *param_1 = 0;
  return iVar2;
}


