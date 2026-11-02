/* Module: vidcap30.exe
   Function: FUN_0051e420
   Address: 0051e420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051e420(int param_1)

{
  DWORD DVar1;
  tagPOINT local_8;
  
  if (*(int *)(param_1 + 0xb0) != -1) {
    DVar1 = GetMessagePos();
    local_8.x = (LONG)(short)DVar1;
    local_8.y = (LONG)(short)(DVar1 >> 0x10);
    ScreenToClient(*(HWND *)(param_1 + 0x30),&local_8);
    FUN_0051d760(param_1,local_8.x,local_8.y,5,0);
  }
  return;
}


