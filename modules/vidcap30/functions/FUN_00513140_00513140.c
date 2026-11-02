/* Module: vidcap30.exe
   Function: FUN_00513140
   Address: 00513140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00513140(undefined4 *param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
  if (param_1[0xd] != -1) {
    iVar1 = param_1[0xe];
    if ((-1 < iVar1) && (iVar1 < (int)param_1[0x28])) {
      FUN_00510de0(param_1,param_1[0x2d] + iVar1 * 8,&local_8);
      local_8 = local_8 + 10;
      local_4 = local_4 + -1;
      iVar1 = FUN_00511750(param_1,local_8,local_4);
      if (0 < iVar1) {
        param_1[0xe] = param_1[0xe] + 1;
        InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
      }
    }
    if ((HWND)param_1[0x1b] != (HWND)0x0) {
      PostMessageA((HWND)param_1[0x1b],0x612,0,
                   CONCAT22(*(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0xd)));
    }
  }
  return;
}


