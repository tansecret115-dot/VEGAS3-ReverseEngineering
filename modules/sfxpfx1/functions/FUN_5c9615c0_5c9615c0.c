/* Module: sfxpfx1.dll
   Function: FUN_5c9615c0
   Address: 5c9615c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c9615c0(RECT *param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (param_1[0xb].left != -1) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient((HWND)param_1[3].left,&local_8);
    FUN_5c960920(param_1,local_8.x,local_8.y,5);
  }
  return;
}


