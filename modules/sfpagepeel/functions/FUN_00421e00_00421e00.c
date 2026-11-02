/* Module: sfpagepeel.dll
   Function: FUN_00421e00
   Address: 00421e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00421e00(uint *param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (param_1[0x30] != 0xffffffff) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient((HWND)param_1[10],&local_8);
    FUN_00421570(param_1,local_8.x,local_8.y,5);
  }
  return;
}


