/* Module: sfpagepeel.dll
   Function: FUN_0041e2a0
   Address: 0041e2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0041e2a0(HWND param_1,uint param_2,HWND param_3,HWND param_4)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  HWND pHVar4;
  short sVar5;
  
  puVar2 = (uint *)GetWindowLongA(param_1,0);
  if (puVar2 == (uint *)0x0) {
    if (param_2 != 1) {
      pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    }
    iVar3 = FUN_0041d990(param_1,(uint *)param_4);
    return (HWND)((iVar3 != 0) - 1);
  }
  sVar5 = (short)param_4;
  sVar1 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      FUN_0041cc90((int)puVar2,(HDC)0x0);
      pHVar4 = (HWND)DefWindowProcA(param_1,0xf,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    }
    switch(param_2) {
    case 1:
      goto switchD_0041e31c_caseD_1;
    case 2:
      FUN_0041dec0(param_1);
      return (HWND)0x0;
    case 5:
      GetClientRect((HWND)puVar2[0xe],(LPRECT)(puVar2 + 0x26));
      FUN_0041d7b0(puVar2);
      pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    case 7:
      FUN_0041d6a0((int)puVar2);
      pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    case 8:
      FUN_0041d700((int)puVar2);
      pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    case 10:
      FUN_0041d8f0((int)puVar2);
      pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    }
  }
  else {
    if (param_2 < 0x102) {
      if (param_2 == 0x101) {
        iVar3 = 0;
LAB_0041e481:
        FUN_0041d460((byte *)puVar2,(uint)param_3,iVar3,(int)sVar5,(uint)param_4 >> 0x10);
      }
      else {
        switch(param_2) {
        case 0x14:
          return (HWND)0x0;
        default:
          goto switchD_0041e31c_caseD_3;
        case 0x1f:
          FUN_0041d3b0((byte *)puVar2,0,0);
          return (HWND)0x0;
        case 0x20:
          pHVar4 = (HWND)FUN_0041d640((int)puVar2);
          if (pHVar4 != (HWND)0x0) {
            return pHVar4;
          }
          break;
        case 0x7b:
          if (puVar2[0x24] != 0xffffffff) {
            return (HWND)0x0;
          }
          break;
        case 0x87:
          if (puVar2[9] != 0) {
            return (HWND)0x4;
          }
          pHVar4 = GetCapture();
          return (HWND)((-(uint)(pHVar4 != param_1) & 0x7d) + 4);
        case 0x100:
          iVar3 = 1;
          goto LAB_0041e481;
        }
      }
      goto switchD_0041e31c_caseD_1;
    }
    switch(param_2) {
    case 0x113:
      FUN_0041d5f0((byte *)puVar2);
      return (HWND)0x0;
    case 0x200:
      if (puVar2[0x1c] == 0) {
        FUN_0041d400((byte *)puVar2,(int)sVar5,(int)sVar1,(byte)param_3);
        pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
        return pHVar4;
      }
      goto switchD_0041e31c_caseD_1;
    case 0x201:
      FUN_0041d300((byte *)puVar2,0,(int)sVar5,(int)sVar1);
      pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    case 0x202:
      FUN_0041d3b0((byte *)puVar2,(int)sVar5,(int)sVar1);
      pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    case 0x203:
      FUN_0041d300((byte *)puVar2,1,(int)sVar5,(int)sVar1);
      pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return pHVar4;
    case 0x20a:
      FUN_0041e840((int)puVar2,(uint)param_3);
      return (HWND)0x69;
    }
  }
switchD_0041e31c_caseD_3:
  if ((0x3ff < param_2) && (param_2 < 0x8000)) {
    pHVar4 = FUN_0041df00(puVar2,param_2,param_3,param_4);
    return pHVar4;
  }
switchD_0041e31c_caseD_1:
  pHVar4 = (HWND)DefWindowProcA(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return pHVar4;
}


