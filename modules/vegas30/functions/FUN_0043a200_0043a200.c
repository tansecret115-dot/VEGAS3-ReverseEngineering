/* Module: vegas30.exe
   Function: FUN_0043a200
   Address: 0043a200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a200(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00438c40((LPCSTR)(param_1 + 0xb4));
  iVar1 = lstrlenA((LPCSTR)(param_1 + 0xb4));
  *(int *)(param_1 + 0x134) = iVar1;
  if ((*(int *)(param_1 + 0x80) == 1) || (*(int *)(param_1 + 0x80) == 2)) {
    *(undefined4 *)(param_1 + 0x138) = 0xb;
  }
  if (iVar1 <= DAT_006487c8) {
    iVar1 = DAT_006487c8;
  }
  *(int *)(param_1 + 0x138) = iVar1;
  local_10 = *(undefined4 *)(param_1 + 0x90);
  local_c = *(undefined4 *)(param_1 + 0x94);
  local_8 = *(undefined4 *)(param_1 + 0x98);
  local_4 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  FUN_004396c0(param_1,&local_10);
  if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
  }
  return;
}


