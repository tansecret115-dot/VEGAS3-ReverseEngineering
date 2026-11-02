/* Module: vegas30.exe
   Function: FUN_004e4790
   Address: 004e4790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e4790(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  LRESULT LVar3;
  
  if (param_1 != 0) {
    if (((param_3 & 0x800) != 0) && (iVar1 = *(int *)(param_1 + 0xdd0), iVar1 != 0)) {
      iVar2 = FUN_005ec620();
      if (iVar2 != 0) {
        FUN_005ed3f0(iVar1);
        LVar3 = 0;
        if (*(HWND *)(param_1 + 0xf1c) != (HWND)0x0) {
          LVar3 = SendMessageA(*(HWND *)(param_1 + 0xf1c),0x150,*(WPARAM *)(param_1 + 0xf30),0);
          if (LVar3 != 0) {
            FUN_004e33d0(param_1 + 0x80,LVar3);
          }
        }
        FUN_004de320(param_1,0,0,0,0,1);
        FUN_004de320(param_1,iVar1,0,0,LVar3,1);
        FUN_005ed410(iVar1,0,0);
      }
    }
    if ((param_2 & 0x200) != 0) {
      if ((-1 < *(int *)(param_1 + 0xe24)) &&
         ((0 < *(int *)(param_1 + 0xe24) || (*(int *)(param_1 + 0xe20) != 0)))) {
        FUN_004530a0(param_1 + 0x80,0);
      }
    }
    if ((param_2 & 0x100) != 0) {
      iVar1 = param_1 + 0x80;
      FUN_004de230(param_1,iVar1);
      FUN_004decb0(iVar1,*(undefined4 *)(param_1 + 0xdd0));
      FUN_004530a0(iVar1,0x7fff);
    }
    if ((param_2 & 0x10000) != 0) {
      FUN_004e40a0(0);
      return;
    }
    if ((param_2 & 0x20000) != 0) {
      FUN_004e41e0();
    }
  }
  return;
}


