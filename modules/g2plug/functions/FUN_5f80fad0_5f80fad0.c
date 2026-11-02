/* Module: g2plug.dll
   Function: FUN_5f80fad0
   Address: 5f80fad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80fad0(HWND param_1)

{
  uint uVar1;
  WPARAM WVar2;
  
  uVar1 = SendMessageA(param_1,0x146,0,0);
  WVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_5f80fa80(param_1,WVar2);
      WVar2 = WVar2 + 1;
    } while (WVar2 < uVar1);
  }
  return 0;
}


