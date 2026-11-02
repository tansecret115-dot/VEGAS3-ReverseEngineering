/* Module: sfppack1.dll
   Function: FUN_5cde7c70
   Address: 5cde7c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde7c70(RECT *param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (param_1[0xb].left != -1) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient((HWND)param_1[3].left,&local_8);
    FUN_5cde6fd0(param_1,local_8.x,local_8.y,5);
  }
  return;
}


