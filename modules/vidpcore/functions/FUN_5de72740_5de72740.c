/* Module: vidpcore.dll
   Function: FUN_5de72740
   Address: 5de72740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de72740(void)

{
  double dVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_stack_0000054c;
  
  FUN_5df157d0();
  FUN_5df090f0();
  FUN_5df090f0();
  iVar2 = (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x18))();
  if (-1 < iVar2) {
    iVar2 = FUN_5df09170();
    if (iVar2 == 0) {
LAB_5de727dc:
      FUN_5df09140();
      FUN_5df09140();
      return -0x7fffbffb;
    }
    if (*(int *)(extraout_ECX + 0x7c) != 0) {
      iVar2 = FUN_5df09170();
      if (iVar2 == 0) goto LAB_5de727dc;
      FUN_5debc440();
    }
    if ((*(int *)(extraout_ECX + 0x1b8) != 0) || (*(int *)(extraout_ECX + 0x220) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
      if (*(int *)(extraout_ECX + 0x220) == 0) {
        puVar3 = (undefined4 *)(extraout_ECX + 0x158);
        puVar4 = (undefined4 *)(extraout_ECX + 0x188);
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      else {
        dVar1 = *(double *)(extraout_ECX + 0x228);
        *(double *)(extraout_ECX + 0x188) =
             (*(double *)(extraout_ECX + 0x1f0) - *(double *)(extraout_ECX + 0x1c0)) * dVar1 +
             *(double *)(extraout_ECX + 0x1c0);
        *(double *)(extraout_ECX + 400) =
             (*(double *)(extraout_ECX + 0x1f8) - *(double *)(extraout_ECX + 0x1c8)) * dVar1 +
             *(double *)(extraout_ECX + 0x1c8);
        *(double *)(extraout_ECX + 0x198) =
             (*(double *)(extraout_ECX + 0x200) - *(double *)(extraout_ECX + 0x1d0)) * dVar1 +
             *(double *)(extraout_ECX + 0x1d0);
        *(double *)(extraout_ECX + 0x1a0) =
             (*(double *)(extraout_ECX + 0x208) - *(double *)(extraout_ECX + 0x1d8)) * dVar1 +
             *(double *)(extraout_ECX + 0x1d8);
        *(double *)(extraout_ECX + 0x1a8) =
             (*(double *)(extraout_ECX + 0x210) - *(double *)(extraout_ECX + 0x1e0)) * dVar1 +
             *(double *)(extraout_ECX + 0x1e0);
        *(undefined4 *)(extraout_ECX + 0x1b0) = *(undefined4 *)(extraout_ECX + 0x1e8);
      }
      *(undefined4 *)(extraout_ECX + 0x1b8) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
    }
    if (in_stack_0000054c == 4) {
      FUN_5de72560();
    }
    else {
      FUN_5de72560();
    }
    if (*(int *)(extraout_ECX + 0x1b0) == 3) {
      iVar2 = FUN_5debdad0();
    }
    else {
      iVar2 = FUN_5debe030();
      if (-1 < iVar2) {
        iVar2 = FUN_5debd9b0();
      }
    }
  }
  FUN_5df09140();
  FUN_5df09140();
  return iVar2;
}


