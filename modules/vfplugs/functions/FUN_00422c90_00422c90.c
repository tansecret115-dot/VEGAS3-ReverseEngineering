/* Module: vfplugs.dll
   Function: FUN_00422c90
   Address: 00422c90
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_00422c90(HWND param_1,UINT param_2,uint param_3,uint param_4)

{
  SHORT SVar1;
  byte *pbVar2;
  HANDLE pvVar3;
  WNDPROC lpPrevWndFunc;
  LRESULT LVar4;
  undefined4 uVar5;
  
  switch(param_2) {
  case 7:
    pvVar3 = GetPropA(param_1,s_SpinMeRound_00493ab8);
    if (pvVar3 == (HANDLE)0x0) goto switchD_00422cbc_caseD_9;
    uVar5 = 9;
    break;
  case 8:
    pvVar3 = GetPropA(param_1,s_SpinMeRound_00493ab8);
    if (pvVar3 == (HANDLE)0x0) goto switchD_00422cbc_caseD_9;
    uVar5 = 8;
    break;
  default:
    goto switchD_00422cbc_caseD_9;
  case 0x100:
  case 0x101:
  case 0x102:
    switch(param_3) {
    case 0x21:
    case 0x22:
    case 0x26:
    case 0x28:
switchD_00422ccf_caseD_21:
      if (param_2 != 0x102) {
        pbVar2 = GetPropA(param_1,s_SpinMeRound_00493ab8);
        if (pbVar2 == (byte *)0x0) {
          return 0;
        }
        FUN_00422480(pbVar2,param_3,(uint)(param_2 == 0x100),param_4 & 0xffff,param_4 >> 0x10);
      }
      return 0;
    case 0x23:
    case 0x24:
      SVar1 = GetKeyState(0x11);
      if (SVar1 < 0) goto switchD_00422ccf_caseD_21;
    }
    goto switchD_00422cbc_caseD_9;
  }
  (**(code **)((int)pvVar3 + 0xc0))
            (pvVar3,*(undefined4 *)((int)pvVar3 + 0x3c),*(undefined4 *)((int)pvVar3 + 0xbc),uVar5,0)
  ;
switchD_00422cbc_caseD_9:
  lpPrevWndFunc = GetPropA(param_1,s_SpinMeLo_00493ac4);
  LVar4 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  if (param_2 == 0x82) {
    RemovePropA(param_1,s_SpinMeRound_00493ab8);
    RemovePropA(param_1,s_SpinMeLo_00493ac4);
  }
  return LVar4;
}


