/* Module: sfppack1.dll
   Function: FUN_5cdb6510
   Address: 5cdb6510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdb6510(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if (((uVar1 == *(ushort *)(param_2 + 2)) && (uVar1 != 0)) && (uVar1 < 3)) {
    return 0;
  }
  return 1;
}


