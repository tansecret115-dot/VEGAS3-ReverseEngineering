/* Module: sfmarket2.dll
   Function: FUN_00481700
   Address: 00481700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481700(int *param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9)

{
  undefined4 uVar1;
  byte local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if ((((param_2 < _DAT_0049c7a8) || (_DAT_004a2e40 < param_2)) || (param_3 < _DAT_0049c7a8)) ||
     ((_DAT_004a2e40 < param_3 || (_DAT_0049e748 < param_2 + param_3)))) {
    FUN_0047e370((int)param_1,"Invalid cHRM white point specified");
    return;
  }
  uVar1 = ftol();
  FUN_00481010(local_20,uVar1);
  uVar1 = ftol();
  FUN_00481010(local_1c,uVar1);
  if (((_DAT_0049c7a8 <= param_4) && (param_4 <= _DAT_004a2e40)) &&
     ((_DAT_0049c7a8 <= param_5 &&
      ((param_5 <= _DAT_004a2e40 && (param_4 + param_5 <= _DAT_0049e748)))))) {
    uVar1 = ftol();
    FUN_00481010(local_18,uVar1);
    uVar1 = ftol();
    FUN_00481010(local_14,uVar1);
    if ((((_DAT_0049c7a8 <= param_6) && (param_6 <= _DAT_004a2e40)) && (_DAT_0049c7a8 <= param_7))
       && ((param_7 <= _DAT_004a2e40 && (param_6 + param_7 <= _DAT_0049e748)))) {
      uVar1 = ftol();
      FUN_00481010(local_10,uVar1);
      uVar1 = ftol();
      FUN_00481010(local_c,uVar1);
      if (((_DAT_0049c7a8 <= param_8) && (param_8 <= _DAT_004a2e40)) &&
         ((_DAT_0049c7a8 <= param_9 &&
          ((param_9 <= _DAT_004a2e40 && (param_8 + param_9 <= _DAT_0049e748)))))) {
        uVar1 = ftol();
        FUN_00481010(local_8,uVar1);
        uVar1 = ftol();
        FUN_00481010(local_4,uVar1);
        FUN_00481090(param_1,(byte *)&DAT_004a86b0,local_20,0x20);
        return;
      }
      FUN_0047e370((int)param_1,"Invalid cHRM blue point specified");
      return;
    }
    FUN_0047e370((int)param_1,"Invalid cHRM green point specified");
    return;
  }
  FUN_0047e370((int)param_1,"Invalid cHRM red point specified");
  return;
}


