/* Module: vegas30k.dll
   Function: _SfDibIsolateChannel@28
   Address: 010e57a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfDibIsolateChannel_28
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_90 [144];
  
                    /* 0xe57a0  862  _SfDibIsolateChannel@28 */
  uVar2 = 0;
  iVar1 = FUN_01050ec0(local_90,param_1,param_2,param_3,param_4,param_1,param_2,param_3,param_4,
                       param_7);
  if (iVar1 == 1) {
    uVar2 = FUN_010e5670(local_90,param_5,param_6);
  }
  FUN_01051260(local_90);
  return uVar2;
}


