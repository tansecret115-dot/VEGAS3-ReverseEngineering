/* Module: vegas30.exe
   Function: FUN_004c7800
   Address: 004c7800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004c7800(int param_1,int param_2,LONG *param_3)

{
  int iVar1;
  tagRECT local_410;
  CHAR local_400 [1023];
  undefined1 local_1;
  
  local_400[0] = '\0';
  if (*(LPCSTR *)(param_2 + 0xc) != (LPCSTR)0x0) {
    lstrcpynA(local_400,*(LPCSTR *)(param_2 + 0xc),0x400);
    local_1 = 0;
  }
  local_410.left = *param_3;
  local_410.top = param_3[1];
  local_410.right = param_3[2];
  local_410.bottom = param_3[3];
  InflateRect(&local_410,-4,0);
  iVar1 = FUN_00404d90(*(undefined4 *)(param_1 + 4),0xffffffff,&local_410,100,local_400,0x400);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*(int *)(param_2 + 0xc) != 0) || (iVar1 = lstrlenA(local_400), iVar1 == 0)) {
    if (*(LPCSTR *)(param_2 + 0xc) == (LPCSTR)0x0) {
      return 0;
    }
    iVar1 = lstrcmpA(local_400,*(LPCSTR *)(param_2 + 0xc));
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),0xd,0);
  FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),param_2,0xd,0);
  iVar1 = FUN_005cb690(*(undefined4 *)(param_1 + 0xbc8),param_2,local_400);
  if (iVar1 == 0) {
    FUN_004eb2b0(*(undefined4 *)(param_1 + 0xbc8));
  }
  FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),0);
  return 0;
}


