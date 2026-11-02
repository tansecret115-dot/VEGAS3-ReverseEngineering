/* Module: mcplugrw.dll
   Function: FUN_0040a6e0
   Address: 0040a6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a6e0(HWND param_1,int param_2)

{
  int dwNewLong;
  LPSTR pCVar1;
  HWND pHVar2;
  HWND pHVar3;
  int *piVar4;
  uint uVar5;
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  FUN_0041ff20(param_1,(HFONT)0x0);
  uVar5 = 0x8001;
  piVar4 = (int *)0x0;
  pHVar3 = (HWND)0x0;
  pHVar2 = GetParent(param_1);
  FUN_00429fa0(pHVar2,pHVar3,piVar4,uVar5);
  FUN_00407ee0(dwNewLong,param_1,0);
  FUN_00408f00(dwNewLong,param_1);
  *(undefined4 *)(dwNewLong + 0x220) = 0;
  pCVar1 = DAT_004a84e0;
  FUN_00404140(DAT_004a84e0);
  FUN_00404df0(param_1,pCVar1);
  return 1;
}


