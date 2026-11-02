/* Module: ednt3260.dll
   Function: FUN_630f3f50
   Address: 630f3f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f3f50(void *this,int param_1,int param_2)

{
  short sVar1;
  double *pdVar2;
  
  *(undefined4 *)((int)this + 0x8a4) = 0x6c8b4396;
  *(undefined4 *)((int)this + 0x89c) = 0xeb1c432d;
  *(undefined4 *)((int)this + 0x8a8) = 0x3fdffbe7;
  *(undefined4 *)((int)this + 0x8a0) = 0x3f1a36e2;
  sVar1 = *(short *)((int)this +
                    *(short *)(&DAT_630ff8c8 + (param_2 + *(short *)((int)this + 0x630a) * 6) * 2) *
                    2 + 0x46);
  pdVar2 = (double *)
           (param_1 * sVar1 * 0x800 +
           *(int *)((int)this +
                   *(short *)(&DAT_630ff8c8 + (param_2 + *(short *)((int)this + 0x630a) * 6) * 2) *
                   4 + 0x2e));
  if (*(short *)((int)this + 0x22) != 0) {
    FUN_630f4020(pdVar2,sVar1,*(double **)((int)this + 0x868),1,0x100,0.49975,0.0001,
                 (double *)((int)this + param_2 * 8 + 0x86c));
    return;
  }
  FUN_630f4070(pdVar2,sVar1,*(double **)((int)this + 0x868),1,0x100,0.49975);
  return;
}


