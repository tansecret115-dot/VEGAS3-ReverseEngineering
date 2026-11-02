/* Module: stl2plg.dll
   Function: FUN_00450f00
   Address: 00450f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450f00(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte local_64 [4];
  float local_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  
  uVar1 = param_1[0x18];
  if ((uVar1 & 1) == 0) {
    FUN_0044fa30(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_0044fa60((int)param_1,"Invalid cHRM after IDAT");
      FUN_00450790(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 4) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_0044fa60((int)param_1,"Duplicate cHRM chunk");
        FUN_00450790(param_1,param_3);
        return;
      }
    }
    else {
      FUN_0044fa60((int)param_1,"Missing PLTE before cHRM");
    }
  }
  if (param_3 != 0x20) {
    FUN_0044fa60((int)param_1,"Incorrect cHRM chunk length");
    FUN_00450790(param_1,param_3);
    return;
  }
  FUN_00450760(param_1,local_64,4);
  uVar1 = FUN_00450710(local_64);
  local_10 = (double)(ulonglong)uVar1;
  local_50 = (float)(longlong)local_10 * _DAT_0046e5c4;
  FUN_00450760(param_1,local_64,4);
  uVar1 = FUN_00450710(local_64);
  local_10 = (double)(ulonglong)uVar1;
  local_4c = (float)(longlong)local_10 * _DAT_0046e5c4;
  if (((local_50 < _DAT_0046a064) || (local_38 = (double)local_50, (float)_DAT_0046e818 < local_50))
     || ((local_4c < _DAT_0046a064 ||
         ((local_10 = (double)local_4c, (float)_DAT_0046e818 < local_4c ||
          ((float)_DAT_00464ad8 < local_4c + local_50)))))) {
    FUN_0044fa60((int)param_1,"Invalid cHRM white point");
    FUN_00450790(param_1,0x18);
  }
  else {
    FUN_00450760(param_1,local_64,4);
    uVar1 = FUN_00450710(local_64);
    local_18 = (double)(ulonglong)uVar1;
    local_48 = (float)(longlong)local_18 * _DAT_0046e5c4;
    FUN_00450760(param_1,local_64,4);
    uVar1 = FUN_00450710(local_64);
    local_18 = (double)(ulonglong)uVar1;
    local_44 = (float)(longlong)local_18 * _DAT_0046e5c4;
    if ((((local_48 < _DAT_0046a064) ||
         (local_18 = (double)local_48, (float)_DAT_0046e818 < local_48)) ||
        (local_44 < _DAT_0046a064)) ||
       ((local_20 = (double)local_44, (float)_DAT_0046e818 < local_44 ||
        ((float)_DAT_00464ad8 < local_44 + local_48)))) {
      FUN_0044fa60((int)param_1,"Invalid cHRM red point");
      FUN_00450790(param_1,0x10);
      return;
    }
    FUN_00450760(param_1,local_64,4);
    uVar1 = FUN_00450710(local_64);
    local_28 = (double)(ulonglong)uVar1;
    local_40 = (float)(longlong)local_28 * _DAT_0046e5c4;
    FUN_00450760(param_1,local_64,4);
    uVar1 = FUN_00450710(local_64);
    local_28 = (double)(ulonglong)uVar1;
    local_3c = (float)(longlong)local_28 * _DAT_0046e5c4;
    if (((local_40 < _DAT_0046a064) ||
        (local_28 = (double)local_40, (float)_DAT_0046e818 < local_40)) ||
       ((local_3c < _DAT_0046a064 ||
        ((local_30 = (double)local_3c, (float)_DAT_0046e818 < local_3c ||
         ((float)_DAT_00464ad8 < local_3c + local_40)))))) {
      FUN_0044fa60((int)param_1,"Invalid cHRM green point");
      FUN_00450790(param_1,8);
      return;
    }
    FUN_00450760(param_1,local_64,4);
    uVar1 = FUN_00450710(local_64);
    uStack_54 = 0;
    local_58 = (float)uVar1 * _DAT_0046e5c4;
    FUN_00450760(param_1,local_64,4);
    uVar1 = FUN_00450710(local_64);
    uStack_5c = 0;
    local_60 = (float)uVar1 * _DAT_0046e5c4;
    if ((((local_58 < _DAT_0046a064) || (_DAT_0046e814 < local_58)) || (local_60 < _DAT_0046a064))
       || ((_DAT_0046e814 < local_60 || (_DAT_00464af0 < local_60 + local_58)))) {
      FUN_0044fa60((int)param_1,"Invalid cHRM blue point");
      FUN_00450790(param_1,0);
      return;
    }
    iVar2 = FUN_00450790(param_1,0);
    if (iVar2 == 0) {
      if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
        FUN_004574b0((int)param_1,param_2,local_38,local_10,local_18,local_20,local_28,local_30,
                     (double)local_58,(double)local_60);
        return;
      }
      if (((((float)_DAT_0046e808 < ABS(local_50 - _DAT_0046e810)) ||
           ((float)_DAT_0046e808 < ABS(local_4c - _DAT_0046e800))) ||
          (((float)_DAT_0046e808 < ABS(local_48 - _DAT_0046e7fc) ||
           ((((float)_DAT_0046e808 < ABS(local_44 - _DAT_0046e7f8) ||
             ((float)_DAT_0046e808 < ABS(local_40 - _DAT_0046e7f4))) ||
            ((float)_DAT_0046e808 < ABS(local_3c - _DAT_0046e7f0))))))) ||
         (((float)_DAT_0046e808 < ABS(local_58 - _DAT_0046e7ec) ||
          ((float)_DAT_0046e808 < ABS(local_60 - _DAT_0046e7e8))))) {
        FUN_0044fa60((int)param_1,"Ignoring incorrect cHRM value when sRGB is also present");
        fprintf((FILE *)(_iob_exref + 0x40),"wx=%f, wy=%f, rx=%f, ry=%f\n",(undefined4)local_38,
                local_38._4_4_,(undefined4)local_10,local_10._4_4_,local_18._0_4_,
                (int)((ulonglong)local_18 >> 0x20),local_20._0_4_,(int)((ulonglong)local_20 >> 0x20)
               );
        fprintf((FILE *)(_iob_exref + 0x40),"gx=%f, gy=%f, bx=%f, by=%f\n",(undefined4)local_28,
                local_28._4_4_,(undefined4)local_30,local_30._4_4_,(double)local_58,(double)local_60
               );
        return;
      }
    }
  }
  return;
}


