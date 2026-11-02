/* Module: vidpcore.dll
   Function: FUN_5ded3330
   Address: 5ded3330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_5ded3330(undefined4 param_1,undefined4 param_2,uint param_3,double param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int local_20;
  
  FUN_5ded2ea0(param_2,param_3);
  iVar1 = FUN_5ded4240(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  FUN_5ded35a0(param_2,param_3,_DAT_5df3e450,_DAT_5df3e458);
  iVar1 = FUN_5ded4240(param_1,2);
  if (iVar1 == 0) {
    return false;
  }
  uVar4 = 8;
  uVar3 = param_3 >> 1;
  iVar1 = 2;
  local_20 = 2;
  if (8 < uVar3) {
    puVar5 = &DAT_5df3e460;
    do {
      if (uVar4 * 2 == uVar3) {
        FUN_5ded3ac0(param_2,param_3,uVar4,*(undefined4 *)puVar5,*(undefined4 *)((int)puVar5 + 4),
                     *(undefined4 *)(puVar5 + 1),*(undefined4 *)((int)puVar5 + 0xc));
        iVar1 = local_20 + 1;
        iVar2 = FUN_5ded4240(param_1,1);
        if (iVar2 == 0) {
          return false;
        }
        break;
      }
      FUN_5ded36d0(param_2,param_3,uVar4,*(undefined4 *)puVar5,*(undefined4 *)((int)puVar5 + 4),
                   *(undefined4 *)(puVar5 + 1),*(undefined4 *)((int)puVar5 + 0xc),puVar5[2],
                   puVar5[3]);
      iVar1 = FUN_5ded4240(param_1,2);
      if (iVar1 == 0) {
        return false;
      }
      uVar4 = uVar4 << 2;
      iVar1 = local_20 + 2;
      puVar5 = puVar5 + 4;
      local_20 = iVar1;
    } while (uVar4 < uVar3);
  }
  FUN_5ded34f0(param_2,param_3,*(undefined8 *)(iVar1 * 0x10 + 0x5df3e440),
               *(undefined8 *)(iVar1 * 0x10 + 0x5df3e448),param_4 / (double)param_3);
  iVar1 = FUN_5ded4240(param_1,1);
  return iVar1 != 0;
}


