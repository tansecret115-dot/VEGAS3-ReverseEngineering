/* Module: vidpcore.dll
   Function: FUN_5df02020
   Address: 5df02020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5df02020(undefined4 param_1,undefined4 param_2,uint param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_5ded4240(param_1,1);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_5df004a0(param_2,param_3);
  iVar2 = FUN_5ded4240(param_1,1);
  if (iVar2 != 0) {
    FUN_5df00cc0(param_2,param_3,_DAT_5df364c8,-_DAT_5df364cc);
    iVar2 = FUN_5ded4240(param_1,2);
    if (iVar2 == 0) {
      return 0;
    }
    iVar4 = 4;
    iVar2 = 2;
    if (0x10 < param_3) {
      puVar3 = &DAT_5df364d8;
      iVar5 = iVar4;
      do {
        FUN_5df01460(param_2,param_3,iVar5,puVar3[-2],-(float)puVar3[-1],*puVar3,-(float)puVar3[1]);
        iVar4 = FUN_5ded4240(param_1,2);
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar5 << 2;
        iVar2 = iVar2 + 2;
        puVar3 = puVar3 + 4;
        uVar1 = iVar5 * 0x10;
        iVar5 = iVar4;
      } while (uVar1 < param_3);
    }
    if (iVar4 * 4 - param_3 == 0) {
      FUN_5df009a0(param_2,param_3,*(undefined4 *)(&UNK_5df364c0 + iVar2 * 8),
                   -*(float *)(&UNK_5df364c4 + iVar2 * 8),*(undefined4 *)(&DAT_5df364c8 + iVar2 * 8)
                   ,-*(float *)(&DAT_5df364cc + iVar2 * 8),param_4 + param_4);
      iVar2 = FUN_5ded4240(param_1,1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      FUN_5df00580(param_2,param_3,*(undefined4 *)(&UNK_5df364c0 + iVar2 * 8),
                   -*(float *)(&UNK_5df364c4 + iVar2 * 8),param_4 + param_4);
    }
    return 1;
  }
  return 0;
}


