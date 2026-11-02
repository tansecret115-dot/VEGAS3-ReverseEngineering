/* Module: sftrans1.dll
   Function: FUN_00476160
   Address: 00476160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00476160(int param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iStack_b80;
  undefined8 uStack_b7c;
  undefined1 auStack_b74 [8];
  undefined1 auStack_b6c [8];
  undefined1 local_b64 [4];
  undefined1 local_b60 [4];
  undefined1 auStack_b5c [1248];
  undefined4 uStack_67c;
  int iStack_678;
  int iStack_674;
  int iStack_670;
  int iStack_66c;
  undefined4 uStack_5b8;
  double dStack_5ac;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_104;
  undefined1 auStack_100 [220];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_0052f210();
  FUN_0052f210();
  iVar3 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))
                    (*(int **)(param_1 + 0xa8),local_b60,local_b64);
  if (iVar3 < 0) {
LAB_0047651e:
    FUN_0052f260();
    FUN_0052f260();
    return iVar3;
  }
  iVar3 = FUN_0052f2e0(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),auStack_b6c,0);
  if (iVar3 != 0) {
    iVar3 = FUN_0052f2e0(*(undefined4 *)(param_1 + 0xa8),auStack_b6c,1);
    if (iVar3 != 0) {
      FUN_004cded0(uStack_67c,&iStack_678,uStack_598,0,uStack_104,auStack_100,uStack_20,0,uStack_5b8
                  );
      if ((*(int *)(param_1 + 0x388) != 0) || (*(int *)(param_1 + 0x5c0) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
        if (*(int *)(param_1 + 0x5c0) == 0) {
          puVar5 = (undefined4 *)(param_1 + 0x158);
          puVar6 = (undefined4 *)(param_1 + 0x270);
          for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          FUN_004749b0(param_1 + 0x390,param_1 + 0x4a8,*(undefined4 *)(param_1 + 0x5c8),
                       *(undefined4 *)(param_1 + 0x5cc));
        }
        *(undefined4 *)(param_1 + 0x388) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
      }
      if (*(int *)(param_1 + 0x278) != 0) {
        FUN_004d3a30(uStack_67c,&iStack_678,uStack_598,0,uStack_5b8,0);
      }
      iVar3 = FUN_004ccfb0(auStack_b5c,uStack_59c,uStack_67c,&iStack_678,uStack_598,uStack_24,
                           uStack_104,auStack_100,uStack_20,3,auStack_b74,&iStack_b80);
      if ((-1 < iVar3) && (iStack_b80 != 1)) {
        piVar1 = (int *)(param_1 + 0x5e0);
        uStack_b7c = (double)(iStack_670 - iStack_678);
        dVar2 = (double)(iStack_66c - iStack_674) * uStack_b7c;
        if (*piVar1 == 0) {
          if (*(int *)(param_1 + 0x5dc) != 0) {
            FUN_004ddac0(*(int *)(param_1 + 0x5dc));
            *(undefined4 *)(param_1 + 0x5dc) = 0;
          }
          if (*piVar1 != 0) {
            FUN_00474970(*piVar1);
            *piVar1 = 0;
          }
          iVar3 = FUN_004ddae0(0x1e240);
          *(int *)(param_1 + 0x5dc) = iVar3;
          if (iVar3 == 0) {
            FUN_0052f260();
            FUN_0052f260();
            return -0x7ff8fff2;
          }
          iVar3 = FUN_00474860();
          puVar5 = (undefined4 *)(param_1 + 0x5e8);
          for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          if (iVar3 < 0) {
            FUN_0052f260();
            FUN_0052f260();
            return iVar3;
          }
        }
        FUN_00475b10(auStack_b5c,param_1 + 0x270,*(undefined4 *)(param_1 + 0x5dc),uStack_5b8);
        *(double *)(param_1 + 0x2a0) = *(double *)(param_1 + 0x280);
        if (_DAT_00555910 < *(double *)(param_1 + 0x280)) {
          FUN_004cf0a0(uStack_67c,&iStack_678,uStack_598,0,uStack_5b8,param_1 + 0x288);
        }
        FUN_00475dc0();
        if (dStack_5ac <= _DAT_00555910) {
          dStack_5ac = _DAT_005624e8;
        }
        iVar3 = FUN_00475ea0(_DAT_00555908 / dStack_5ac,dVar2,(undefined4)uStack_b7c,
                             uStack_b7c._4_4_);
      }
      goto LAB_0047651e;
    }
  }
  FUN_0052f260();
  FUN_0052f260();
  return -0x7fffbffb;
}


