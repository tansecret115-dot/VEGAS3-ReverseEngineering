/* Module: sftrans1.dll
   Function: FUN_004bee00
   Address: 004bee00
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_004bee00(HWND param_1,UINT param_2,WPARAM param_3,uint param_4)

{
  SHORT SVar1;
  HANDLE pvVar2;
  WNDPROC lpPrevWndFunc;
  LRESULT LVar3;
  undefined4 uVar4;
  
  switch(param_2) {
  case 7:
    pvVar2 = GetPropA(param_1,s_SpinMeRound_00575870);
    if (pvVar2 == (HANDLE)0x0) goto switchD_004bee2c_caseD_9;
    uVar4 = 9;
    break;
  case 8:
    pvVar2 = GetPropA(param_1,s_SpinMeRound_00575870);
    if (pvVar2 == (HANDLE)0x0) goto switchD_004bee2c_caseD_9;
    uVar4 = 8;
    break;
  default:
    goto switchD_004bee2c_caseD_9;
  case 0x100:
  case 0x101:
  case 0x102:
    switch(param_3) {
    case 0x21:
    case 0x22:
    case 0x26:
    case 0x28:
switchD_004bee3f_caseD_21:
      if (param_2 != 0x102) {
        pvVar2 = GetPropA(param_1,s_SpinMeRound_00575870);
        if (pvVar2 == (HANDLE)0x0) {
          return 0;
        }
        FUN_004be5f0(pvVar2,param_3,param_2 == 0x100,param_4 & 0xffff,param_4 >> 0x10);
      }
      return 0;
    case 0x23:
    case 0x24:
      SVar1 = GetKeyState(0x11);
      if (SVar1 < 0) goto switchD_004bee3f_caseD_21;
    }
    goto switchD_004bee2c_caseD_9;
  }
  (**(code **)((int)pvVar2 + 0xc0))
            (pvVar2,*(undefined4 *)((int)pvVar2 + 0x3c),*(undefined4 *)((int)pvVar2 + 0xbc),uVar4,0)
  ;
switchD_004bee2c_caseD_9:
  lpPrevWndFunc = GetPropA(param_1,s_SpinMeLo_0057587c);
  LVar3 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  if (param_2 == 0x82) {
    RemovePropA(param_1,s_SpinMeRound_00575870);
    RemovePropA(param_1,s_SpinMeLo_0057587c);
  }
  return LVar3;
}


