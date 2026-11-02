/* Module: sfmarket2.dll
   Function: FUN_00482460
   Address: 00482460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00482460(int *param_1,ushort *param_2)

{
  byte local_8 [2];
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  if (((((byte)param_2[1] < 0xd) && ((byte)param_2[1] != 0)) && (*(byte *)((int)param_2 + 3) < 0x20)
      ) && (((*(byte *)((int)param_2 + 3) != 0 && ((byte)param_2[2] < 0x18)) &&
            ((byte)param_2[3] < 0x3d)))) {
    FUN_00481070(local_8,(uint)*param_2);
    local_6 = (undefined1)param_2[1];
    local_4 = (undefined1)param_2[2];
    local_5 = *(undefined1 *)((int)param_2 + 3);
    local_3 = *(undefined1 *)((int)param_2 + 5);
    local_2 = (undefined1)param_2[3];
    FUN_00481090(param_1,(byte *)&DAT_004a86f8,local_8,7);
    return;
  }
  FUN_0047e370((int)param_1,"Invalid time specified for tIME chunk");
  return;
}


