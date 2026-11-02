/* Module: vegas30.exe
   Function: FUN_004dd440
   Address: 004dd440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dd440(int param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = 1;
    if (param_2 == 0) {
      FUN_00453340(param_1,*(undefined4 *)(param_1 + 0xb70),*(undefined4 *)(param_1 + 0xb74),0,0,1);
      return;
    }
    uVar1 = FUN_004dbf80(param_1);
    FUN_00453340(param_1,0,0,uVar1,uVar2);
  }
  return;
}


