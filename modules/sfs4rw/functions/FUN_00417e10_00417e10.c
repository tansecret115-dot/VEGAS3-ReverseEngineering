/* Module: sfs4rw.dll
   Function: FUN_00417e10
   Address: 00417e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417e10(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 6;
  do {
    uVar2 = FUN_00417d20(param_1,uVar3,5);
    uVar1 = FUN_00418d80((byte)uVar2);
    *param_2 = uVar1;
    uVar3 = uVar3 + 5;
    param_2 = param_2 + 1;
  } while (uVar3 < 0x5c);
  *param_2 = 0;
  return;
}


