/* Module: vidpcore.dll
   Function: FUN_5de6bdb0
   Address: 5de6bdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5de6bdb0(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  double dVar7;
  int iStack_b28;
  undefined4 uStack_b24;
  int iStack_b20;
  undefined4 uStack_b1c;
  undefined1 auStack_b14 [8];
  undefined1 local_b0c [4];
  undefined1 local_b08 [1092];
  double dStack_6c4;
  undefined4 uStack_67c;
  int iStack_678;
  int iStack_674;
  int iStack_670;
  int iStack_66c;
  undefined1 auStack_614 [92];
  undefined4 uStack_5b8;
  undefined4 uStack_598;
  undefined4 uStack_104;
  undefined1 auStack_100 [100];
  undefined1 auStack_9c [92];
  undefined4 uStack_40;
  undefined4 uStack_20;
  
  FUN_5df090f0();
  FUN_5df090f0();
  iVar2 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))
                    (*(int **)(param_1 + 0xa8),local_b08,local_b0c);
  if (-1 < iVar2) {
    iVar2 = FUN_5df09170(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),auStack_b14,0,param_2 + 8);
    if ((iVar2 == 0) ||
       (iVar2 = FUN_5df09170(*(undefined4 *)(param_1 + 0xa8),auStack_b14,1,param_2 + 0x50),
       iVar2 == 0)) {
      FUN_5df09140();
      FUN_5df09140();
      return -0x7fffbffb;
    }
    if ((*(int *)(param_1 + 0x198) != 0) || (*(int *)(param_1 + 0x1e0) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
      if (*(int *)(param_1 + 0x1e0) == 0) {
        puVar3 = (undefined4 *)(param_1 + 0x158);
        puVar4 = (undefined4 *)(param_1 + 0x178);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      else {
        *(double *)(param_1 + 0x178) =
             (*(double *)(param_1 + 0x1c0) - *(double *)(param_1 + 0x1a0)) *
             *(double *)(param_1 + 0x1e8) + *(double *)(param_1 + 0x1a0);
        *(double *)(param_1 + 400) =
             (*(double *)(param_1 + 0x1d8) - *(double *)(param_1 + 0x1b8)) *
             *(double *)(param_1 + 0x1e8) + *(double *)(param_1 + 0x1b8);
        *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x1a8);
        *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x1ac);
        *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x1b0);
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x1b4);
      }
      *(undefined4 *)(param_1 + 0x198) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
    }
    if (_DAT_5df18838 <= *(double *)(param_1 + 0x178)) {
      if (*(double *)(param_1 + 0x178) <= _DAT_5df18830) {
        dVar7 = *(double *)(param_1 + 0x178);
      }
      else {
        dVar7 = 1.0;
      }
    }
    else {
      dVar7 = 0.0;
    }
    dVar1 = _DAT_5df18838;
    if ((_DAT_5df18838 <= *(double *)(param_1 + 400)) &&
       (dVar1 = _DAT_5df18830, *(double *)(param_1 + 400) <= _DAT_5df18830)) {
      dVar1 = *(double *)(param_1 + 400);
    }
    iStack_66c = iStack_66c - iStack_674;
    iStack_670 = iStack_670 - iStack_678;
    iVar2 = iStack_670;
    if (iStack_670 <= iStack_66c) {
      iVar2 = iStack_66c;
    }
    dVar7 = (double)iVar2 * dVar7;
    if (iStack_670 <= iStack_66c) {
      iStack_670 = iStack_66c;
    }
    dVar1 = (double)iStack_670 * dStack_6c4 * dVar1;
    if ((_DAT_5df18838 == dVar7) && (_DAT_5df18838 == dVar1)) {
      iVar2 = FUN_5debc440(uStack_67c,&iStack_678,uStack_598,auStack_614,uStack_104,auStack_100,
                           uStack_20,auStack_9c,uStack_5b8);
    }
    else if ((*(int *)(param_1 + 0x180) == 1) &&
            (((*(int *)(param_1 + 0x184) == 1 && (*(int *)(param_1 + 0x188) == 1)) &&
             (*(int *)(param_1 + 0x18c) == 1)))) {
      iVar2 = FUN_5dec9430(uStack_67c,&iStack_678,uStack_598,auStack_614,uStack_104,auStack_100,
                           uStack_20,auStack_9c,dVar7,dVar1,uStack_40);
    }
    else {
      iStack_b28 = *(int *)(param_1 + 0x188);
      uStack_b24 = *(undefined4 *)(param_1 + 0x184);
      uStack_b1c = *(undefined4 *)(param_1 + 0x18c);
      iStack_b20 = *(int *)(param_1 + 0x180);
      iVar2 = FUN_5debc440(uStack_67c,&iStack_678,uStack_598,auStack_614,uStack_104,auStack_100,
                           uStack_20,auStack_9c,uStack_5b8);
      if (-1 < iVar2) {
        piVar6 = &iStack_b28;
        iVar5 = 0;
        do {
          if ((*piVar6 != 0) &&
             (iVar2 = FUN_5dec94c0(uStack_67c,&iStack_678,uStack_598,auStack_614,uStack_104,
                                   auStack_100,uStack_20,auStack_9c,dVar7,dVar1,iVar5,uStack_5b8),
             iVar2 < 0)) goto LAB_5de6c230;
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar5 < 4);
        if (-1 < iVar2) {
          iVar2 = FUN_5debd9b0(uStack_67c,&iStack_678,uStack_598,auStack_614,uStack_5b8);
        }
      }
    }
  }
LAB_5de6c230:
  FUN_5df09140();
  FUN_5df09140();
  return iVar2;
}


