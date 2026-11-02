/* Module: vegas30.exe
   Function: FUN_004176a0
   Address: 004176a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004176a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 0x3c;
  uVar3 = 0;
  puVar2 = &DAT_0063d1d8;
  uVar1 = _SfGetString_8(DAT_00647204,0x4fa1);
  FUN_00411360(0x42,0,&PTR_LAB_0063d1b8,uVar1,puVar2,param_2,uVar3,uVar4,uVar5);
  return;
}


