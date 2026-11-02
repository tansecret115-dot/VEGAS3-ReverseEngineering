/* Module: vegas30.exe
   Function: FUN_005017d0
   Address: 005017d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005017d0(int *param_1)

{
  HWND pHVar1;
  undefined8 uVar2;
  CHAR *pCVar3;
  int nMaxCount;
  CHAR local_28 [40];
  
  if (param_1 != (int *)0x0) {
    pCVar3 = local_28;
    nMaxCount = 0x28;
    pHVar1 = GetDlgItem((HWND)param_1[0xc],0x469);
    GetWindowTextA(pHVar1,pCVar3,nMaxCount);
    uVar2 = _SfTextToNanoTimeToken2_40(local_28,param_1 + 2,0,0,0,0,0,0,2,0);
    if (((int)uVar2 != *param_1) || ((int)((ulonglong)uVar2 >> 0x20) != param_1[1])) {
      *(undefined8 *)param_1 = uVar2;
      _SfNanoTimeToTextEx_20(local_28,param_1 + 2,uVar2,2);
      pCVar3 = local_28;
      pHVar1 = GetDlgItem((HWND)param_1[0xc],0x469);
      SfSetWindowText(pHVar1,pCVar3);
    }
  }
  return;
}


