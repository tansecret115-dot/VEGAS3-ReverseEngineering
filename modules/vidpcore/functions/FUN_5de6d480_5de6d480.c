/* Module: vidpcore.dll
   Function: FUN_5de6d480
   Address: 5de6d480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de6d480(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *in_stack_0000048c;
  int in_stack_00000550;
  long in_stack_00000570;
  
  FUN_5df157d0();
  FUN_5df090f0();
  FUN_5df090f0();
  iVar2 = (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x18))();
  if (-1 < iVar2) {
    iVar3 = FUN_5df09170();
    if (iVar3 == 0) {
LAB_5de6d520:
      FUN_5df09140();
      FUN_5df09140();
      return -0x7fffbffb;
    }
    if (*(int *)(extraout_ECX + 0x7c) != 0) {
      iVar2 = FUN_5df09170();
      if (iVar2 == 0) goto LAB_5de6d520;
      iVar2 = FUN_5debc440();
    }
    if (in_stack_00000550 != 4) {
      FUN_5df09140();
      FUN_5df09140();
      return -0x7fffbfff;
    }
    if ((*(int *)(extraout_ECX + 0x188) != 0) || (*(int *)(extraout_ECX + 0x1c0) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x140));
      if (*(int *)(extraout_ECX + 0x1c0) == 0) {
        puVar4 = (undefined4 *)(extraout_ECX + 0x158);
        puVar5 = (undefined4 *)(extraout_ECX + 0x170);
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      else {
        dVar1 = *(double *)(extraout_ECX + 0x1c8);
        *(double *)(extraout_ECX + 0x170) =
             (*(double *)(extraout_ECX + 0x1a8) - *(double *)(extraout_ECX + 400)) * dVar1 +
             *(double *)(extraout_ECX + 400);
        *(double *)(extraout_ECX + 0x178) =
             (*(double *)(extraout_ECX + 0x1b0) - *(double *)(extraout_ECX + 0x198)) * dVar1 +
             *(double *)(extraout_ECX + 0x198);
        *(double *)(extraout_ECX + 0x180) =
             (*(double *)(extraout_ECX + 0x1b8) - *(double *)(extraout_ECX + 0x1a0)) * dVar1 +
             *(double *)(extraout_ECX + 0x1a0);
      }
      *(undefined4 *)(extraout_ECX + 0x188) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x140));
    }
    if (_DAT_5df205e0 < ABS(*(double *)(extraout_ECX + 0x170))) {
      iVar2 = SfDibBrightness(in_stack_0000048c,(tagRECT *)&stack0x00000490,in_stack_00000570,
                              (tagRECT *)&stack0x000004f4,4,(float)*(double *)(extraout_ECX + 0x170)
                             );
    }
    if (_DAT_5df205e0 < ABS(*(double *)(extraout_ECX + 0x178))) {
      FUN_5ded10f0();
      ftol();
      ftol();
      if (*(double *)(extraout_ECX + 0x178) <= _DAT_5df18838) {
        FUN_5de6d180();
      }
      else {
        FUN_5de6d010();
      }
      iVar2 = FUN_5debdad0();
    }
    if (-1 < iVar2) {
      FUN_5df090e0();
    }
  }
  FUN_5df09140();
  FUN_5df09140();
  return iVar2;
}


