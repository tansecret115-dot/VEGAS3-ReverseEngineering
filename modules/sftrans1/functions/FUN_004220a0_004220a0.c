/* Module: sftrans1.dll
   Function: FUN_004220a0
   Address: 004220a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004220a0(undefined4 *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int local_4;
  
  local_4 = 4;
  do {
    puVar2 = param_1 + 2;
    pMem = (LPCVOID)*puVar2;
    if (pMem != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      *puVar2 = 0;
      param_1[1] = 0;
    }
    local_4 = local_4 + -1;
    param_1 = puVar2;
  } while (local_4 != 0);
  return;
}


