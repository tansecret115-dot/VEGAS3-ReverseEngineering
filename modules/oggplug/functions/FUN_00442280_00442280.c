/* Module: oggplug.dll
   Function: FUN_00442280
   Address: 00442280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_00442280(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)param_1[7];
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffff7f;
  }
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[1] = param_2;
  *param_1 = 0;
  iVar2 = param_5 / param_2;
  param_1[6] = 2;
  if (param_2 == 2) {
    if (iVar2 < 35000) {
      FUN_00442430(puVar1,(undefined4 *)&DAT_0046b3f8);
      return 0;
    }
    if (iVar2 < 45000) {
      FUN_00442430(puVar1,(undefined4 *)&DAT_004724f0);
      return 0;
    }
    if (iVar2 < 55000) {
      FUN_00442430(puVar1,(undefined4 *)&DAT_00488d90);
      return 0;
    }
    if (iVar2 < 75000) {
      FUN_00442430(puVar1,(undefined4 *)&DAT_00496a08);
      return 0;
    }
    if (iVar2 < 90000) {
      FUN_00442430(puVar1,(undefined4 *)&DAT_004a2c68);
      return 0;
    }
    if (iVar2 < 110000) {
      FUN_00442430(puVar1,(undefined4 *)&DAT_004bbcf8);
      return 0;
    }
    puVar3 = (undefined4 *)&DAT_004c0488;
    if (159999 < iVar2) {
      puVar3 = (undefined4 *)&DAT_004da5b0;
    }
    FUN_00442430(puVar1,puVar3);
    return 0;
  }
  if (iVar2 < 40000) {
    FUN_00442430(puVar1,(undefined4 *)&DAT_004ee0b0);
    return 0;
  }
  if (iVar2 < 50000) {
    FUN_00442430(puVar1,(undefined4 *)&DAT_004f2a38);
    return 0;
  }
  if (iVar2 < 70000) {
    FUN_00442430(puVar1,(undefined4 *)&DAT_004f71c8);
    return 0;
  }
  if (iVar2 < 90000) {
    FUN_00442430(puVar1,(undefined4 *)&DAT_004fb958);
    return 0;
  }
  if (iVar2 < 120000) {
    FUN_00442430(puVar1,(undefined4 *)&DAT_0050b648);
    return 0;
  }
  FUN_00442430(puVar1,(undefined4 *)&DAT_0050fdd8);
  return 0;
}


