/* Module: encn3260.dll
   Function: RNxHookChar
   Address: 664ac1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall RNxHookChar(int,unsigned int,long) */

long RNxHookChar(int param_1,uint param_2,long param_3)

{
  uint wParam;
  long lParam;
  void *this;
  int iVar1;
  LRESULT LVar2;
  int local_14;
  undefined *local_10;
  void *local_c;
  HWND local_8;
  
  lParam = param_3;
                    /* 0x2c1d0  9  ?RNxHookChar@@YGJHIJ@Z */
  wParam = param_2;
  if (((param_1 < 0) || (param_1 != 3)) && ((param_3 & 0x8000U) == 0)) {
    local_14 = -(uint)(DAT_664f0784 != 0);
    param_2 = 0;
    local_10 = &DAT_664f0778;
    local_c = (void *)0x0;
    local_8 = (HWND)0x0;
    while (local_14 != 0) {
      FUN_664c4010(local_10,&local_14,(int *)&local_8,(int *)&local_c);
      this = local_c;
      iVar1 = (**(code **)(*(int *)((int)local_c + 0x18) + 0x18))((int *)((int)local_c + 0x18));
      if ((iVar1 != 0) &&
         (iVar1 = FUN_664ab870(this,local_8,0x102,(int *)wParam,(HWND)lParam,(int *)&param_2),
         iVar1 != 0)) {
        return param_2;
      }
    }
  }
  LVar2 = CallNextHookEx(DAT_664f07d4,param_1,wParam,lParam);
  return LVar2;
}


