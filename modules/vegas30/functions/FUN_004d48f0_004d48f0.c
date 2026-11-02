/* Module: vegas30.exe
   Function: FUN_004d48f0
   Address: 004d48f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004d48f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_3) {
  case 1:
    FUN_004c87d0(param_1,0,0xca,0,param_2);
    return;
  case 2:
    FUN_004c87d0(param_1,0,0xca,1,param_2);
    return;
  case 3:
    FUN_004c87d0(param_1,0,0xcb,0,param_2);
    return;
  case 4:
    FUN_004c87d0(param_1,0,0xce,0,param_2);
  }
  return;
}


