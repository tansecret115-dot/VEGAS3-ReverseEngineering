/* Module: mcmpgdec.dll
   Function: FUN_10008b44
   Address: 10008b44
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10008b44(int param_1)

{
  uint uVar1;
  
  FUN_100038c4((int *)(param_1 + 0x66c));
  while( true ) {
    if (*(int *)(param_1 + 0x68c) != 0) {
      return;
    }
    uVar1 = FUN_10003828(param_1 + 0x66c,'\x18');
    if (uVar1 == 1) break;
    FUN_10003858((int *)(param_1 + 0x66c),8);
  }
  return;
}


