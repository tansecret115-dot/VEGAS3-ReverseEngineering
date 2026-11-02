/* Module: vfplugs.dll
   Function: FUN_0047d750
   Address: 0047d750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047d750(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 6;
  do {
    uVar2 = FUN_0047d660(param_1,uVar3,5);
    uVar1 = FUN_0047e6c0((byte)uVar2);
    *param_2 = uVar1;
    uVar3 = uVar3 + 5;
    param_2 = param_2 + 1;
  } while (uVar3 < 0x5c);
  *param_2 = 0;
  return;
}


