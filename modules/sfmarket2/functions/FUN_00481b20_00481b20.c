/* Module: sfmarket2.dll
   Function: FUN_00481b20
   Address: 00481b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481b20(int *param_1,byte *param_2,uint param_3)

{
  byte local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_3 != 3) {
    if ((param_3 & 2) != 0) {
      FUN_00481070(local_8,(uint)*(ushort *)(param_2 + 1));
      FUN_00481070(local_6,(uint)*(ushort *)(param_2 + 3));
      FUN_00481070(local_4,(uint)*(ushort *)(param_2 + 5));
      FUN_00481090(param_1,(byte *)&DAT_004a86a8,local_8,6);
      return;
    }
    FUN_00481070(local_8,(uint)*(ushort *)(param_2 + 7));
    FUN_00481090(param_1,(byte *)&DAT_004a86a8,local_8,2);
    return;
  }
  local_8[0] = *param_2;
  if (*(ushort *)(param_1 + 0x44) < (ushort)local_8[0]) {
    FUN_0047e370((int)param_1,"Invalid background palette index");
    return;
  }
  FUN_00481090(param_1,(byte *)&DAT_004a86a8,local_8,1);
  return;
}


