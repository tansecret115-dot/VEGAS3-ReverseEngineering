/* Module: vidpcore.dll
   Function: FUN_5de7c140
   Address: 5de7c140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5de7c140(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 *puVar6;
  int *unaff_retaddr;
  int iStack0000000c;
  int iStack00000010;
  int in_stack_0000004c;
  int in_stack_00000084;
  int in_stack_0000008c;
  undefined4 in_stack_00000094;
  undefined4 in_stack_0000009c;
  int in_stack_0000054c;
  int in_stack_00000550;
  int in_stack_00000554;
  int in_stack_00000558;
  
  FUN_5df157d0();
  FUN_5df090f0();
  FUN_5df090f0();
  iVar2 = (**(code **)(**(int **)(extraout_ECX + 0xa8) + 0x18))();
  if (-1 < iVar2) {
    iVar2 = FUN_5df09170();
    if ((iVar2 == 0) || (iVar2 = FUN_5df09170(), iVar2 == 0)) {
LAB_5de7c4b9:
      FUN_5df09140();
      FUN_5df09140();
      return -0x7fffbffb;
    }
    FUN_5df093b0();
    FUN_5df093a0();
    iVar2 = FUN_5debb520();
    if ((-1 < iVar2) && (in_stack_0000004c != 1)) {
      FUN_5debc440();
      if ((*(int *)(extraout_ECX + 0x178) != 0) || (*(int *)(extraout_ECX + 0x1a0) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x140));
        if (*(int *)(extraout_ECX + 0x1a0) == 0) {
          *(undefined4 *)(extraout_ECX + 0x168) = *(undefined4 *)(extraout_ECX + 0x158);
          *(undefined4 *)(extraout_ECX + 0x16c) = *(undefined4 *)(extraout_ECX + 0x15c);
          *(undefined4 *)(extraout_ECX + 0x170) = *(undefined4 *)(extraout_ECX + 0x160);
          *(undefined4 *)(extraout_ECX + 0x174) = *(undefined4 *)(extraout_ECX + 0x164);
        }
        else {
          *(double *)(extraout_ECX + 0x168) =
               (*(double *)(extraout_ECX + 400) - *(double *)(extraout_ECX + 0x180)) *
               *(double *)(extraout_ECX + 0x1a8) + *(double *)(extraout_ECX + 0x180);
          *(double *)(extraout_ECX + 0x170) =
               (*(double *)(extraout_ECX + 0x198) - *(double *)(extraout_ECX + 0x188)) *
               *(double *)(extraout_ECX + 0x1a8) + *(double *)(extraout_ECX + 0x188);
        }
        *(undefined4 *)(extraout_ECX + 0x178) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x140));
      }
      iVar3 = ftol();
      if (_DAT_5df24f80 < *(double *)(extraout_ECX + 0x168)) {
        iVar3 = in_stack_00000554 - in_stack_0000054c;
      }
      iVar4 = ftol();
      if (_DAT_5df24f80 < *(double *)(extraout_ECX + 0x170)) {
        iVar4 = in_stack_00000558 - in_stack_00000550;
      }
      FUN_5df090f0();
      puVar6 = (undefined4 *)&stack0x00000080;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      piVar1 = *(int **)(extraout_ECX + 0x3c);
      puVar6 = (undefined4 *)&stack0x00000080;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      in_stack_00000094 = 1;
      in_stack_0000009c = 0x7fffffff;
      in_stack_00000084 = iVar3;
      in_stack_0000008c = iVar4;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
      if (-1 < iVar2) {
        iVar5 = FUN_5df091c0();
        if (iVar5 == 0) {
          (**(code **)(*unaff_retaddr + 8))();
          FUN_5df09140();
          goto LAB_5de7c4b9;
        }
        FUN_5debfa40();
        ftol();
        ftol();
        iStack0000000c = 0;
        if (0 < iVar4) {
          do {
            iStack00000010 = 0;
            if (0 < iVar3) {
              do {
                FUN_5debb890();
                iStack00000010 = iStack00000010 + 1;
              } while (iStack00000010 < iVar3);
            }
            iStack0000000c = iStack0000000c + 1;
          } while (iStack0000000c < iVar4);
        }
        (**(code **)(*unaff_retaddr + 8))();
      }
      FUN_5df09140();
    }
  }
  FUN_5df09140();
  FUN_5df09140();
  return iVar2;
}


