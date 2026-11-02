/* Module: vidcap30.exe
   Function: FUN_00443f90
   Address: 00443f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443f90(int param_1,int param_2,uchar *param_3)

{
  int iVar1;
  uchar *_Dest;
  
  FUN_0042f4b0(param_1,1);
  if (param_3 == (uchar *)0x0) {
    if (*(void **)(param_2 + 0x3c) != (void *)0x0) {
      free(*(void **)(param_2 + 0x3c));
      *(undefined4 *)(param_2 + 0x3c) = 0;
    }
    FUN_0042f5d0(param_1,1);
    return 0;
  }
  iVar1 = lstrlenA((LPCSTR)param_3);
  if (*(void **)(param_2 + 0x3c) != (void *)0x0) {
    free(*(void **)(param_2 + 0x3c));
  }
  _Dest = calloc(1,iVar1 + 1);
  if (_Dest != (uchar *)0x0) {
    _mbscpy(_Dest,param_3);
    *(uchar **)(param_2 + 0x3c) = _Dest;
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x800;
    FUN_0042f5d0(param_1,1);
    return 0;
  }
  **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x800;
  FUN_0042f5d0(param_1,1);
  return 0x8007000e;
}


