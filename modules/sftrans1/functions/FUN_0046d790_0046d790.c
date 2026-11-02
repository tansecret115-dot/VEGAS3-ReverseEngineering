/* Module: sftrans1.dll
   Function: FUN_0046d790
   Address: 0046d790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046d790(void)

{
  double *pdVar1;
  float fVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  int extraout_ECX;
  double *pdVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  void *in_stack_000004a8;
  long in_stack_0000056c;
  long in_stack_0000058c;
  void *in_stack_00000a20;
  long in_stack_00000b04;
  void *in_stack_00000f98;
  long in_stack_0000107c;
  
  FUN_00551640();
  FUN_0052f210();
  FUN_0052f210();
  FUN_0052f210();
  fVar2 = *(float *)(extraout_ECX + 0x9c);
  iVar3 = FUN_0052ea70();
  if (iVar3 < 0) {
LAB_0046da06:
    FUN_0052f260();
    FUN_0052f260();
    FUN_0052f260();
    return iVar3;
  }
  iVar3 = FUN_0052f290();
  if (iVar3 != 0) {
    iVar3 = FUN_0052f290();
    if (iVar3 != 0) {
      iVar3 = FUN_0052f290();
      if (iVar3 != 0) {
        if ((*(int *)(extraout_ECX + 0x378) != 0) || (*(int *)(extraout_ECX + 0x5a0) != 0)) {
          EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
          if (*(int *)(extraout_ECX + 0x5a0) == 0) {
            puVar7 = (undefined4 *)(extraout_ECX + 0x158);
            puVar8 = (undefined4 *)(extraout_ECX + 0x268);
            for (iVar3 = 0x44; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          else {
            pdVar1 = (double *)(extraout_ECX + 0x268);
            fVar9 = (float10)*(double *)(extraout_ECX + 0x5a8);
            iVar3 = 0x10;
            pdVar4 = (double *)(extraout_ECX + 0x388);
            pdVar6 = pdVar1;
            do {
              pdVar5 = pdVar4 + 2;
              *pdVar6 = (double)(((float10)*(double *)
                                            (((extraout_ECX + 0x490) - (int)pdVar1) + (int)pdVar6) -
                                 (float10)pdVar4[-1]) * fVar9 + (float10)pdVar4[-1]);
              *(double *)((int)pdVar1 + (-0x10 - (extraout_ECX + 0x380)) + (int)pdVar5) =
                   (double)(((float10)*(double *)
                                       ((extraout_ECX - (extraout_ECX + 0x380)) + 0x480 +
                                       (int)pdVar5) - (float10)*pdVar4) * fVar9 + (float10)*pdVar4);
              iVar3 = iVar3 + -1;
              pdVar4 = pdVar5;
              pdVar6 = pdVar6 + 2;
            } while (iVar3 != 0);
            *(undefined4 *)(extraout_ECX + 0x368) = *(undefined4 *)(extraout_ECX + 0x480);
            *(float *)(extraout_ECX + 0x36c) =
                 (float)(((float10)*(float *)(extraout_ECX + 0x594) -
                         (float10)*(float *)(extraout_ECX + 0x484)) * fVar9 +
                        (float10)*(float *)(extraout_ECX + 0x484));
            *(float *)(extraout_ECX + 0x370) =
                 (float)(((float10)*(float *)(extraout_ECX + 0x598) -
                         (float10)*(float *)(extraout_ECX + 0x488)) * fVar9 +
                        (float10)*(float *)(extraout_ECX + 0x488));
          }
          *(undefined4 *)(extraout_ECX + 0x378) = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
        }
        iVar3 = SfDibTeethReal(in_stack_000004a8,(tagRECT *)&stack0x000004ac,in_stack_0000058c,
                               (tagRECT *)&stack0x00000510,in_stack_00000f98,
                               (tagRECT *)&stack0x00000f9c,in_stack_0000107c,
                               (tagRECT *)&stack0x00001000,in_stack_00000a20,
                               (tagRECT *)&stack0x00000a24,in_stack_00000b04,
                               (tagRECT *)&stack0x00000a88,in_stack_0000056c,
                               (tTEETHPROP *)(extraout_ECX + 0x268),(double)fVar2);
        if (-1 < iVar3) {
          FUN_0052f200();
        }
        goto LAB_0046da06;
      }
    }
  }
  FUN_0052f260();
  FUN_0052f260();
  FUN_0052f260();
  return -0x7fffbffb;
}


