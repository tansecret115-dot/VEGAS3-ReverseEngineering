/* Module: vegas30.exe
   Function: FUN_0052d8e0
   Address: 0052d8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052d8e0(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_00453a50(param_1,0,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xbc8) != 0) {
    uVar1 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
    FUN_00453a50(param_1,0,0,uVar1);
    return;
  }
  FUN_00453a50(param_1,0,0,*(undefined4 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x604));
  return;
}


