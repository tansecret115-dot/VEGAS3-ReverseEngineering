/* Module: g2plug.dll
   Function: FUN_5f82e120
   Address: 5f82e120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f82e120(HWND param_1,int param_2)

{
  undefined4 local_2c;
  undefined4 local_28;
  HWND local_24;
  int local_20;
  tagPOINT local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    if ((*(byte *)(param_2 + 0x8c) & 0x20) != 0) {
      local_2c = 0x2c;
      local_28 = 0;
      local_24 = param_1;
      local_20 = GetDlgCtrlID(param_1);
      local_1c.x = *(LONG *)(param_2 + 0x78);
      local_1c.y = *(LONG *)(param_2 + 0x7c);
      local_14 = *(undefined4 *)(param_2 + 0x80);
      local_10 = *(undefined4 *)(param_2 + 0x84);
      MapWindowPoints(param_1,local_24,&local_1c,2);
      local_c = DAT_5f877518;
      local_4 = CONCAT31((int3)((uint)param_2 >> 8),0xc0);
      local_8 = 0xffffffff;
      SendMessageA(*(HWND *)(param_2 + 200),0x404,0,(LPARAM)&local_2c);
    }
    SendMessageA(*(HWND *)(param_2 + 200),0x401,1,0);
  }
  return;
}


