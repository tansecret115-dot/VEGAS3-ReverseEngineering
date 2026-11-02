/* Module: erv23260.dll
   Function: FUN_63817a60
   Address: 63817a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63817a60(void *this,int *param_1)

{
  LPVOID pvVar1;
  
  if (*(int *)*param_1 == -0x3ffffffb) {
    pvVar1 = (LPVOID)((int *)*param_1)[6];
    if ((*(LPVOID *)this <= pvVar1) &&
       (pvVar1 <= (LPVOID)(*(int *)((int)this + 4) + (int)*(LPVOID *)this))) {
      pvVar1 = VirtualAlloc(pvVar1,*(SIZE_T *)((int)this + 8),0x1000,4);
      return -(uint)(pvVar1 != (LPVOID)0x0);
    }
  }
  return 0;
}


