/* Module: vegas30.exe
   Function: FUN_00417ad0
   Address: 00417ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417ad0(int param_1,WPARAM param_2)

{
  LRESULT LVar1;
  int iVar2;
  short unaff_DI;
  CHAR aCStack_108 [264];
  
  if (-1 < (int)param_2) {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x254),0x150,param_2,0);
    FUN_005b8630(*(undefined4 *)(param_1 + 700));
    iVar2 = *(int *)(param_1 + 0x8c);
    if (iVar2 == 4) {
      FUN_005b4320(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                   *(undefined4 *)(param_1 + 0x80));
      FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x100,0);
      FUN_004ea900(*(undefined4 *)(param_1 + 700),1,*(undefined4 *)(param_1 + 0x88),
                   *(undefined4 *)(param_1 + 0x1bc),0x1b);
    }
    else if (iVar2 == 3) {
      FUN_005b4320(4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0,
                   *(undefined4 *)(param_1 + 0x80));
      FUN_004e9f70(*(undefined4 *)(param_1 + 700),*(int *)(param_1 + 0x88) + 0x1d8,0);
      FUN_004ea900(*(undefined4 *)(param_1 + 700),4,*(undefined4 *)(param_1 + 0x88),
                   *(undefined4 *)(param_1 + 0x1bc),0x1b);
    }
    else if (iVar2 == 2) {
      FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                   *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
      FUN_004e9f70(*(undefined4 *)(param_1 + 700),0x21a,0);
      FUN_004ea9f0(*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x94),
                   *(undefined4 *)(param_1 + 0x1bc),0x22);
    }
    else if (iVar2 == 5) {
      FUN_005b4320(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                   *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x80));
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1c0) + 0x3c))(*(int **)(param_1 + 0x1c0),LVar1);
    if (iVar2 == 0) {
      FUN_004eb2b0(*(undefined4 *)(param_1 + 700));
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x1c0) + 0x38))
                (*(int **)(param_1 + 0x1c0),LVar1,&stack0xfffffcf8,0x100);
      if ((&stack0x00000000 == (undefined1 *)0x308) || (unaff_DI != 0)) {
        WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffcf8,-1,aCStack_108,0x100,(LPCSTR)0x0,
                            (LPBOOL)0x0);
      }
    }
    iVar2 = *(int *)(param_1 + 0x8c);
    if (iVar2 == 4) {
      FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
      FUN_005b41d0(1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0);
      return;
    }
    if (iVar2 == 3) {
      FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
      FUN_005b41d0(4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x1bc),0);
      return;
    }
    if (iVar2 == 2) {
      FUN_004ea040(*(undefined4 *)(param_1 + 700),0);
      FUN_005b41d0(0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0x1bc),
                   *(undefined4 *)(param_1 + 0x94));
    }
  }
  return;
}


