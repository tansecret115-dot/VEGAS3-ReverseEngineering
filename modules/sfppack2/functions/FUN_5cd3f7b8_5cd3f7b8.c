/* Module: sfppack2.dll
   Function: FUN_5cd3f7b8
   Address: 5cd3f7b8
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd3f7b8(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = *param_1;
  while( true ) {
    uVar1 = *param_2;
    if (uVar2 != uVar1) {
      return (uint)uVar2 - (uint)uVar1;
    }
    param_1 = param_1 + 1;
    if ((uVar2 == 0) || (param_2 = param_2 + 1, uVar1 == 0)) break;
    uVar2 = *param_1;
  }
  return 0;
}


