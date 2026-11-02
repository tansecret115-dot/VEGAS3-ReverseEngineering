/* Module: aviplug.dll
   Function: FUN_5f985290
   Address: 5f985290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f985290(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  HWND pHVar2;
  int *piVar3;
  uint uVar4;
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,-0x15,dwNewLong);
  if (*(int *)(dwNewLong + 100) != 0) {
    uVar4 = 0x8001;
    piVar3 = (int *)0x0;
    pHVar2 = (HWND)0x0;
    pHVar1 = GetParent(param_1);
    FUN_5f9c5f90(pHVar1,pHVar2,piVar3,uVar4);
    *(undefined4 *)(dwNewLong + 100) = 0;
  }
  return dwNewLong;
}


