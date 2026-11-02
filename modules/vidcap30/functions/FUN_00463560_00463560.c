/* Module: vidcap30.exe
   Function: FUN_00463560
   Address: 00463560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463560(HWND param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_14;
  int local_8;
  
  SendMessageA(param_1,0x1009,0,0);
  iVar2 = 0;
  iVar1 = *param_2;
  if (0 < iVar1) {
    do {
      local_28 = 5;
      local_20 = 0;
      local_24 = iVar2;
      local_14 = _SfGetString_8(DAT_005ba2a0,*(undefined4 *)(*(int *)(param_2[2] + iVar2 * 4) + 4));
      local_8 = iVar2;
      SendMessageA(param_1,0x1007,0,(LPARAM)&local_28);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


