/* Module: vegas30k.dll
   Function: FUN_011c1810
   Address: 011c1810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011c1810(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_011c1770(param_1);
  switch(param_1) {
  case 1:
  case 4:
    SfErrorHandler_DetailsAddString
              (uVar1,"The playback device %s is in use by another application.",param_2);
    return;
  default:
    SfErrorHandler_DetailsAddString(uVar1,"The playback device %s could not be opened.",param_2);
    return;
  case 6:
    SfErrorHandler_DetailsAddString(uVar1,"The playback device %s does not exist.",param_2);
    return;
  case 7:
    SfErrorHandler_DetailsAddString
              (uVar1,"The playback device %s could not allocate memory.",param_2);
    return;
  case 0x20:
    SfErrorHandler_DetailsAddString
              (uVar1,"The playback device %s does not support the current output format.",param_2);
    return;
  }
}


