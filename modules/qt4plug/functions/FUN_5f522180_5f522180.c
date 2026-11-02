/* Module: qt4plug.dll
   Function: FUN_5f522180
   Address: 5f522180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f522180(void *this,undefined4 param_1,HWND param_2,int param_3)

{
  WPARAM wParam;
  float10 fVar1;
  CHAR local_30 [44];
  
  if (param_3 == 1) {
    local_30[0] = '\0';
    GetWindowTextA(param_2,local_30,0x28);
    fVar1 = FUN_5f543720(local_30,*(double *)((int)this + 0x50),
                         (double)CONCAT44(DAT_5f596c3c,DAT_5f596c38),
                         (double)CONCAT44(DAT_5f596c44,DAT_5f596c40),(undefined4 *)0x0);
    if (fVar1 == (float10)*(double *)((int)this + 0x50)) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 1;
    }
    *(double *)((int)this + 0x50) = (double)fVar1;
  }
  else if (param_3 != 5) {
    if (param_3 != 4) {
      return 1;
    }
    local_30[0] = '\0';
    GetWindowTextA(param_2,local_30,0x28);
    fVar1 = FUN_5f543720(local_30,*(double *)((int)this + 0x50),
                         (double)CONCAT44(DAT_5f596c3c,DAT_5f596c38),
                         (double)CONCAT44(DAT_5f596c44,DAT_5f596c40),(undefined4 *)0x0);
    if (fVar1 != (float10)*(double *)((int)this + 0x50)) {
      *(double *)((int)this + 0x50) = (double)fVar1;
    }
    wParam = FUN_5f5222c0((double)fVar1);
    if (wParam != 0xffffffff) {
      SendMessageA(param_2,0x14e,wParam,0);
      return 1;
    }
    FUN_5f52e2c0(param_2,"%.6f");
    return 1;
  }
  *(undefined4 *)((int)this + 0x24) = 1;
  return 1;
}


