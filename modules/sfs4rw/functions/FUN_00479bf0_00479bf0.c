/* Module: sfs4rw.dll
   Function: FUN_00479bf0
   Address: 00479bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479bf0(int *param_1,ushort *param_2)

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
    FUN_00478800(local_8,(uint)*param_2);
    local_6 = (undefined1)param_2[1];
    local_4 = (undefined1)param_2[2];
    local_5 = *(undefined1 *)((int)param_2 + 3);
    local_3 = *(undefined1 *)((int)param_2 + 5);
    local_2 = (undefined1)param_2[3];
    FUN_00478820(param_1,(byte *)&DAT_004a6e7c,local_8,7);
    return;
  }
  FUN_00475b00((int)param_1,"Invalid time specified for tIME chunk");
  return;
}


