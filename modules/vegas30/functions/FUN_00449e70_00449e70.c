/* Module: vegas30.exe
   Function: FUN_00449e70
   Address: 00449e70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00449e70(int param_1,WPARAM param_2)

{
  int iVar1;
  int *local_108;
  CHAR local_104 [260];
  
  local_104[0] = '\0';
  SendMessageA(*(HWND *)(param_1 + 0x1a4),0x148,param_2,(LPARAM)local_104);
  iVar1 = lstrlenA(local_104);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0xb4) + 0x14) != 0)) {
    iVar1 = FUN_00445380(param_1,0x238,0,0);
    if (-1 < iVar1) {
      iVar1 = FUN_00445590(param_1);
      if (-1 < iVar1) {
        _SfVideoPlugin_GetInterface_12
                  (&DAT_006335c8,&local_108,*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10));
        if (local_108 != (int *)0x0) {
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x800;
          FUN_00449cd0(*(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x10),local_108,local_104);
          (**(code **)(*local_108 + 8))(local_108);
        }
        FUN_004457c0(param_1,0);
        return iVar1;
      }
    }
  }
  return -0x7fffbffb;
}


