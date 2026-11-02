/* Module: vegas30.exe
   Function: FUN_00561870
   Address: 00561870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00561870(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0064b138;
  iVar2 = Transport_IsAnyPlaying();
  if (iVar2 != 0) {
    FUN_005fb200(1);
  }
  FUN_00560cc0(uVar1,param_2,0,0,FUN_00560700);
  return;
}


