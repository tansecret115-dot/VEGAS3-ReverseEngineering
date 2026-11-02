/* Module: sftrans1.dll
   Function: FUN_0041dc10
   Address: 0041dc10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041dc10(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x2d0) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2d0));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x2d0));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  return;
}


