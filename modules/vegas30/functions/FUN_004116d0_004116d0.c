/* Module: vegas30.exe
   Function: FUN_004116d0
   Address: 004116d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004116d0(int param_1,uint param_2,LPRECT param_3)

{
  HWND pHVar1;
  HWND hWndTo;
  
  GetClientRect(*(HWND *)(param_1 + 8),param_3);
  FUN_00411660(param_3,*(uint *)(param_1 + 0xc) >> 4 & 1,param_2);
  hWndTo = (HWND)0x0;
  if ((param_2 & 2) != 0) {
    hWndTo = (HWND)**(undefined4 **)(param_1 + 4);
    pHVar1 = (HWND)(*(undefined4 **)(param_1 + 4))[0xc];
    if ((pHVar1 != (HWND)0x0) && ((*(byte *)(param_1 + 0xc) & 0x10) == 0)) {
      hWndTo = pHVar1;
    }
  }
  MapWindowPoints(*(HWND *)(param_1 + 8),hWndTo,(LPPOINT)param_3,2);
  return;
}


