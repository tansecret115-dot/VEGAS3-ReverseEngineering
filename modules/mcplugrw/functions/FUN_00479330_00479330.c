/* Module: mcplugrw.dll
   Function: FUN_00479330
   Address: 00479330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479330(int *param_1,byte *param_2,uint param_3)

{
  byte local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_3 != 3) {
    if ((param_3 & 2) != 0) {
      FUN_00478880(local_8,(uint)*(ushort *)(param_2 + 1));
      FUN_00478880(local_6,(uint)*(ushort *)(param_2 + 3));
      FUN_00478880(local_4,(uint)*(ushort *)(param_2 + 5));
      FUN_004788a0(param_1,(byte *)&DAT_004a6e2c,local_8,6);
      return;
    }
    FUN_00478880(local_8,(uint)*(ushort *)(param_2 + 7));
    FUN_004788a0(param_1,(byte *)&DAT_004a6e2c,local_8,2);
    return;
  }
  local_8[0] = *param_2;
  if (*(ushort *)(param_1 + 0x44) < (ushort)local_8[0]) {
    FUN_00475b80((int)param_1,"Invalid background palette index");
    return;
  }
  FUN_004788a0(param_1,(byte *)&DAT_004a6e2c,local_8,1);
  return;
}


