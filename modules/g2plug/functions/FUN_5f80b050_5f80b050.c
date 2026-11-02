/* Module: g2plug.dll
   Function: FUN_5f80b050
   Address: 5f80b050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80b050(HWND param_1,LPSTR param_2,SIZE_T param_3)

{
  int iVar1;
  WPARAM wParam;
  int *piVar2;
  
  wParam = SendMessageA(param_1,0x147,0,0);
  if (wParam != 0xffffffff) {
    piVar2 = (int *)SendMessageA(param_1,0x150,wParam,0);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      if (iVar1 != 0x52563130) {
        if (iVar1 == 0x52563230) {
          if (piVar2[1] == 1) {
            FUN_5f8172d0(DAT_5f877520,0xefe7,param_2,param_3);
            return 0;
          }
          FUN_5f8172d0(DAT_5f877520,0xefe6,param_2,param_3);
          return 0;
        }
        if (iVar1 != 0x52563330) {
          FUN_5f8172d0(DAT_5f877520,0xefe9,param_2,param_3);
          return 0;
        }
        FUN_5f8172d0(DAT_5f877520,0xefe8,param_2,param_3);
        return 0;
      }
      FUN_5f8172d0(DAT_5f877520,0xefea,param_2,param_3);
    }
  }
  return 0;
}


