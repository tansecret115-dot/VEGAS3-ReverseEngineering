/* Module: mp3plug.dll
   Function: FUN_5f7264c0
   Address: 5f7264c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f7264c0(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 6;
  do {
    uVar2 = FUN_5f7263d0(param_1,uVar3,5);
    uVar1 = FUN_5f724ec0((byte)uVar2);
    *param_2 = uVar1;
    uVar3 = uVar3 + 5;
    param_2 = param_2 + 1;
  } while (uVar3 < 0x5c);
  *param_2 = 0;
  return;
}


