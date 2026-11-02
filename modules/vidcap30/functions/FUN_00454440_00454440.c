/* Module: vidcap30.exe
   Function: FUN_00454440
   Address: 00454440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00454440(int param_1,uchar *param_2)

{
  int iVar1;
  void *pvVar2;
  uint _Size;
  
  iVar1 = lstrlenA((LPCSTR)param_2);
  _Size = iVar1 + 1;
  if (*(void **)(param_1 + 4) == (void *)0x0) {
    *(uint *)(param_1 + 8) = _Size;
    pvVar2 = calloc(1,_Size);
  }
  else {
    if (_Size <= *(uint *)(param_1 + 8)) goto LAB_004544a1;
    free(*(void **)(param_1 + 4));
    *(uint *)(param_1 + 8) = _Size;
    pvVar2 = calloc(1,_Size);
  }
  *(void **)(param_1 + 4) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
LAB_004544a1:
  iVar1 = lstrcmpA(*(LPCSTR *)(param_1 + 4),(LPCSTR)param_2);
  if (iVar1 != 0) {
    _mbscpy(*(uchar **)(param_1 + 4),param_2);
  }
  return 1;
}


