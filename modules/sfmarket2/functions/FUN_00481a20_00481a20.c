/* Module: sfmarket2.dll
   Function: FUN_00481a20
   Address: 00481a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00481a20(int *param_1,byte *param_2,int param_3,uint param_4,int param_5)

{
  byte local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_5 == 3) {
    if ((0 < (int)param_4) && ((int)param_4 <= (int)(uint)*(ushort *)(param_1 + 0x44))) {
      FUN_00481090(param_1,(byte *)&DAT_004a8700,param_2,param_4);
      return;
    }
    FUN_0047e370((int)param_1,"Invalid number of transparent colors specified");
    return;
  }
  if (param_5 == 0) {
    FUN_00481070(local_8,(uint)*(ushort *)(param_3 + 7));
    FUN_00481090(param_1,(byte *)&DAT_004a8700,local_8,2);
    return;
  }
  if (param_5 == 2) {
    FUN_00481070(local_8,(uint)*(ushort *)(param_3 + 1));
    FUN_00481070(local_6,(uint)*(ushort *)(param_3 + 3));
    FUN_00481070(local_4,(uint)*(ushort *)(param_3 + 5));
    FUN_00481090(param_1,(byte *)&DAT_004a8700,local_8,6);
    return;
  }
  FUN_0047e370((int)param_1,"Can\'t write tRNS with an alpha channel");
  return;
}


