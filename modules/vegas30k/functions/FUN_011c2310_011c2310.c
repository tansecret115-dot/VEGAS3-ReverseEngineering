/* Module: vegas30k.dll
   Function: FUN_011c2310
   Address: 011c2310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011c2310(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    goto switchD_011c2325_caseD_0;
  case 1:
  case 4:
    pcVar1 = "input";
    if (param_3 == 0) {
      pcVar1 = "output";
    }
    SfErrorHandler_DetailsAddString
              (param_2,"The %s device %s is in use by another application.",pcVar1,param_4);
    return;
  case 2:
    pcVar1 = "input";
    if (param_3 == 0) {
      pcVar1 = "output";
    }
    SfErrorHandler_DetailsAddString(param_2,"The %s device %s is bad.",pcVar1,param_4);
    return;
  case 3:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
    pcVar1 = "input";
    if (param_3 == 0) {
      pcVar1 = "output";
    }
    SfErrorHandler_DetailsAddString(param_2,"The %s device %s could not be opened.",pcVar1,param_4);
    return;
  case 6:
    pcVar1 = "input";
    if (param_3 == 0) {
      pcVar1 = "output";
    }
    SfErrorHandler_DetailsAddString
              (param_2,"The %s device driver for %s does not exist.",pcVar1,param_4);
    return;
  case 7:
    pcVar1 = "input";
    if (param_3 == 0) {
      pcVar1 = "output";
    }
    SfErrorHandler_DetailsAddString
              (param_2,"The %s device %s could not allocate memory.",pcVar1,param_4);
    return;
  default:
    pcVar1 = "input";
    if (param_3 == 0) {
      pcVar1 = "output";
    }
    SfErrorHandler_DetailsAddString
              (param_2,"The %s device %s is in use by another application.",pcVar1,param_4);
switchD_011c2325_caseD_0:
    return;
  case 0x40:
    pcVar1 = "input";
    if (param_3 == 0) {
      pcVar1 = "output";
    }
    SfErrorHandler_DetailsAddString(param_2,"The %s device %s is not ready.",pcVar1,param_4);
    return;
  case 0x41:
    pcVar1 = "input";
    if (param_3 == 0) {
      pcVar1 = "output";
    }
    SfErrorHandler_DetailsAddString(param_2,"The %s device %s is already playing.",pcVar1,param_4);
    return;
  }
}


