/* Module: vidpcore.dll
   Function: FUN_5df11790
   Address: 5df11790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df11790(undefined4 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 6;
  do {
    uVar1 = FUN_5df116a0(param_1,uVar2,5);
    uVar1 = FUN_5df12700(uVar1);
    *param_2 = uVar1;
    uVar2 = uVar2 + 5;
    param_2 = param_2 + 1;
  } while (uVar2 < 0x5c);
  *param_2 = 0;
  return;
}


