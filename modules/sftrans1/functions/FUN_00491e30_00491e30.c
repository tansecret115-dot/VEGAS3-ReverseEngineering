/* Module: sftrans1.dll
   Function: FUN_00491e30
   Address: 00491e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00491e30(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 0;
  local_154 = param_3;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_158 = param_2;
  local_148 = 2;
  local_144 = 1;
  local_140 = 0xffffffff;
  local_13c = 0x3f800000;
  local_138 = 0x3f000000;
  local_134 = 0x3f000000;
  local_130 = 0;
  local_12c = 0;
  local_28 = 0;
  local_24 = 0xffffff;
  local_20 = 0;
  local_1c = 0x3f800000;
  local_8 = 1;
  local_4 = 0;
  local_150 = param_6;
  local_14c = param_7;
  SendMessageA(param_1,0x804,0,(LPARAM)&local_158);
  local_158 = param_4;
  local_154 = param_5;
  SendMessageA(param_1,0x804,1,(LPARAM)&local_158);
  SendMessageA(param_1,0x80f,0,0);
  return;
}


