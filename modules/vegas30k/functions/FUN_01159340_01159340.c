/* Module: vegas30k.dll
   Function: FUN_01159340
   Address: 01159340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01159340(undefined4 param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9)

{
  undefined4 uVar1;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if ((((param_2 < _DAT_011db3f0) || (_DAT_011e8030 < param_2)) || (param_3 < _DAT_011db3f0)) ||
     ((_DAT_011e8030 < param_3 || (_DAT_011dad58 < param_2 + param_3)))) {
    FUN_01155fb0(param_1,"Invalid cHRM white point specified");
    return;
  }
  uVar1 = ftol();
  FUN_01158c50(local_20,uVar1);
  uVar1 = ftol();
  FUN_01158c50(local_1c,uVar1);
  if (((_DAT_011db3f0 <= param_4) && (param_4 <= _DAT_011e8030)) &&
     ((_DAT_011db3f0 <= param_5 &&
      ((param_5 <= _DAT_011e8030 && (param_4 + param_5 <= _DAT_011dad58)))))) {
    uVar1 = ftol();
    FUN_01158c50(local_18,uVar1);
    uVar1 = ftol();
    FUN_01158c50(local_14,uVar1);
    if ((((_DAT_011db3f0 <= param_6) && (param_6 <= _DAT_011e8030)) && (_DAT_011db3f0 <= param_7))
       && ((param_7 <= _DAT_011e8030 && (param_6 + param_7 <= _DAT_011dad58)))) {
      uVar1 = ftol();
      FUN_01158c50(local_10,uVar1);
      uVar1 = ftol();
      FUN_01158c50(local_c,uVar1);
      if (((_DAT_011db3f0 <= param_8) && (param_8 <= _DAT_011e8030)) &&
         ((_DAT_011db3f0 <= param_9 &&
          ((param_9 <= _DAT_011e8030 && (param_8 + param_9 <= _DAT_011dad58)))))) {
        uVar1 = ftol();
        FUN_01158c50(local_8,uVar1);
        uVar1 = ftol();
        FUN_01158c50(local_4,uVar1);
        FUN_01158cd0(param_1,&DAT_01206fe4,local_20,0x20);
        return;
      }
      FUN_01155fb0(param_1,"Invalid cHRM blue point specified");
      return;
    }
    FUN_01155fb0(param_1,"Invalid cHRM green point specified");
    return;
  }
  FUN_01155fb0(param_1,"Invalid cHRM red point specified");
  return;
}


