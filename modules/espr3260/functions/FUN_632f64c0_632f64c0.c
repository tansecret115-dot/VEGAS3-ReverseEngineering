/* Module: espr3260.dll
   Function: FUN_632f64c0
   Address: 632f64c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f64c0(void *this,float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  *(int *)(iVar3 + -0xf8 + (int)this) = *(int *)(iVar3 + -0xf8 + (int)this) + -0x2c;
  iVar3 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  pfVar1 = *(float **)(iVar3 + -0xf8 + (int)this);
  *(float **)(iVar3 + -0xf8 + (int)this) = pfVar1 + -0xb;
  pfVar2 = *(float **)((int)this + *(int *)(*(int *)((int)this + -0xfc) + 4) + -0xf8);
  FUN_632f7dc0(param_1,pfVar1,0.55,10);
  FUN_632f7dc0(param_1,pfVar2,0.7,10);
  FUN_632f7490(pfVar1,param_3,0xb);
  FUN_632f9340(param_3 + 0xb,0x25);
  FUN_632f9560((void *)(*(int *)(*(int *)((int)this + -0xfc) + 4) + -0xfc + (int)this),(int)pfVar2,
               10,param_3,param_3,0x30,param_3 + 0xb,0);
  if (param_2 < 0x30) {
    iVar3 = param_2 * 4;
    do {
      iVar4 = iVar3 + 4;
      *(float *)((int)param_3 + iVar3) =
           *(float *)((int)param_3 + iVar3) -
           *(float *)((int)param_3 + iVar3 + param_2 * -4) * _DAT_632fa3ac;
      iVar3 = iVar4;
    } while (iVar4 < 0xc0);
  }
  iVar3 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  *(int *)(iVar3 + -0xf8 + (int)this) = *(int *)(iVar3 + -0xf8 + (int)this) + 0x58;
  return;
}


