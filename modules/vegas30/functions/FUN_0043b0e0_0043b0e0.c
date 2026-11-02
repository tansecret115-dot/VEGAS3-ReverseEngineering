/* Module: vegas30.exe
   Function: FUN_0043b0e0
   Address: 0043b0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0043b0e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  param_2 = param_2 + 0x65;
  if (DAT_0064762c == 0) {
    return false;
  }
  iVar1 = FUN_0040c050(param_2);
  if (iVar1 == 0) {
    uVar6 = 0;
    uVar5 = 0x2d4;
    uVar4 = 0;
    puVar3 = &local_2c;
    local_2c = 0x2c;
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 3;
    local_8 = 500;
    local_4 = 0x3c;
    uVar2 = _SfGetString_8(DAT_00647204,0x4fad);
    iVar1 = FUN_00411360(0x13,0,&PTR_LAB_0063dcc0,uVar2,puVar3,param_2,uVar4,uVar5,uVar6);
    return iVar1 != 0;
  }
  DestroyWindow(*(HWND *)(iVar1 + 8));
  return true;
}


