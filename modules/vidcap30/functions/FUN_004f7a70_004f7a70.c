/* Module: vidcap30.exe
   Function: FUN_004f7a70
   Address: 004f7a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f7a70(int param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  HWND pHVar3;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  pHVar1 = *(HWND *)(param_1 + 0x18);
  LVar2 = SendMessageA(pHVar1,0x110a,9,0);
  if (LVar2 != 0) {
    LVar2 = SendMessageA(pHVar1,0x110a,3,LVar2);
    if (LVar2 != 0) {
      pHVar3 = GetFocus();
      SendMessageA(pHVar1,0x110b,9,LVar2);
      pHVar1 = *(HWND *)(param_1 + 0x1c);
      if (pHVar3 == pHVar1) {
        LVar2 = SendMessageA(pHVar1,0x1004,0,0);
        if (LVar2 != 0) {
          local_18 = 0xf;
          local_1c = 1;
          SendMessageA(pHVar1,0x102b,0,(LPARAM)local_28);
        }
      }
    }
  }
  return;
}


