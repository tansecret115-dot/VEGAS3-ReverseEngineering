/* Module: rmbe3260.dll
   Function: FUN_660560a0
   Address: 660560a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_660560a0(void *this,int param_1)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    if ((*(byte *)((int)this + 0xe) & 1) == 0) {
      pvVar1 = operator_new(param_1 + 0x1f);
    }
    else {
      hMem = GlobalAlloc(0x2002,param_1 + 0x1f);
      pvVar1 = GlobalLock(hMem);
    }
    *(LPVOID *)((int)this + 4) = pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
      *(int *)((int)this + 8) = param_1;
    }
    return 1;
  }
  return 0;
}


