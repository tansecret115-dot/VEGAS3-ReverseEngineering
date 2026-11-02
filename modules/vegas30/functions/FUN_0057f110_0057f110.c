/* Module: vegas30.exe
   Function: FUN_0057f110
   Address: 0057f110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0057f110(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_005808d0();
  FUN_005802b0(&local_4,0x104,"%s %s","Sonic Foundry",*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  FUN_00584840(1,&local_4);
  FUN_00584840(2,&local_4);
  FUN_00580c90(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  FUN_00584840(0,&local_4);
  FUN_00580a90();
  return 0;
}


