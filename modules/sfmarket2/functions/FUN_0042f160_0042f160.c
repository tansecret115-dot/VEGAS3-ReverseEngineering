/* Module: sfmarket2.dll
   Function: FUN_0042f160
   Address: 0042f160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0042f160(void *this,uchar *param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  
  pMem = *(LPCVOID *)((int)this + 0x1c);
  if (pMem != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(pMem);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  FUN_0042e4d0(param_1,(undefined4 *)((int)this + 0x1c));
  return;
}


