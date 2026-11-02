/* Module: sftrans1.dll
   Function: FUN_0054ef90
   Address: 0054ef90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0054ef90(int param_1,byte param_2,short *param_3)

{
  tagRECT local_4c;
  tagRECT local_3c;
  undefined4 local_2c [2];
  HWND local_24;
  HWND local_20;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    local_24 = *(HWND *)(param_1 + 4);
    local_2c[0] = 0x2c;
    local_20 = local_24;
    if (param_2 != 0) {
      GetWindowRect(local_24,&local_3c);
      GetWindowRect(*(HWND *)(param_1 + 0x1b0),&local_4c);
      SendMessageA(*(HWND *)(param_1 + 0x1b0),0x412,0,
                   ((uint)(ushort)(param_3[2] - (short)local_4c.bottom) + local_4c.top +
                   local_3c.top) * 0x10000 | (uint)(ushort)(*param_3 + (short)local_3c.left));
    }
    SendMessageA(*(HWND *)(param_1 + 0x1b0),0x411,(uint)param_2,(LPARAM)local_2c);
  }
  return;
}


