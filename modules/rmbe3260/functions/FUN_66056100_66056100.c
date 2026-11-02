/* Module: rmbe3260.dll
   Function: FUN_66056100
   Address: 66056100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66056100(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = *(LPCVOID *)(param_1 + 4);
  if (pMem != (LPCVOID)0x0) {
    if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 4));
      GlobalFree(pvVar1);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
    operator_delete(pMem);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


