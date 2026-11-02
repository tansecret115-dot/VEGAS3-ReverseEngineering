/* Module: vfplugs.dll
   Function: FUN_00403890
   Address: 00403890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00403890(void *this,int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  
  if (*(LPCVOID *)((int)this + 700) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 700));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)this + 700));
    GlobalFree(pvVar1);
    *(undefined4 *)((int)this + 0x2b8) = 0;
    *(undefined4 *)((int)this + 700) = 0;
  }
  if (0 < param_1) {
    pvVar1 = GlobalAlloc(2,param_1 * 2);
    pvVar2 = GlobalLock(pvVar1);
    *(LPVOID *)((int)this + 700) = pvVar2;
  }
  *(int *)((int)this + 0x2b8) = param_1;
  return;
}


