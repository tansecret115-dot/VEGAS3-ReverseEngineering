/* Module: vidpcore.dll
   Function: FUN_5de85f10
   Address: 5de85f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de85f10(void)

{
  float fVar1;
  double dVar2;
  int iVar3;
  long lVar4;
  int extraout_ECX;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  void *in_stack_0000049c;
  int in_stack_000004a0;
  int in_stack_000004a4;
  int in_stack_000004a8;
  int in_stack_000004ac;
  long in_stack_00000560;
  long in_stack_00000580;
  void *in_stack_00000a14;
  long in_stack_00000af8;
  void *in_stack_00000f8c;
  long in_stack_00001070;
  int local_8;
  
  FUN_5df157d0();
  FUN_5df090f0();
  FUN_5df090f0();
  FUN_5df090f0();
  fVar1 = *(float *)(extraout_ECX + 0x9c);
  iVar3 = FUN_5df08950();
  if (iVar3 < 0) {
    FUN_5df09140();
    FUN_5df09140();
    FUN_5df09140();
    return iVar3;
  }
  iVar3 = FUN_5df09170();
  if (((iVar3 != 0) && (iVar3 = FUN_5df09170(), iVar3 != 0)) && (iVar3 = FUN_5df09170(), iVar3 != 0)
     ) {
    if ((*(int *)(extraout_ECX + 0x178) != 0) || (*(int *)(extraout_ECX + 0x1a0) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
      if (*(int *)(extraout_ECX + 0x1a0) == 0) {
        *(undefined4 *)(extraout_ECX + 0x168) = *(undefined4 *)(extraout_ECX + 0x158);
        *(undefined4 *)(extraout_ECX + 0x16c) = *(undefined4 *)(extraout_ECX + 0x15c);
        *(undefined4 *)(extraout_ECX + 0x170) = *(undefined4 *)(extraout_ECX + 0x160);
        *(undefined4 *)(extraout_ECX + 0x174) = *(undefined4 *)(extraout_ECX + 0x164);
      }
      else {
        *(float *)(extraout_ECX + 0x168) =
             (float)(((float10)*(float *)(extraout_ECX + 400) -
                     (float10)*(float *)(extraout_ECX + 0x180)) *
                     (float10)*(double *)(extraout_ECX + 0x1a8) +
                    (float10)*(float *)(extraout_ECX + 0x180));
        *(undefined4 *)(extraout_ECX + 0x16c) = *(undefined4 *)(extraout_ECX + 0x184);
        *(double *)(extraout_ECX + 0x170) =
             (double)(((float10)*(double *)(extraout_ECX + 0x198) -
                      (float10)*(double *)(extraout_ECX + 0x188)) *
                      (float10)*(double *)(extraout_ECX + 0x1a8) +
                     (float10)*(double *)(extraout_ECX + 0x188));
      }
      *(undefined4 *)(extraout_ECX + 0x178) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
    }
    dVar2 = _DAT_5df18838;
    if ((_DAT_5df18838 <= *(double *)(extraout_ECX + 0x170)) &&
       (dVar2 = _DAT_5df18830, *(double *)(extraout_ECX + 0x170) <= _DAT_5df18830)) {
      dVar2 = *(double *)(extraout_ECX + 0x170);
    }
    local_8 = in_stack_000004a8 - in_stack_000004a0;
    if (in_stack_000004a8 - in_stack_000004a0 <= in_stack_000004ac - in_stack_000004a4) {
      local_8 = in_stack_000004ac - in_stack_000004a4;
    }
    lVar4 = SfDibWipe(in_stack_0000049c,(tagRECT *)&stack0x000004a0,in_stack_00000580,
                      (tagRECT *)&stack0x00000504,in_stack_00000a14,in_stack_00000f8c,
                      in_stack_00000af8,in_stack_00001070,(tagRECT *)&stack0x00000a18,
                      (tagRECT *)&stack0x00000a7c,in_stack_00000560,
                      (double)CONCAT44(SUB84((double)*(float *)(extraout_ECX + 0x168),0),
                                       (int)((ulonglong)((double)local_8 * dVar2 * _DAT_5df1eec0) >>
                                            0x20)),
                      (double)CONCAT44(SUB84((double)fVar1,0),
                                       (int)((ulonglong)(double)*(float *)(extraout_ECX + 0x168) >>
                                            0x20)),
                      (double)(CONCAT44(*(undefined4 *)(extraout_ECX + 0x80),unaff_retaddr) &
                              0x1ffffffff),unaff_EDI);
    if (-1 < lVar4) {
      FUN_5df090e0();
    }
    FUN_5df09140();
    FUN_5df09140();
    FUN_5df09140();
    return lVar4;
  }
  FUN_5df09140();
  FUN_5df09140();
  FUN_5df09140();
  return -0x7fffbffb;
}


