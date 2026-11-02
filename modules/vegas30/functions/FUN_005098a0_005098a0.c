/* Module: vegas30.exe
   Function: FUN_005098a0
   Address: 005098a0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005098a0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_124;
  undefined1 local_11c [16];
  undefined1 local_10c [260];
  uint local_8;
  
  iVar1 = *param_3;
  *param_3 = iVar1 + 1;
  uVar2 = _SfSetMetricBinary_16(param_1,iVar1,param_2,4);
  iVar3 = FUN_00508b80(param_2);
  iVar1 = *param_3;
  *param_3 = iVar1 + 1;
  uVar4 = _SfSetMetric_12(param_1,iVar1,iVar3);
  uVar2 = uVar2 | uVar4;
  local_124 = 0;
  if (0 < iVar3) {
    do {
      uVar5 = FUN_00508c00(param_2,local_124);
      FUN_00508ba0(uVar5,local_11c);
      iVar1 = *param_3;
      *param_3 = iVar1 + 1;
      uVar4 = _SfSetMetricBinary_16(param_1,iVar1,local_11c,0x10);
      uVar2 = uVar2 | uVar4;
      iVar1 = *param_3;
      if ((local_8 & 0x83) == 0) {
        *param_3 = iVar1 + 1;
      }
      else {
        *param_3 = iVar1 + 1;
        uVar4 = _SfSetMetricString_12(param_1,iVar1,local_10c);
        uVar2 = uVar2 | uVar4;
      }
      iVar1 = *param_3;
      *param_3 = iVar1 + 1;
      uVar4 = _SfSetMetric_12(param_1,iVar1,local_8);
      uVar2 = uVar2 | uVar4;
    } while (((-1 < (int)uVar2) && (uVar2 = FUN_005098a0(param_1,uVar5,param_3), -1 < (int)uVar2))
            && (local_124 = local_124 + 1, local_124 < iVar3));
  }
  return uVar2;
}


