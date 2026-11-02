/* Module: sfppack2.dll
   Function: FUN_5cce01c0
   Address: 5cce01c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce01c0(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if (((uVar1 == *(ushort *)(param_2 + 2)) && (uVar1 != 0)) && (uVar1 < 3)) {
    return 0;
  }
  return 1;
}


