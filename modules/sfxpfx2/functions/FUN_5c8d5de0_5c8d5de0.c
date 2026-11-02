/* Module: sfxpfx2.dll
   Function: FUN_5c8d5de0
   Address: 5c8d5de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8d5de0(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 6;
  do {
    uVar2 = FUN_5c8d5cf0(param_1,uVar3,5);
    uVar1 = FUN_5c8d6d50((byte)uVar2);
    *param_2 = uVar1;
    uVar3 = uVar3 + 5;
    param_2 = param_2 + 1;
  } while (uVar3 < 0x5c);
  *param_2 = 0;
  return;
}


