/* Module: vegas30.exe
   Function: FUN_00412220
   Address: 00412220
   Source: Ghidra pseudocode (Stage 10 batch) */


INT_PTR FUN_00412220(HWND param_1,undefined4 param_2,undefined4 param_3,int param_4,LPCSTR param_5,
                    undefined4 *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                    undefined4 param_10)

{
  undefined4 uVar1;
  HGLOBAL pvVar2;
  LPCDLGTEMPLATEA hDialogTemplate;
  int iVar3;
  HWND hWnd;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  INT_PTR IVar9;
  int local_38;
  undefined4 local_2c [7];
  int local_10;
  short local_c;
  short local_8;
  short local_4;
  
  iVar5 = 0xb;
  if (param_6 == (undefined4 *)0x0) {
    puVar8 = local_2c;
    while( true ) {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_2c[0] = 0x2c;
  }
  else {
    puVar8 = local_2c;
    while( true ) {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      *puVar8 = *param_6;
      param_6 = param_6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  iVar5 = FUN_00411060(param_2,param_3,param_4,local_2c,param_7,param_9,param_10);
  if (iVar5 == 0) {
    return -1;
  }
  IVar9 = -1;
  pvVar2 = GlobalAlloc(0x40,0x400);
  hDialogTemplate = GlobalLock(pvVar2);
  pcVar7 = GlobalHandle_exref;
  if (hDialogTemplate != (LPCDLGTEMPLATEA)0x0) {
    local_38 = local_10 << 0x10;
    hDialogTemplate->style = 0x80cc2081;
    hDialogTemplate->dwExtendedStyle = 0;
    hDialogTemplate->cdit = (undefined2)local_38;
    hDialogTemplate->x = local_38._2_2_;
    hDialogTemplate->y = local_c;
    hDialogTemplate->cx = local_8 - (short)local_10;
    hDialogTemplate->cy = local_4 - local_c;
    *(undefined2 *)&hDialogTemplate[1].style = 0;
    *(undefined2 *)((int)&hDialogTemplate[1].style + 2) = 0;
    iVar3 = lstrlenA(param_5);
    MultiByteToWideChar(0,1,param_5,-1,(LPWSTR)&hDialogTemplate[1].dwExtendedStyle,iVar3 + 1);
    *(undefined2 *)((int)&hDialogTemplate[1].dwExtendedStyle + iVar3 * 2) = 0;
    DAT_0064b8bc = DAT_0064b8bc + 1;
    hWnd = GetFocus();
    if (DAT_0064b8bc == 1) {
      FUN_00411f60(DAT_0064762c,0);
    }
    uVar1 = DAT_0064763c;
    uVar6 = DAT_0064761c >> 3;
    DAT_0064761c = DAT_0064761c & 0xfffffff7;
    IVar9 = DialogBoxIndirectParamA(DAT_006471fc,hDialogTemplate,param_1,FUN_004120d0,iVar5);
    DAT_0064761c = (uVar6 & 1) << 3 | DAT_0064761c & 0xfffffff7;
    DAT_0064763c = uVar1;
    if (DAT_0064b8bc == 1) {
      FUN_00411f60(DAT_0064762c,1);
    }
    SetFocus(hWnd);
    pcVar7 = GlobalHandle_exref;
    DAT_0064b8bc = DAT_0064b8bc + -1;
    pvVar2 = GlobalHandle(hDialogTemplate);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(hDialogTemplate);
    GlobalFree(pvVar2);
    if (IVar9 != -1) goto LAB_00412445;
  }
  DVar4 = GetLastError();
  if (DVar4 != 0) {
    if (*(code **)(param_4 + 0xc) != (code *)0x0) {
      (**(code **)(param_4 + 0xc))(iVar5);
    }
    pvVar2 = (HGLOBAL)(*pcVar7)(iVar5);
    GlobalUnlock(pvVar2);
    pvVar2 = (HGLOBAL)(*pcVar7)(iVar5);
    GlobalFree(pvVar2);
    return IVar9;
  }
LAB_00412445:
  FUN_00410f20(iVar5);
  return IVar9;
}


