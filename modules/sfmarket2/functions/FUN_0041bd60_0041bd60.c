/* Module: sfmarket2.dll
   Function: FUN_0041bd60
   Address: 0041bd60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041bd60(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 6;
  do {
    uVar2 = FUN_0041bc70(param_1,uVar3,5);
    uVar1 = FUN_0041ccd0((byte)uVar2);
    *param_2 = uVar1;
    uVar3 = uVar3 + 5;
    param_2 = param_2 + 1;
  } while (uVar3 < 0x5c);
  *param_2 = 0;
  return;
}


