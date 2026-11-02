/* Module: vidcap30.exe
   Function: FUN_00460b30
   Address: 00460b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00460b30(int param_1,uchar *param_2)

{
  int iVar1;
  void *pvVar2;
  uint _Size;
  
  iVar1 = lstrlenA((LPCSTR)param_2);
  _Size = iVar1 + 1;
  if (*(void **)(param_1 + 0x28) == (void *)0x0) {
    *(uint *)(param_1 + 0x2c) = _Size;
    pvVar2 = calloc(1,_Size);
  }
  else {
    if (_Size <= *(uint *)(param_1 + 0x2c)) goto LAB_00460b91;
    free(*(void **)(param_1 + 0x28));
    *(uint *)(param_1 + 0x2c) = _Size;
    pvVar2 = calloc(1,_Size);
  }
  *(void **)(param_1 + 0x28) = pvVar2;
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return 0;
  }
LAB_00460b91:
  iVar1 = lstrcmpA(*(LPCSTR *)(param_1 + 0x28),(LPCSTR)param_2);
  if (iVar1 != 0) {
    _mbscpy(*(uchar **)(param_1 + 0x28),param_2);
    if ((*(byte *)(param_1 + 0x44) & 0x10) != 0) {
      InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),1);
    }
  }
  return 1;
}


