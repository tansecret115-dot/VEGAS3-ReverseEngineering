/* Module: vidcap30.exe
   Function: FUN_0054ca50
   Address: 0054ca50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054ca50(undefined4 param_1,double param_2,double param_3,double param_4,double param_5,
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
  
  if ((((param_2 < _DAT_00589f10) || (_DAT_0059eaf8 < param_2)) || (param_3 < _DAT_00589f10)) ||
     ((_DAT_0059eaf8 < param_3 || (_DAT_00587ad0 < param_2 + param_3)))) {
    FUN_00549570(param_1,"Invalid cHRM white point specified");
    return;
  }
  uVar1 = ftol();
  FUN_0054c360(local_20,uVar1);
  uVar1 = ftol();
  FUN_0054c360(local_1c,uVar1);
  if (((_DAT_00589f10 <= param_4) && (param_4 <= _DAT_0059eaf8)) &&
     ((_DAT_00589f10 <= param_5 &&
      ((param_5 <= _DAT_0059eaf8 && (param_4 + param_5 <= _DAT_00587ad0)))))) {
    uVar1 = ftol();
    FUN_0054c360(local_18,uVar1);
    uVar1 = ftol();
    FUN_0054c360(local_14,uVar1);
    if ((((_DAT_00589f10 <= param_6) && (param_6 <= _DAT_0059eaf8)) && (_DAT_00589f10 <= param_7))
       && ((param_7 <= _DAT_0059eaf8 && (param_6 + param_7 <= _DAT_00587ad0)))) {
      uVar1 = ftol();
      FUN_0054c360(local_10,uVar1);
      uVar1 = ftol();
      FUN_0054c360(local_c,uVar1);
      if (((_DAT_00589f10 <= param_8) && (param_8 <= _DAT_0059eaf8)) &&
         ((_DAT_00589f10 <= param_9 &&
          ((param_9 <= _DAT_0059eaf8 && (param_8 + param_9 <= _DAT_00587ad0)))))) {
        uVar1 = ftol();
        FUN_0054c360(local_8,uVar1);
        uVar1 = ftol();
        FUN_0054c360(local_4,uVar1);
        FUN_0054c3e0(param_1,&DAT_005b89d4,local_20,0x20);
        return;
      }
      FUN_00549570(param_1,"Invalid cHRM blue point specified");
      return;
    }
    FUN_00549570(param_1,"Invalid cHRM green point specified");
    return;
  }
  FUN_00549570(param_1,"Invalid cHRM red point specified");
  return;
}


