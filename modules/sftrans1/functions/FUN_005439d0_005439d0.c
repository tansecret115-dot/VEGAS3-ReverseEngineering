/* Module: sftrans1.dll
   Function: FUN_005439d0
   Address: 005439d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005439d0(int param_1)

{
  LPCVOID pMem;
  HGLOBAL pvVar1;
  undefined4 local_54;
  undefined4 local_50;
  LPCVOID local_4c;
  undefined4 local_48;
  uchar local_44 [32];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined2 local_14;
  undefined4 local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4c = (LPCVOID)0x0;
  local_48 = 0;
  _mbscpy(local_44,(uchar *)(*(int *)(param_1 + 0x8c) + *(int *)(param_1 + 100) * 0x22));
  local_20 = (int)*(char *)(param_1 + 0x1c);
  local_24 = *(int *)(param_1 + 0x68) / 2;
  local_1c = (int)*(char *)(param_1 + 0x1e);
  local_18 = (int)*(char *)(param_1 + 0x1d);
  local_14 = *(undefined2 *)(*(int *)(param_1 + 0x8c) + 0x20 + *(int *)(param_1 + 100) * 0x22);
  if (*(char *)(param_1 + 0x78) == '\0') {
    local_4 = *(undefined4 *)(param_1 + 0x7c);
    local_8 = 4;
  }
  else if (*(char *)(param_1 + 0x78) == '\x01') {
    local_8 = 2;
    local_4 = 0;
  }
  else {
    local_8 = 0;
    local_4 = 0;
  }
  local_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x94) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x70) * 4);
  }
  FUN_004dd410(*(undefined4 *)(param_1 + 0xa0),&local_54,0x54,0xffffffff,0);
  pMem = local_4c;
  if (local_4c != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(local_4c);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pMem);
    GlobalFree(pvVar1);
    return 0;
  }
  return 0;
}


