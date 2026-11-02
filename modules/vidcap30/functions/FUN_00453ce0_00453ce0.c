/* Module: vidcap30.exe
   Function: FUN_00453ce0
   Address: 00453ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453ce0(void *param_1)

{
  int iVar1;
  
  InvalidateRect(*(HWND *)((int)param_1 + 8),(RECT *)((int)param_1 + 0x14),1);
  if (*(int **)((int)param_1 + 0x2c) != (int *)0x0) {
    iVar1 = **(int **)((int)param_1 + 0x2c);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_00454360(param_1,iVar1,0);
    }
    _SfList_Destroy_4(*(undefined4 *)((int)param_1 + 0x2c));
  }
  free(param_1);
  return;
}


