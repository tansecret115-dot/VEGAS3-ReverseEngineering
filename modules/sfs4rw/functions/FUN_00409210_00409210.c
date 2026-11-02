/* Module: sfs4rw.dll
   Function: FUN_00409210
   Address: 00409210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409210(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  HWND pHVar2;
  int *piVar3;
  uint uVar4;
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041fea0(param_1,(HFONT)0x0);
  uVar4 = 0x8001;
  piVar3 = (int *)0x0;
  pHVar2 = (HWND)0x0;
  pHVar1 = GetParent(param_1);
  FUN_00429f20(pHVar1,pHVar2,piVar3,uVar4);
  FUN_00407e80(dwNewLong,param_1,0);
  FUN_00406d10(param_1,*(int *)(dwNewLong + 0x1dc),(uint)(*(int *)(dwNewLong + 0x22c) == 0),
               *(int *)(dwNewLong + 0x254));
  FUN_00408ea0(dwNewLong,param_1);
  CheckRadioButton(param_1,0x1bb2,0x1bb3,0x1bb2);
  FUN_00405c70(0x1bb2,dwNewLong);
  return 1;
}


