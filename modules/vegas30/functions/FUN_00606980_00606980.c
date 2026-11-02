/* Module: vegas30.exe
   Function: FUN_00606980
   Address: 00606980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00606980(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 6;
  do {
    uVar1 = FUN_00606890(param_1,uVar2,5);
    uVar1 = FUN_006078f0(uVar1);
    *param_2 = uVar1;
    uVar2 = uVar2 + 5;
    param_2 = param_2 + 1;
  } while (uVar2 < 0x5c);
  *param_2 = 0;
  return;
}


