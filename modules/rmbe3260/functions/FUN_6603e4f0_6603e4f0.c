/* Module: rmbe3260.dll
   Function: FUN_6603e4f0
   Address: 6603e4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6603e4f0(void *param_1)

{
  int iVar1;
  tagMSG local_20;
  
  iVar1 = GetMessageA(&local_20,(HWND)0x0,0,0);
  if (iVar1 != 0) {
    while (iVar1 != -1) {
      if ((local_20.message == 0x400) &&
         (iVar1 = FUN_6603e560(param_1,local_20.lParam,0), iVar1 != 0)) {
        *(int *)((int)param_1 + 0x84) = iVar1;
      }
      if (local_20.message == 0x401) {
        return 0;
      }
      iVar1 = GetMessageA(&local_20,(HWND)0x0,0,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 0;
}


