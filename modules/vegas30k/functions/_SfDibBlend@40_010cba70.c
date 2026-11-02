/* Module: vegas30k.dll
   Function: _SfDibBlend@40
   Address: 010cba70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
_SfDibBlend_40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              int *param_9,uint param_10)

{
  int iVar1;
  undefined4 uVar2;
  int *local_98;
  undefined4 local_94;
  undefined1 local_90 [140];
  int **local_4;
  
                    /* 0xcba70  826  _SfDibBlend@40 */
  uVar2 = 0;
  iVar1 = FUN_01050ec0(local_90,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_10);
  if (iVar1 == 1) {
    local_4 = &local_98;
    local_98 = param_9;
    local_94 = 0;
    if (param_9[8] == 1) {
      FUN_010c8f80(local_90);
    }
    else if ((param_10 & 0xf000) == 0) {
      uVar2 = FUN_010c9290(local_90);
    }
    else if ((*param_9 == 4) || (*param_9 == 5)) {
      uVar2 = FUN_010cb1b0(local_90);
    }
    else {
      uVar2 = FUN_010ca850(local_90);
    }
  }
  FUN_01051260(local_90);
  return uVar2;
}


