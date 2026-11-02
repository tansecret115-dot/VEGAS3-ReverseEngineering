/* Module: vegas30.exe
   Function: FUN_00525480
   Address: 00525480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00525480(int param_1)

{
  undefined4 uVar1;
  undefined1 local_104 [260];
  
  uVar1 = FUN_005256c0(param_1);
  FUN_00524310(param_1,uVar1,local_104,0x104);
  SendMessageA(*(HWND *)(param_1 + 0xb0),0x60c,0,(LPARAM)local_104);
  return;
}


