/* Module: sfcdi.dll
   Function: FUN_5bf12140
   Address: 5bf12140
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf12140(HANDLE param_1,int *param_2)

{
  HANDLE pvVar1;
  int iVar2;
  int local_c [2];
  LONG local_4;
  
  pvVar1 = param_1;
  local_c[1] = 0;
  local_4 = 0;
  SetFilePointer(param_1,0,&local_4,0);
  iVar2 = FUN_5bf342d0(pvVar1,local_c,&param_1);
  if (-1 < iVar2) {
    if (param_1 == (HANDLE)0x42544443) {
      if (param_2 != (int *)0x0) {
        *param_2 = local_c[0];
      }
      return 0;
    }
    iVar2 = -0x7ffb1ff5;
  }
  return iVar2;
}


