/* Module: vidcap30.exe
   Function: FUN_00454bc0
   Address: 00454bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00454bc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2;
  local_4 = param_3;
  iVar1 = FUN_00454c20(param_1,&local_8);
  if ((iVar1 != -1) && (*(int *)(param_1 + 0x24) != 0)) {
    SendMessageA(*(HWND *)(param_1 + 8),0x111,
                 (uint)**(ushort **)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + iVar1 * 4),0);
  }
  return 0;
}


