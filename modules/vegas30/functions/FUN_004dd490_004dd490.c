/* Module: vegas30.exe
   Function: FUN_004dd490
   Address: 004dd490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004dd490(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 < 0x7f02) {
    if (param_2 != 0x7f01) {
      if (param_2 == 0x301) {
        iVar1 = FUN_004dbd30(param_1);
        if (iVar1 != 0) {
          FUN_004582a0(param_1,&local_8,&local_10);
          FUN_004dd570(param_1,local_8,local_4,local_10,local_c);
          return 0;
        }
      }
      else {
        if (param_2 == 0x302) {
          FUN_004dbd20(param_1);
          return 0;
        }
        if (param_2 == 0x304) {
          SendMessageA(DAT_00647624,0x111,(param_3 != 0) + 0x9d08,0);
          return 0;
        }
      }
    }
  }
  else if ((param_2 != 0x7f07) && (param_2 == 0x7f09)) {
    FUN_004dd440(param_1,param_3 == 0);
  }
  return 0;
}


