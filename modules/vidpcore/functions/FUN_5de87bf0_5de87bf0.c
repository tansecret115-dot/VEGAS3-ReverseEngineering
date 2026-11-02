/* Module: vidpcore.dll
   Function: FUN_5de87bf0
   Address: 5de87bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5de87bf0(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_b08 [1176];
  undefined4 local_670;
  undefined1 local_66c [100];
  undefined1 local_608 [92];
  undefined4 local_5ac;
  undefined4 local_58c;
  undefined4 local_f8;
  undefined1 local_f4 [100];
  undefined1 local_90 [124];
  undefined4 local_14;
  
  FUN_5df090f0();
  FUN_5df090f0();
  iVar3 = FUN_5df08950(*(undefined4 *)(param_1 + 0xa8),local_b08);
  if (iVar3 < 0) goto LAB_5de87ea8;
  iVar3 = FUN_5df09170(*(undefined4 *)(param_1 + 0xa8),local_b08,1,param_2 + 0x50);
  if (iVar3 == 0) goto LAB_5de87df5;
  if ((*(int *)(param_1 + 0x188) != 0) || (*(int *)(param_1 + 0x1c0) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
    if (*(int *)(param_1 + 0x1c0) == 0) {
      puVar4 = (undefined4 *)(param_1 + 0x158);
      puVar5 = (undefined4 *)(param_1 + 0x170);
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    else {
      dVar1 = *(double *)(param_1 + 0x1c8);
      if (*(double *)(param_1 + 400) <= *(double *)(param_1 + 0x1a8)) {
        dVar2 = *(double *)(param_1 + 0x1a8) - *(double *)(param_1 + 400);
        if ((_DAT_5df18830 - *(double *)(param_1 + 0x1a8)) + *(double *)(param_1 + 400) <= dVar2) {
          dVar2 = (*(double *)(param_1 + 400) + _DAT_5df18830) - *(double *)(param_1 + 0x1a8);
          goto LAB_5de87d31;
        }
        dVar2 = dVar2 * dVar1 + *(double *)(param_1 + 400);
      }
      else {
        dVar2 = *(double *)(param_1 + 400) - *(double *)(param_1 + 0x1a8);
        if (dVar2 < (_DAT_5df18830 - *(double *)(param_1 + 400)) + *(double *)(param_1 + 0x1a8)) {
LAB_5de87d31:
          dVar2 = *(double *)(param_1 + 400) - dVar2 * dVar1;
        }
        else {
          dVar2 = ((*(double *)(param_1 + 0x1a8) + _DAT_5df18830) - *(double *)(param_1 + 400)) *
                  dVar1 + *(double *)(param_1 + 400);
        }
      }
      if (dVar2 <= _DAT_5df18830) {
        if (dVar2 < _DAT_5df18838) {
          dVar2 = dVar2 + _DAT_5df18830;
        }
      }
      else {
        dVar2 = dVar2 - _DAT_5df18830;
      }
      *(double *)(param_1 + 0x170) = dVar2;
      *(double *)(param_1 + 0x178) =
           (*(double *)(param_1 + 0x1b0) - *(double *)(param_1 + 0x198)) * dVar1 +
           *(double *)(param_1 + 0x198);
      *(double *)(param_1 + 0x180) =
           (*(double *)(param_1 + 0x1b8) - *(double *)(param_1 + 0x1a0)) * dVar1 +
           *(double *)(param_1 + 0x1a0);
    }
    *(undefined4 *)(param_1 + 0x188) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar3 = FUN_5df091c0(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),local_b08,0);
    if (iVar3 == 0) {
LAB_5de87df5:
      FUN_5df09140();
      FUN_5df09140();
      return -0x7fffbffb;
    }
    FUN_5debc440(local_670,local_66c,local_58c,local_608,local_f8,local_f4,local_14,local_90,
                 local_5ac);
  }
  iVar3 = FUN_5de878d0(local_670,local_66c,local_58c,local_608,local_5ac,param_1 + 0x170);
  if (-1 < iVar3) {
    FUN_5df090e0();
  }
LAB_5de87ea8:
  FUN_5df09140();
  FUN_5df09140();
  return iVar3;
}


