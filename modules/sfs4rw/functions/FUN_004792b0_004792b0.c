/* Module: sfs4rw.dll
   Function: FUN_004792b0
   Address: 004792b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004792b0(int *param_1,byte *param_2,uint param_3)

{
  byte local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_3 != 3) {
    if ((param_3 & 2) != 0) {
      FUN_00478800(local_8,(uint)*(ushort *)(param_2 + 1));
      FUN_00478800(local_6,(uint)*(ushort *)(param_2 + 3));
      FUN_00478800(local_4,(uint)*(ushort *)(param_2 + 5));
      FUN_00478820(param_1,(byte *)&DAT_004a6e2c,local_8,6);
      return;
    }
    FUN_00478800(local_8,(uint)*(ushort *)(param_2 + 7));
    FUN_00478820(param_1,(byte *)&DAT_004a6e2c,local_8,2);
    return;
  }
  local_8[0] = *param_2;
  if (*(ushort *)(param_1 + 0x44) < (ushort)local_8[0]) {
    FUN_00475b00((int)param_1,"Invalid background palette index");
    return;
  }
  FUN_00478820(param_1,(byte *)&DAT_004a6e2c,local_8,1);
  return;
}


