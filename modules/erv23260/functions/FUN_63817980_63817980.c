/* Module: erv23260.dll
   Function: FUN_63817980
   Address: 63817980
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63817980(void *this,SIZE_T param_1,byte param_2)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = FUN_63817a10(this);
  if (iVar1 == 0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,param_1,0x2000,4);
    *(LPVOID *)this = pvVar2;
    if ((pvVar2 != (LPVOID)0x0) && ((param_2 & 1) != 0)) {
      pvVar2 = VirtualAlloc(pvVar2,1,0x1000,4);
      if (pvVar2 == (LPVOID)0x0) {
        VirtualFree(*(LPVOID *)this,0,0x8000);
        *(undefined4 *)this = 0;
      }
    }
  }
  if (*(int *)this == 0) {
    return 2;
  }
  *(SIZE_T *)((int)this + 4) = param_1;
  return iVar1;
}


