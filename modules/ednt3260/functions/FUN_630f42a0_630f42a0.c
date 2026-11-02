/* Module: ednt3260.dll
   Function: FUN_630f42a0
   Address: 630f42a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f42a0(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  undefined2 extraout_var;
  int iVar3;
  int iVar4;
  double *local_8;
  
  iVar1 = param_3;
  FUN_630f4380((int)this);
  uVar2 = (ushort)(CONCAT22(extraout_var,*(undefined2 *)(param_3 + 0x1c)) >> 0xc) & 3;
  if (uVar2 == 3) {
    FUN_630f92d0();
  }
  iVar3 = 0;
  iVar4 = 0;
  local_8 = (double *)((int)this + 0x511b2);
  param_3 = (int)*(ushort *)(&DAT_630ff878 + (*(byte *)(param_3 + 0x1c) & 0xf) * 2);
  do {
    if ((param_3 & 0x8000U) != 0) {
      FUN_630f4910(*(double **)(*(int *)(iVar1 + 2) + iVar3),*(short *)(*(int *)(iVar1 + 6) + iVar4)
                   ,*(double **)(*(int *)(iVar1 + 0x10) + iVar3),
                   *(short *)(*(int *)(iVar1 + 0x14) + iVar4),local_8,
                   (double *)(&DAT_63102910 + (short)uVar2 * 0x18),*(short *)(iVar1 + 0x1e) << 3);
    }
    iVar4 = iVar4 + 2;
    local_8 = local_8 + 2;
    param_3 = param_3 << 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0xc);
  *param_1 = 0x405;
  param_1[1] = 0;
  return;
}


