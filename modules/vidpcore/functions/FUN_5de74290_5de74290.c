/* Module: vidpcore.dll
   Function: FUN_5de74290
   Address: 5de74290
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5de74290(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_b08 [1176];
  void *local_670;
  tagRECT local_66c [6];
  tagRECT local_608 [5];
  long local_5ac;
  long local_58c;
  void *local_f8;
  tagRECT local_f4 [6];
  tagRECT local_90 [7];
  long local_14;
  
  FUN_5df090f0();
  FUN_5df090f0();
  iVar2 = FUN_5df08950(*(undefined4 *)(param_1 + 0xa8),local_b08);
  if (iVar2 < 0) {
LAB_5de7446a:
    FUN_5df09140();
    FUN_5df09140();
    return iVar2;
  }
  iVar2 = FUN_5df09170(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),local_b08,0,param_2 + 8);
  if (iVar2 != 0) {
    iVar2 = FUN_5df09170(*(undefined4 *)(param_1 + 0xa8),local_b08,1,param_2 + 0x50);
    if (iVar2 != 0) {
      if ((*(int *)(param_1 + 0x1b8) != 0) || (*(int *)(param_1 + 0x220) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
        if (*(int *)(param_1 + 0x220) == 0) {
          puVar3 = (undefined4 *)(param_1 + 0x158);
          puVar4 = (undefined4 *)(param_1 + 0x188);
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          dVar1 = *(double *)(param_1 + 0x228);
          *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x1c0);
          *(double *)(param_1 + 400) =
               (*(double *)(param_1 + 0x1f8) - *(double *)(param_1 + 0x1c8)) * dVar1 +
               *(double *)(param_1 + 0x1c8);
          *(double *)(param_1 + 0x198) =
               (*(double *)(param_1 + 0x200) - *(double *)(param_1 + 0x1d0)) * dVar1 +
               *(double *)(param_1 + 0x1d0);
          *(double *)(param_1 + 0x1a0) =
               (*(double *)(param_1 + 0x208) - *(double *)(param_1 + 0x1d8)) * dVar1 +
               *(double *)(param_1 + 0x1d8);
          *(double *)(param_1 + 0x1a8) =
               (*(double *)(param_1 + 0x210) - *(double *)(param_1 + 0x1e0)) * dVar1 +
               *(double *)(param_1 + 0x1e0);
          *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x1e8);
        }
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
      }
      iVar2 = SfDibMask(local_670,local_66c,local_58c,local_608,local_f8,local_14,local_f4,local_90,
                        local_5ac,(tMASKPROP *)(param_1 + 0x188));
      if (-1 < iVar2) {
        FUN_5df090e0();
      }
      goto LAB_5de7446a;
    }
  }
  FUN_5df09140();
  FUN_5df09140();
  return -0x7fffbffb;
}


