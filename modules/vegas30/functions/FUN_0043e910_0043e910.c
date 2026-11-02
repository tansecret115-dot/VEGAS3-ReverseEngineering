/* Module: vegas30.exe
   Function: FUN_0043e910
   Address: 0043e910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043e910(int *param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_10 = **(undefined4 **)(param_2 + 0x28);
  lstrcpynA((LPSTR)&local_20,(LPCSTR)(*(undefined4 **)(param_2 + 0x28) + 1),0xd);
  local_4 = local_18;
  local_8 = local_1c;
  local_c = local_20;
  local_14 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&local_10,0x10,0);
  return;
}


