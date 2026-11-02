/* Module: vegas30.exe
   Function: FUN_00489d80
   Address: 00489d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00489d80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 1:
  case 2:
    pcVar1 = (code *)&LAB_0048a410;
    break;
  case 3:
    pcVar1 = (code *)&LAB_0048a430;
    break;
  case 4:
  case 6:
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x36:
  case 0x37:
  case 0x39:
    pcVar1 = (code *)&LAB_0048a160;
    break;
  case 5:
  case 0x38:
    pcVar1 = (code *)&LAB_0048a1b0;
    break;
  case 7:
  case 0x2a:
  case 0x3a:
    pcVar1 = (code *)&LAB_0048a120;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x35:
  case 0x4a:
  case 0x4b:
    pcVar1 = (code *)&LAB_0048aa60;
    break;
  default:
    return 0;
  case 0x17:
  case 0x29:
    pcVar1 = (code *)&LAB_0048a580;
    break;
  case 0x18:
    pcVar1 = (code *)&LAB_0048a390;
    break;
  case 0x19:
    pcVar1 = (code *)&LAB_0048a3c0;
    break;
  case 0x1a:
    pcVar1 = FUN_0048a7f0;
    break;
  case 0x1b:
    pcVar1 = (code *)&LAB_0048a9a0;
    break;
  case 0x1c:
    pcVar1 = (code *)&LAB_0048a220;
    break;
  case 0x1d:
    pcVar1 = (code *)&LAB_0048a300;
    break;
  case 0x1e:
    pcVar1 = (code *)&LAB_0048a290;
    break;
  case 0x1f:
    pcVar1 = FUN_0048a8c0;
    break;
  case 0x20:
    pcVar1 = (code *)&LAB_0048aae0;
    break;
  case 0x21:
    pcVar1 = (code *)&LAB_0048aad0;
    break;
  case 0x27:
  case 0x28:
    pcVar1 = (code *)&LAB_0048a3f0;
    break;
  case 0x31:
  case 0x32:
  case 0x33:
    pcVar1 = FUN_0048a520;
    break;
  case 0x34:
    pcVar1 = (code *)&LAB_0048a600;
    break;
  case 0x3b:
  case 0x3e:
    pcVar1 = (code *)&LAB_0048a5e0;
    break;
  case 0x3c:
    pcVar1 = (code *)&LAB_0048a630;
    break;
  case 0x3d:
    pcVar1 = (code *)&LAB_0048a6a0;
    break;
  case 0x47:
    pcVar1 = FUN_0048a770;
    break;
  case 0x48:
    pcVar1 = FUN_0048a7b0;
    break;
  case 0x4c:
    pcVar1 = (code *)&LAB_0048a710;
  }
  if (param_4 == (undefined4 *)0x0) {
    return 1;
  }
  uVar3 = 0;
  switch(param_2) {
  case 1:
  case 2:
    uVar2 = 0x21;
    break;
  case 3:
  case 4:
    uVar2 = 0x80001;
    break;
  case 5:
  case 6:
    uVar2 = 0x41;
    break;
  case 7:
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    uVar2 = 0x101;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar2 = 0x81;
    break;
  default:
    uVar2 = 0xb23ff;
    uVar3 = 0x60;
    break;
  case 0x20:
  case 0x21:
    uVar2 = 0x20001;
    break;
  case 0x27:
  case 0x28:
    uVar2 = 5;
    break;
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
    uVar2 = 9;
  }
  param_4[3] = pcVar1;
  *param_4 = param_1;
  param_4[1] = uVar3;
  param_4[2] = uVar2;
  param_4[4] = &DAT_0064c328 + param_2 * 6;
  param_4[5] = param_3;
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  switch(param_1) {
  case 1:
    break;
  default:
    return 1;
  case 3:
    param_4[6] = &LAB_0048a600;
    param_4[7] = &DAT_0064c808;
    param_4[8] = param_3;
    param_4[9] = &LAB_0048a160;
    param_4[10] = &DAT_0064c838;
    param_4[0xb] = param_3;
    return 1;
  case 4:
    param_4[6] = &LAB_0048a600;
    param_4[7] = &DAT_0064c808;
    param_4[8] = param_3;
    param_4[9] = &LAB_0048a160;
    param_4[10] = &DAT_0064c850;
    param_4[0xb] = param_3;
    return 1;
  case 5:
  case 6:
    param_4[6] = &LAB_0048a160;
    param_4[7] = &DAT_0064c838;
    param_4[8] = param_3;
    return 1;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
    param_4[6] = &LAB_0048a470;
    param_4[7] = &DAT_0064c370;
    param_4[2] = param_4[2] | 0x80004;
    param_4[8] = param_3;
    return 1;
  }
  param_4[3] = &LAB_0048a470;
  param_4[4] = &DAT_0064c370;
  param_4[2] = param_4[2] | 0x80004;
  param_4[5] = param_3;
  return 1;
}


