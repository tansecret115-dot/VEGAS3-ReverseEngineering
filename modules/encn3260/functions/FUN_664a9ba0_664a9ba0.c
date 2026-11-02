/* Module: encn3260.dll
   Function: FUN_664a9ba0
   Address: 664a9ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664a9ba0(int param_1)

{
  POINT Point;
  HWND pHVar1;
  int *piVar2;
  undefined4 local_2c;
  HWND local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  tagPOINT local_c;
  
  if (*(int *)(param_1 + 0x168) != 0) {
    GetCursorPos(&local_c);
    Point.y = local_c.y;
    Point.x = local_c.x;
    pHVar1 = WindowFromPoint(Point);
    local_28 = *(HWND *)(param_1 + 0x144);
    if (pHVar1 != local_28) {
      local_14 = 0xffffffff;
      local_10 = 0xffffffff;
      local_24 = &local_14;
      local_2c = 0x3007;
      piVar2 = (int *)(*(int *)(param_1 + 0x168) + 0xc);
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      (**(code **)(*piVar2 + 0xc))(piVar2,&local_2c);
      *(undefined4 *)(param_1 + 0x168) = 0;
      return 1;
    }
  }
  return 0;
}


