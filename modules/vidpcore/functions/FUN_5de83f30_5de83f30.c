/* Module: vidpcore.dll
   Function: FUN_5de83f30
   Address: 5de83f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5de83f30(int param_1)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puStack_b78;
  undefined1 auStack_b70 [4];
  undefined1 auStack_b6c [4];
  undefined1 local_b68 [8];
  undefined1 local_b60 [4];
  undefined1 auStack_b5c [1248];
  undefined4 uStack_67c;
  undefined1 auStack_678 [192];
  undefined4 uStack_5b8;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_104;
  undefined1 auStack_100 [220];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  puStack_b78 = &stack0xfffffffc;
  FUN_5df090f0();
  FUN_5df090f0();
  iVar2 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))
                    (*(int **)(param_1 + 0xa8),local_b60,local_b68);
  if (iVar2 < 0) {
LAB_5de8413a:
    FUN_5df09140();
    FUN_5df09140();
    return iVar2;
  }
  iVar2 = FUN_5df091c0(*(undefined4 *)(*(int *)(param_1 + 0xa0) + 4),auStack_b6c,0);
  if (iVar2 != 0) {
    iVar2 = FUN_5df091c0(*(undefined4 *)(param_1 + 0xa8),auStack_b6c,1);
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
          *(double *)(param_1 + 0x188) =
               (*(double *)(param_1 + 0x1f0) - *(double *)(param_1 + 0x1c0)) * dVar1 +
               *(double *)(param_1 + 0x1c0);
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
          *(double *)(param_1 + 0x1b0) =
               (*(double *)(param_1 + 0x218) - *(double *)(param_1 + 0x1e8)) * dVar1 +
               *(double *)(param_1 + 0x1e8);
        }
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x140));
      }
      iVar2 = FUN_5debb520(auStack_b5c,uStack_59c,uStack_67c,auStack_678,uStack_598,uStack_24,
                           uStack_104,auStack_100,uStack_20,3,auStack_b70,&puStack_b78);
      if ((-1 < iVar2) && (puStack_b78 != (undefined1 *)0x1)) {
        FUN_5de83d30(auStack_b5c,param_1 + 0x188,uStack_5b8);
      }
      goto LAB_5de8413a;
    }
  }
  FUN_5df09140();
  FUN_5df09140();
  return -0x7fffbffb;
}


