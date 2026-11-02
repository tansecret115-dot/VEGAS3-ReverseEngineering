/* Module: mcplugrw.dll
   Function: FUN_00406f50
   Address: 00406f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406f50(HWND param_1,int param_2)

{
  HWND pHVar1;
  HWND pHVar2;
  int *piVar3;
  uint uVar4;
  
  SetWindowLongA(param_1,-0x15,*(LONG *)(param_2 + 0x1c));
  FUN_0041ff20(param_1,(HFONT)0x0);
  uVar4 = 0x8001;
  piVar3 = (int *)0x0;
  pHVar2 = (HWND)0x0;
  pHVar1 = GetParent(param_1);
  FUN_00429fa0(pHVar1,pHVar2,piVar3,uVar4);
  return 1;
}


