/* Module: vegas30.exe
   Function: FUN_004a4510
   Address: 004a4510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a4510(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar5 = 0x11d8;
  uVar4 = 0;
  puVar3 = &DAT_0063e5c8;
  uVar1 = _SfGetString_8(DAT_00647204,0x502f);
  iVar2 = FUN_00411360(0x302,0,&PTR_LAB_0063e5a8,uVar1,puVar3,param_2,uVar4,uVar5,uVar6);
  if (iVar2 != 0) {
    DAT_00647630 = iVar2 + 0x80;
  }
  return;
}


