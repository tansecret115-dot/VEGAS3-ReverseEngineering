/* Module: vidpcore.dll
   Function: FUN_5deae2d0
   Address: 5deae2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5deae2d0(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

{
  short sVar1;
  LONG LVar2;
  int iVar3;
  HWND pHVar4;
  short sVar5;
  undefined4 uVar6;
  
  LVar2 = GetWindowLongA(param_1,0);
  if (LVar2 == 0) {
    if (param_2 != 1) {
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    }
    iVar3 = FUN_5dead9c0(param_1,param_4);
    return (iVar3 != 0) - 1;
  }
  sVar5 = (short)param_4;
  sVar1 = (short)(param_4 >> 0x10);
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      FUN_5deaccc0(LVar2,0);
      iVar3 = DefWindowProcA(param_1,0xf,param_3,param_4);
      return iVar3;
    }
    switch(param_2) {
    case 1:
      goto switchD_5deae34c_caseD_1;
    case 2:
      FUN_5deadef0(param_1);
      return 0;
    case 5:
      GetClientRect(*(HWND *)(LVar2 + 0x38),(LPRECT)(LVar2 + 0x98));
      FUN_5dead7e0(LVar2,param_3,(int)sVar5,(int)sVar1);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 7:
      FUN_5dead6d0(LVar2,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 8:
      FUN_5dead730(LVar2,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 10:
      FUN_5dead920(LVar2,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    }
  }
  else {
    if (param_2 < 0x102) {
      if (param_2 == 0x101) {
        uVar6 = 0;
LAB_5deae4b1:
        FUN_5dead490(LVar2,param_3,uVar6,(int)sVar5,param_4 >> 0x10);
      }
      else {
        switch(param_2) {
        case 0x14:
          return 0;
        default:
          goto switchD_5deae34c_caseD_3;
        case 0x1f:
          FUN_5dead3e0(LVar2,0,0,0);
          return 0;
        case 0x20:
          iVar3 = FUN_5dead670(LVar2,param_3,param_4 & 0xffff,param_4 >> 0x10);
          if (iVar3 != 0) {
            return iVar3;
          }
          break;
        case 0x7b:
          if (*(int *)(LVar2 + 0x90) != -1) {
            return 0;
          }
          break;
        case 0x87:
          if (*(int *)(LVar2 + 0x24) != 0) {
            return 4;
          }
          pHVar4 = GetCapture();
          return (-(uint)(pHVar4 != param_1) & 0x7d) + 4;
        case 0x100:
          uVar6 = 1;
          goto LAB_5deae4b1;
        }
      }
      goto switchD_5deae34c_caseD_1;
    }
    switch(param_2) {
    case 0x113:
      FUN_5dead620(LVar2,param_3);
      return 0;
    case 0x200:
      if (*(int *)(LVar2 + 0x70) == 0) {
        FUN_5dead430(LVar2,(int)sVar5,(int)sVar1,param_3);
        iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
        return iVar3;
      }
      goto switchD_5deae34c_caseD_1;
    case 0x201:
      FUN_5dead330(LVar2,0,(int)sVar5,(int)sVar1,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 0x202:
      FUN_5dead3e0(LVar2,(int)sVar5,(int)sVar1,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 0x203:
      FUN_5dead330(LVar2,1,(int)sVar5,(int)sVar1,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 0x20a:
      FUN_5deae870(LVar2,param_3);
      return 0x69;
    }
  }
switchD_5deae34c_caseD_3:
  if ((0x3ff < param_2) && (param_2 < 0x8000)) {
    iVar3 = FUN_5deadf30(LVar2,param_2,param_3,param_4);
    return iVar3;
  }
switchD_5deae34c_caseD_1:
  iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return iVar3;
}


