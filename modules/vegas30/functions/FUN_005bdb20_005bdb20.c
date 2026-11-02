/* Module: vegas30.exe
   Function: FUN_005bdb20
   Address: 005bdb20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bdb20(int param_1,int *param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 8);
  local_4 = *(undefined4 *)(param_1 + 0xc);
  local_c = 0xc;
  (**(code **)(*param_2 + 0x10))(param_2,&local_c,0xc,0);
  return;
}


