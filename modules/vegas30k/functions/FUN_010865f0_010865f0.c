/* Module: vegas30k.dll
   Function: FUN_010865f0
   Address: 010865f0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_010865f0(undefined4 param_1,int param_2)

{
  int iVar1;
  tagSFVMG_INFO *ptVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = param_2;
  iVar1 = *(int *)(param_2 + 0x34c);
  ptVar2 = *(tagSFVMG_INFO **)(iVar1 + 0x150);
  lVar4 = SfCdiGetCommandInfo(ptVar2);
  if ((-1 < lVar4) && (lVar4 = FUN_010882b0(ptVar2), -1 < lVar4)) {
    if ((*(int *)(ptVar2 + 0xc) == 0) || (*(uint *)(*(int *)(ptVar2 + 0xc) + 8) < 0x10)) {
      *(uint *)(iVar3 + 0x218) = *(uint *)(iVar3 + 0x218) | 8;
      param_2 = *(int *)(*(int *)(ptVar2 + 0x14) + 0xc);
      FUN_010861b0(&param_2,1);
      *(uint *)(iVar3 + 0x340) =
           param_2 + ((uint)((*(uint *)(ptVar2 + 0x18) & 0x7ff) != 0) +
                     (*(uint *)(ptVar2 + 0x18) >> 0xb)) * -2 + 1;
    }
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(ptVar2 + 0x14);
    *(undefined4 *)(iVar3 + 0x330) = *(undefined4 *)(ptVar2 + 0x18);
    *(undefined4 *)(iVar3 + 0x334) = 0;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(ptVar2 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(uint *)(iVar1 + 0x20) =
         (uint)((*(uint *)(ptVar2 + 0x18) & 0x7ff) != 0) + (*(uint *)(ptVar2 + 0x18) >> 0xb);
    *(undefined4 *)(*(int *)(iVar1 + 0x148) + 0xc) = *(undefined4 *)(ptVar2 + 0x18);
    *(uint *)(*(int *)(iVar1 + 0x148) + 0x14) =
         (uint)((*(uint *)(ptVar2 + 0x18) & 0x7ff) != 0) + (*(uint *)(ptVar2 + 0x18) >> 0xb);
  }
  return lVar4;
}


