/* Module: sftrans1.dll
   Function: FUN_004bf430
   Address: 004bf430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bf430(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

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
    iVar3 = FUN_004beb20(param_1,param_4);
    return (iVar3 != 0) - 1;
  }
  sVar5 = (short)param_4;
  sVar1 = (short)(param_4 >> 0x10);
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      FUN_004bde20(LVar2,0);
      iVar3 = DefWindowProcA(param_1,0xf,param_3,param_4);
      return iVar3;
    }
    switch(param_2) {
    case 1:
      goto switchD_004bf4ac_caseD_1;
    case 2:
      FUN_004bf050(param_1);
      return 0;
    case 5:
      GetClientRect(*(HWND *)(LVar2 + 0x38),(LPRECT)(LVar2 + 0x98));
      FUN_004be940(LVar2,param_3,(int)sVar5,(int)sVar1);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 7:
      FUN_004be830(LVar2,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 8:
      FUN_004be890(LVar2,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 10:
      FUN_004bea80(LVar2,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    }
  }
  else {
    if (param_2 < 0x102) {
      if (param_2 == 0x101) {
        uVar6 = 0;
LAB_004bf611:
        FUN_004be5f0(LVar2,param_3,uVar6,(int)sVar5,param_4 >> 0x10);
      }
      else {
        switch(param_2) {
        case 0x14:
          return 0;
        default:
          goto switchD_004bf4ac_caseD_3;
        case 0x1f:
          FUN_004be540(LVar2,0,0,0);
          return 0;
        case 0x20:
          iVar3 = FUN_004be7d0(LVar2,param_3,param_4 & 0xffff,param_4 >> 0x10);
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
          goto LAB_004bf611;
        }
      }
      goto switchD_004bf4ac_caseD_1;
    }
    switch(param_2) {
    case 0x113:
      FUN_004be780(LVar2,param_3);
      return 0;
    case 0x200:
      if (*(int *)(LVar2 + 0x70) == 0) {
        FUN_004be590(LVar2,(int)sVar5,(int)sVar1,param_3);
        iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
        return iVar3;
      }
      goto switchD_004bf4ac_caseD_1;
    case 0x201:
      FUN_004be490(LVar2,0,(int)sVar5,(int)sVar1,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 0x202:
      FUN_004be540(LVar2,(int)sVar5,(int)sVar1,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 0x203:
      FUN_004be490(LVar2,1,(int)sVar5,(int)sVar1,param_3);
      iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return iVar3;
    case 0x20a:
      FUN_004bf9d0(LVar2,param_3);
      return 0x69;
    }
  }
switchD_004bf4ac_caseD_3:
  if ((0x3ff < param_2) && (param_2 < 0x8000)) {
    iVar3 = FUN_004bf090(LVar2,param_2,param_3,param_4);
    return iVar3;
  }
switchD_004bf4ac_caseD_1:
  iVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return iVar3;
}


