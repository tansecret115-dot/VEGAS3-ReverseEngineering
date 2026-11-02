/* Module: sfnetmedia.dll
   Function: FUN_0041ea90
   Address: 0041ea90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ea90(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  HWND pHVar2;
  int *piVar3;
  uint uVar4;
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  if (*(int *)(dwNewLong + 0x50) != 0) {
    uVar4 = 0x8001;
    piVar3 = (int *)0x0;
    pHVar2 = (HWND)0x0;
    pHVar1 = GetParent(param_1);
    FUN_0041c3e0(pHVar1,pHVar2,piVar3,uVar4);
    *(undefined4 *)(dwNewLong + 0x50) = 0;
  }
  return dwNewLong;
}


