/* Module: vidpcore.dll
   Function: FUN_5ded3c90
   Address: 5ded3c90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5ded3c90(undefined4 param_1,undefined4 param_2,uint param_3,double param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  iVar1 = FUN_5ded4240(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_5ded2ea0(param_2,param_3);
  iVar1 = FUN_5ded4240(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_5ded35a0(param_2,param_3,_DAT_5df3e450,-_DAT_5df3e458);
  iVar1 = FUN_5ded4240(param_1,2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = 8;
  uVar2 = param_3 >> 1;
  iVar1 = 2;
  if (8 < uVar2) {
    puVar5 = &DAT_5df3e460;
    do {
      if (uVar4 * 2 == uVar2) {
        FUN_5ded3ac0(param_2,param_3,uVar4,*(undefined4 *)puVar5,*(undefined4 *)((int)puVar5 + 4),
                     -(double)puVar5[1]);
        iVar1 = iVar1 + 1;
        iVar3 = FUN_5ded4240(param_1,1);
        if (iVar3 == 0) {
          return 0;
        }
        break;
      }
      FUN_5ded3e30(param_2,param_3,uVar4,*(undefined4 *)puVar5,*(undefined4 *)((int)puVar5 + 4),
                   -(double)puVar5[1],puVar5[2],-(double)puVar5[3]);
      iVar3 = FUN_5ded4240(param_1,2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = iVar1 + 2;
      uVar4 = uVar4 << 2;
      puVar5 = puVar5 + 4;
    } while (uVar4 < uVar2);
  }
  FUN_5ded34f0(param_2,param_3,*(undefined8 *)(iVar1 * 0x10 + 0x5df3e440),
               -*(double *)(iVar1 * 0x10 + 0x5df3e448),param_4 + param_4);
  return 1;
}


