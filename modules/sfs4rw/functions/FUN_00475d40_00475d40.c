/* Module: sfs4rw.dll
   Function: FUN_00475d40
   Address: 00475d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00475d40(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  uVar1 = param_1[0x2a];
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_00475d10(param_1,(byte *)param_1[0x29],param_1[0x2a]);
  }
  if (param_2 != 0) {
    FUN_00475d10(param_1,(byte *)param_1[0x29],param_2);
  }
  bVar2 = FUN_00475de0(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x45) & 0x20) == 0) || ((param_1[0x19] & 0x200U) != 0)) &&
     (((*(byte *)(param_1 + 0x45) & 0x20) != 0 || ((param_1[0x19] & 0x400U) == 0)))) {
    FUN_00475b30(param_1,(undefined4 *)"CRC error");
    return 1;
  }
  FUN_00475c00((int)param_1,(undefined4 *)"CRC error");
  return 1;
}


