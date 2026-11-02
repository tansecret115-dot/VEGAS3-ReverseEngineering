/* Module: vegas30.exe
   Function: FUN_005f3030
   Address: 005f3030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005f3030(int param_1,undefined4 param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  if (param_3 == (uchar *)0x0) {
    if (*(void **)(param_1 + 0x16c) != (void *)0x0) {
      free(*(void **)(param_1 + 0x16c));
      *(undefined4 *)(param_1 + 0x168) = param_2;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x168) = param_2;
    return 0;
  }
  uVar1 = lstrlenA((LPCSTR)param_3);
  if (*(LPCSTR *)(param_1 + 0x16c) != (LPCSTR)0x0) {
    uVar2 = lstrlenA(*(LPCSTR *)(param_1 + 0x16c));
    if (uVar2 < uVar1) {
      free(*(void **)(param_1 + 0x16c));
      *(undefined4 *)(param_1 + 0x16c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x16c) == 0) {
    pvVar3 = calloc(1,uVar1 + 1);
    *(void **)(param_1 + 0x16c) = pvVar3;
  }
  if (*(uchar **)(param_1 + 0x16c) != (uchar *)0x0) {
    _mbscpy(*(uchar **)(param_1 + 0x16c),param_3);
    *(undefined4 *)(param_1 + 0x168) = param_2;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x168) = param_2;
  return 0x8007000e;
}


