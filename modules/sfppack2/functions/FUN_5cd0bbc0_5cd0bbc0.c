/* Module: sfppack2.dll
   Function: FUN_5cd0bbc0
   Address: 5cd0bbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0bbc0(undefined4 *param_1)

{
  HDC pHVar1;
  int iVar2;
  HDC pHVar3;
  
  pHVar1 = (HDC)param_1[0xd];
  if (pHVar1 != (HDC)0xffffffff) {
    pHVar3 = (HDC)param_1[0xe];
    if ((((uint)((param_1[0x28] - (int)pHVar3) + -1 + (int)pHVar1) < (uint)param_1[0x26]) ||
        (pHVar1 == (HDC)0x0)) || (pHVar3 == (HDC)(param_1[0x28] - 1))) {
      MessageBeep(0);
    }
    else {
      if (pHVar1 <= pHVar3) {
        do {
          iVar2 = FUN_5cd0a470(param_1,pHVar3);
          if (iVar2 == 0) break;
          pHVar3 = (HDC)((int)&pHVar3[-1].unused + 3);
        } while ((HDC)param_1[0xd] <= pHVar3);
      }
      if ((HWND)param_1[0x1b] != (HWND)0x0) {
        PostMessageA((HWND)param_1[0x1b],0x612,0,
                     CONCAT22(*(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0xd)));
        return;
      }
    }
  }
  return;
}


