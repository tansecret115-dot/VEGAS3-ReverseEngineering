/* Module: vegas30.exe
   Function: FUN_005256f0
   Address: 005256f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005256f0(int param_1,undefined4 param_2)

{
  int *local_410;
  int *local_40c;
  undefined1 local_214 [532];
  
  SendMessageA(*(HWND *)(param_1 + 0xb0),0x602,0,(LPARAM)&local_410);
  FUN_00524310(param_1,param_2,local_214,0x208);
  (**(code **)(*local_40c + 4))(local_40c);
  SendMessageA(*(HWND *)(param_1 + 0xb0),0x603,0,(LPARAM)&stack0xfffffbec);
  (**(code **)(*local_410 + 8))(local_410);
  return;
}


