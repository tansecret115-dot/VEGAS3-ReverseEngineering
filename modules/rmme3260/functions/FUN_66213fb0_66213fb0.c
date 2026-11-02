/* Module: rmme3260.dll
   Function: FUN_66213fb0
   Address: 66213fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66213fb0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)param_1 + 0x3b0) == 0) {
    *(undefined4 *)((int)param_1 + 0x3b0) = 1;
  }
  iVar1 = *(int *)((int)param_1 + 0x3b0);
  if (iVar1 == 1) {
    *(undefined4 *)((int)param_1 + 0x3b8) = 0;
    *(undefined4 *)((int)param_1 + 0x3bc) = 0;
    *(undefined4 *)((int)param_1 + 0x3b0) = 2;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        *(undefined4 *)((int)param_1 + 0x3b0) = 0;
        FUN_662140d0(param_1,0);
      }
      else {
        iVar2 = -0x7ffbfff7;
      }
      goto LAB_662140b6;
    }
    if (*(uint *)((int)param_1 + 0x3b8) < *(uint *)((int)param_1 + 0xfc)) {
      *(undefined4 *)
       (*(int *)((int)param_1 + 0x108) + 0x14 + *(uint *)((int)param_1 + 0x3b8) * 0x18) = 0;
      iVar2 = *(int *)((int)param_1 + 0x3b8) + 1;
      *(int *)((int)param_1 + 0x3b8) = iVar2;
      iVar2 = FUN_662690b0(*(void **)(*(int *)((int)param_1 + 0x108) + -0x10 + iVar2 * 0x18),
                           *(undefined4 *)((int)param_1 + 0x3b4));
      goto LAB_662140b6;
    }
    if (*(uint *)((int)param_1 + 0x3bc) < *(uint *)((int)param_1 + 0x10c)) {
      *(undefined4 *)
       (*(int *)((int)param_1 + 0x108) + 0x14 + *(uint *)((int)param_1 + 0x3bc) * 0x18) = 0;
      iVar2 = *(int *)((int)param_1 + 0x3bc) + 1;
      *(int *)((int)param_1 + 0x3bc) = iVar2;
      iVar2 = FUN_662690b0(*(void **)(*(int *)((int)param_1 + 0x108) + -0x10 + iVar2 * 0x18),
                           *(undefined4 *)((int)param_1 + 0x3b4));
      goto LAB_662140b6;
    }
    *(undefined4 *)((int)param_1 + 0x3b0) = 3;
  }
  FUN_66213fb0(param_1);
LAB_662140b6:
  if (iVar2 < 0) {
    *(int *)((int)param_1 + 0x24) = iVar2;
    FUN_662140d0(param_1,iVar2);
  }
  return 0;
}


