/* Module: tokr3260.dll
   Function: FUN_68052940
   Address: 68052940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68052940(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((((param_1 != 0x21) && (param_1 != 0x2f)) && (param_1 != 0x42)) &&
      (((param_1 != 0x5e && (param_1 != 0x69)) &&
       ((param_1 != 0x84 && ((param_1 != 0x92 && (param_1 != 0xb0)))))))) &&
     ((param_1 != 0xbc &&
      ((((param_1 != 0xd2 && (param_1 != 0x108)) && (param_1 != 0x124)) && (param_1 != 0x160)))))) {
    return 0xfffffffd;
  }
  puVar2 = param_3;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_2 == 0) {
    param_2 = ((0x5e < param_1) - 1 & 0x10) + 2;
  }
  if (param_2 == 2) {
    param_3[3] = 2;
  }
  else if (param_2 == 0x12) {
    param_3[3] = 0x12;
  }
  param_3[3] = param_2;
  param_3[1] = 0xac44;
  param_3[4] = 1;
  param_3[6] = 0;
  if (param_1 < 0x30) {
    if (param_1 == 0x2f) {
      param_3[7] = 0x44;
    }
    else if (param_1 == 0x21) {
      param_3[7] = 0x30;
    }
  }
  else if (param_1 < 0x5f) {
    if (param_1 == 0x5e) {
      param_3[7] = 0x88;
    }
    else if (param_1 == 0x42) {
      param_3[7] = 0x60;
    }
  }
  else {
    switch(param_1) {
    case 0x69:
      param_3[7] = 0x98;
      break;
    case 0x84:
      param_3[7] = 0xc0;
      break;
    case 0x92:
      param_3[7] = 0xd4;
      break;
    case 0xb0:
      param_3[7] = 0x100;
      break;
    case 0xbc:
      param_3[7] = 0x110;
      break;
    case 0xd2:
      param_3[7] = 0x130;
      break;
    case 0x108:
      param_3[7] = 0x180;
      break;
    case 0x124:
      param_3[7] = 0x1a8;
      break;
    case 0x160:
      param_3[7] = 0x200;
    }
  }
  iVar1 = FUN_68051770(2,param_3[3],param_3[1],param_3[4],param_3[6],param_3[7],(int)param_3);
  if (iVar1 == -999999) {
    return 0xffffffff;
  }
  if (param_3[3] == 0x12) {
    param_3[0x19] = param_3[4] * param_3[7];
    param_3[0x17] = param_3[2] << 0xb;
    return 0;
  }
  param_3[0x19] = param_3[4] * param_3[7];
  param_3[0x17] = param_3[2] << 0xb;
  return 0;
}


