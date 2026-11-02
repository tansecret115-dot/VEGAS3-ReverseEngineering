/* Module: vidpcore.dll
   Function: FUN_5dec9f30
   Address: 5dec9f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_5dec9f30(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0x10;
  switch(param_1) {
  case 0x10:
  case 0x11:
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 1;
    return 1;
  case 0x12:
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 2;
    return 2;
  case 0x13:
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 4;
    return 4;
  case 0x14:
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 8;
    return 8;
  case 0x15:
    goto switchD_5dec9f4a_caseD_15;
  case 0x16:
    uVar1 = 0x20;
switchD_5dec9f4a_caseD_15:
    param_2[3] = uVar1;
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    return uVar1;
  case 0x17:
    param_2[2] = 8;
    param_2[1] = 8;
    *param_2 = 8;
    param_2[3] = 0;
    return 4;
  case 0x18:
    param_2[2] = 8;
    param_2[1] = 8;
    *param_2 = 8;
    param_2[3] = 0;
    return 8;
  case 0x19:
    param_2[2] = 5;
    param_2[1] = 5;
    *param_2 = 5;
    param_2[3] = 1;
    return 0x10;
  case 0x1a:
    param_2[2] = 5;
    *param_2 = 5;
    param_2[1] = 6;
    param_2[3] = 0;
    return 0x10;
  case 0x1b:
    param_2[2] = 8;
    param_2[1] = 8;
    *param_2 = 8;
    param_2[3] = 0;
    return 0x18;
  case 0x1c:
  case 0x1d:
    param_2[2] = 8;
    param_2[1] = 8;
    *param_2 = 8;
    param_2[3] = 8;
    return 0x20;
  case 0x1e:
    param_2[2] = 10;
    param_2[1] = 10;
    *param_2 = 10;
    param_2[3] = 2;
    return 0x20;
  case 0x1f:
    param_2[2] = 0x10;
    param_2[1] = 0x10;
    *param_2 = 0x10;
    param_2[3] = 0x10;
    return 0x40;
  case 0x20:
    param_2[2] = 0x20;
    param_2[1] = 0x20;
    *param_2 = 0x20;
    param_2[3] = 0x20;
    return 0x80;
  default:
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    return 0;
  }
}


