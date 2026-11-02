/* Module: stl2plg.dll
   Function: FUN_00450790
   Address: 00450790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00450790(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  uVar1 = param_1[0x2a];
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_00450760(param_1,(byte *)param_1[0x29],param_1[0x2a]);
  }
  if (param_2 != 0) {
    FUN_00450760(param_1,(byte *)param_1[0x29],param_2);
  }
  bVar2 = FUN_00450830(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x45) & 0x20) == 0) || ((param_1[0x19] & 0x200U) != 0)) &&
     (((*(byte *)(param_1 + 0x45) & 0x20) != 0 || ((param_1[0x19] & 0x400U) == 0)))) {
    FUN_0044fa90(param_1,(undefined4 *)"CRC error");
    return 1;
  }
  FUN_0044fb60((int)param_1,(undefined4 *)"CRC error");
  return 1;
}


