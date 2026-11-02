/* Module: sfpagepeel.dll
   Function: FUN_0041d5f0
   Address: 0041d5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041d5f0(byte *param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (*(int *)(param_1 + 0x90) != -1) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient(*(HWND *)(param_1 + 0x38),&local_8);
    FUN_0041cf00(param_1,local_8.x,local_8.y,5);
  }
  return;
}


