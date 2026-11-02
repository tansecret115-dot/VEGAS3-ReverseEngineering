/* Module: sfs4rw.dll
   Function: FUN_0040a680
   Address: 0040a680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a680(HWND param_1,int param_2)

{
  int dwNewLong;
  LPSTR pCVar1;
  HWND pHVar2;
  HWND pHVar3;
  int *piVar4;
  uint uVar5;
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041fea0(param_1,(HFONT)0x0);
  uVar5 = 0x8001;
  piVar4 = (int *)0x0;
  pHVar3 = (HWND)0x0;
  pHVar2 = GetParent(param_1);
  FUN_00429f20(pHVar2,pHVar3,piVar4,uVar5);
  FUN_00407e80(dwNewLong,param_1,0);
  FUN_00408ea0(dwNewLong,param_1);
  *(undefined4 *)(dwNewLong + 0x220) = 0;
  pCVar1 = DAT_004a84e0;
  FUN_004040e0(DAT_004a84e0);
  FUN_00404d90(param_1,pCVar1);
  return 1;
}


