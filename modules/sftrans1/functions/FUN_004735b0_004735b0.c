/* Module: sftrans1.dll
   Function: FUN_004735b0
   Address: 004735b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004735b0(int *param_1,undefined4 param_2,undefined4 param_3,HWND param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  HWND pHVar4;
  LRESULT LVar5;
  WPARAM wParam;
  
  FUN_004c4710(param_2,param_3,param_4,1,0x1999);
  pHVar4 = GetDlgItem((HWND)param_1[0xc],0x3f3);
  if (param_4 == pHVar4) {
    LVar5 = SendMessageA(param_4,0x60a,0,0);
    *(double *)(param_1 + 0x14) = (double)LVar5 * _DAT_0055f640;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  pHVar4 = GetDlgItem((HWND)param_1[0xc],0x3f5);
  if (param_4 != pHVar4) {
    pHVar4 = GetDlgItem((HWND)param_1[0xc],0x3f7);
    wParam = SendMessageA(pHVar4,0x147,0,0);
    LVar5 = SendMessageA(pHVar4,0x150,wParam,0);
    pdVar1 = (double *)(param_1 + LVar5 * 8 + 0x22);
    pHVar4 = GetDlgItem((HWND)param_1[0xc],0x3f9);
    if (param_4 == pHVar4) {
      LVar5 = SendMessageA(param_4,0x60a,0,0);
      dVar2 = (double)LVar5 * _DAT_00561968;
      dVar3 = _DAT_00555910;
      if ((_DAT_00555910 <= dVar2) && (dVar3 = dVar2, _DAT_00561960 < dVar2)) {
        dVar3 = _DAT_00561960;
      }
      *pdVar1 = dVar3;
      dVar2 = (double)LVar5 * _DAT_00561958;
      if (dVar2 < _DAT_00555910) {
        pdVar1[2] = _DAT_00555910;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      if (_DAT_00561950 < dVar2) {
        dVar2 = _DAT_00561950;
      }
      pdVar1[2] = dVar2;
      (**(code **)(*param_1 + 0x2c))(param_1);
    }
    return 0;
  }
  LVar5 = SendMessageA(param_4,0x60a,0,0);
  *(double *)(param_1 + 0x18) = (double)LVar5 * _DAT_0055f640;
  (**(code **)(*param_1 + 0x2c))(param_1);
  return 0;
}


