/* Module: vegas30.exe
   Function: FUN_00472670
   Address: 00472670
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00472670(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  
  FUN_005c9630(param_1,param_3,0,local_40,local_48,0);
  if ((local_18 != 0) && (local_18 != -1)) {
    FUN_005438a0(*(undefined4 *)(param_6 + 0xdc),0x1c);
  }
  if (((param_7 == 0) && (*(int *)(param_6 + 0xbc) + 6 != *(int *)(param_6 + 0x34))) &&
     (*(int *)(param_6 + 0xdc) != 0)) {
    FUN_004725d0(param_1,param_3,param_4,param_5,param_6);
    FUN_00472570(local_48,param_6,local_28,local_24);
    FUN_00544490(*(undefined4 *)(param_6 + 0xdc),DAT_0064777c);
    FUN_005438c0(*(undefined4 *)(param_6 + 0xdc),local_48,0);
  }
  if (*(int *)(param_6 + 200) != *(int *)(param_3 + 0xf4)) {
    *(int *)(param_6 + 200) = *(int *)(param_3 + 0xf4);
    if (*(int *)(param_6 + 0xdc) != 0) {
      FUN_00543530(*(int *)(param_6 + 0xdc));
    }
    FUN_004725d0(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}


