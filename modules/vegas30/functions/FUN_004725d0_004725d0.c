/* Module: vegas30.exe
   Function: FUN_004725d0
   Address: 004725d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004725d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_005c9630(param_1,param_2,0,local_40,&local_48,0);
  FUN_00472570(&local_48,param_5,local_28,local_24);
  *param_5 = FUN_004724f0;
  param_5[0x2e] = local_48;
  param_5[0x2f] = local_44;
  param_5[0x30] = *(undefined4 *)(param_2 + 0x18);
  param_5[0x31] = *(undefined4 *)(param_2 + 0x1c);
  param_5[0x34] = *(undefined4 *)(param_2 + 0x20);
  param_5[0x35] = *(undefined4 *)(param_2 + 0x24);
  param_5[0x32] = *(undefined4 *)(param_2 + 0xf4);
  return 0;
}


