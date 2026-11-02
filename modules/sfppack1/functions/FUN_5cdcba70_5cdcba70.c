/* Module: sfppack1.dll
   Function: FUN_5cdcba70
   Address: 5cdcba70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5cdcba70(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (*(int *)((int)this + 0xac) != 0) {
    iVar2 = FUN_5cdcb650(this,param_1);
    *(undefined4 *)((int)this + 0xac) = 0;
    *(uint *)((int)this + 0xcc) = (uint)(-1 < iVar2);
    return iVar2;
  }
  fVar3 = FUN_5cdcba40(param_1[0x19],-800);
  *(double *)((int)this + 0xf8) = (double)fVar3;
  fVar3 = FUN_5cdcba40(param_1[0x1a],-800);
  *(double *)((int)this + 0xf0) = (double)fVar3;
  fVar3 = FUN_5cdcba40(param_1[0x1c],-800);
  *(double *)((int)this + 0xe8) = (double)fVar3;
  if (param_1[0x1d] != 0) {
    uVar1 = *(uint *)(*(int *)((int)this + 200) + 4);
    if (param_1[0x1e] <= (int)uVar1 / 2) {
      fVar4 = (float10)1.4426950408889634 *
              (((float10)param_1[0x1e] * (float10)_DAT_5ce14438) / (float10)uVar1);
      fVar3 = ROUND(fVar4);
      fVar4 = (float10)f2xm1(fVar4 - fVar3);
      fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
      *(double *)((int)this + 0x250) = (double)fVar3;
      *(double *)((int)this + 0x238) = (double)((float10)_DAT_5ce12e70 - fVar3);
      goto LAB_5cdcbb4a;
    }
  }
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0x3ff00000;
LAB_5cdcbb4a:
  *(double *)((int)this + 0x260) =
       _DAT_5ce14448 /
       ((double)*(uint *)(*(int *)((int)this + 200) + 4) * (_DAT_5ce12cb8 / (double)param_1[0x20]));
  return 0;
}


