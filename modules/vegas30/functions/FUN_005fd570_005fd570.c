/* Module: vegas30.exe
   Function: FUN_005fd570
   Address: 005fd570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005fd570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 6:
    *param_4 = DAT_00647e68;
    param_4[1] = DAT_00647e6c;
    return 0;
  case 7:
    uVar1 = __allmul(DAT_0064a544,0,DAT_00647e68,DAT_00647e6c);
    uVar1 = __alldiv(uVar1,2,0);
    DAT_0064940c = (undefined4)((ulonglong)uVar1 >> 0x20);
    _DAT_00649408 = (undefined4)uVar1;
    *param_4 = _DAT_00649408;
    param_4[1] = DAT_0064940c;
    return 0;
  default:
    return 1;
  case 10:
    *param_4 = DAT_006486a0;
    param_4[1] = DAT_006486a4;
    return 0;
  case 0xb:
    *param_4 = DAT_006486a8;
    param_4[1] = DAT_006486ac;
    return 0;
  case 0x40:
    *param_4 = DAT_0064942c;
    return 0;
  case 0x60:
    *param_4 = DAT_0064867c;
    return 0;
  case 0x61:
    *param_4 = DAT_00648680;
    return 0;
  case 0x70:
    *param_4 = DAT_006487fc;
    return 0;
  case 0x71:
    *param_4 = DAT_00648804;
    return 0;
  case 0x72:
    *param_4 = DAT_00649414;
    return 0;
  case 0x73:
    *param_4 = DAT_00649418;
    return 0;
  case 0x74:
    *param_4 = DAT_0064941c;
    return 0;
  case 0x80:
    *param_4 = DAT_00648828;
    return 0;
  case 0x81:
    *param_4 = DAT_0064882c;
    return 0;
  case 0x82:
    *param_4 = DAT_00648834;
    return 0;
  case 0x83:
    *param_4 = DAT_006491fc;
    return 0;
  case 0x84:
    *param_4 = DAT_00649434;
    return 0;
  case 0x90:
    *param_4 = DAT_0064a4fc;
    return 0;
  case 0x91:
    *param_4 = DAT_0064a500;
    param_4[1] = DAT_0064a504;
    return 0;
  case 0x100:
    *param_4 = DAT_0064a548;
    return 0;
  }
}


