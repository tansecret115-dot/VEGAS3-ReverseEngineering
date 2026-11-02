/* Module: sftrans1.dll
   Function: FUN_004af6a0
   Address: 004af6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004af6a0(void)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 in_stack_00000448;
  
  FUN_00551640();
  FUN_0052f210();
  FUN_0052f210();
  FUN_0052f210();
  iVar2 = FUN_0052ea70();
  if (iVar2 < 0) {
LAB_004af8c0:
    FUN_0052f260();
    FUN_0052f260();
    FUN_0052f260();
    return iVar2;
  }
  iVar2 = FUN_0052f290();
  if (iVar2 != 0) {
    iVar2 = FUN_0052f290();
    if (iVar2 != 0) {
      iVar2 = FUN_0052f290();
      if (iVar2 != 0) {
        if ((*(int *)(extraout_ECX + 0x188) != 0) || (*(int *)(extraout_ECX + 0x1c0) != 0)) {
          EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
          if (*(int *)(extraout_ECX + 0x1c0) == 0) {
            puVar4 = (undefined4 *)(extraout_ECX + 0x158);
            puVar5 = (undefined4 *)(extraout_ECX + 0x170);
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
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
          LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x13c));
        }
        uVar3 = ftol();
        *(undefined4 *)(extraout_ECX + 0x1e8) = uVar3;
        uVar3 = ftol();
        *(undefined4 *)(extraout_ECX + 0x1ec) = uVar3;
        *(undefined8 *)(extraout_ECX + 0x1f8) = in_stack_00000448;
        iVar2 = FUN_004af270();
        if (-1 < iVar2) {
          FUN_0052f200();
        }
        goto LAB_004af8c0;
      }
    }
  }
  FUN_0052f260();
  FUN_0052f260();
  FUN_0052f260();
  return -0x7fffbffb;
}


