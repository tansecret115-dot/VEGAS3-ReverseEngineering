/* Module: vegas30.exe
   Function: FUN_005c6b30
   Address: 005c6b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005c6b30(undefined4 *param_1,int param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = 0;
  local_4 = 0;
  FUN_005b83b0(param_1,1);
  iVar1 = FUN_005c68e0(param_2);
  if (iVar1 < 1) {
LAB_005c6b7c:
    local_4 = 0x80004005;
  }
  else {
    do {
      pvVar2 = (void *)FUN_005c6910(param_2,iVar3);
      if (param_3 == pvVar2) {
        if (iVar1 <= iVar3) goto LAB_005c6b7c;
        if (param_3 == *(void **)(param_2 + 0x50)) {
          if ((code *)**(undefined4 **)(param_2 + 0x218) != (code *)0x0) {
            (*(code *)**(undefined4 **)(param_2 + 0x218))(param_2);
          }
          if (*(int *)(param_2 + 4) == 3) {
            FUN_0043d090(param_2);
          }
          iVar1 = *(int *)(param_2 + 0x3c) + 1;
          if (iVar1 < 2) {
            iVar1 = 1;
          }
          *(int *)(param_2 + 0x3c) = iVar1;
          iVar1 = *(int *)(param_2 + 8);
          *(undefined4 *)(param_2 + 0x50) = 0;
          *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10000;
          if (iVar1 != 0) {
            *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
            *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
          }
        }
        if ((*(int *)(param_2 + 0x54) != 0) &&
           (iVar1 = _SfList_FindSpecificItemRange_16(*(int *)(param_2 + 0x54),0,0xffffffff,param_3),
           -1 < iVar1)) {
          local_4 = _SfList_DeleteList_16(*(undefined4 *)(param_2 + 0x54),iVar1,1,1);
        }
        if (*(int *)((int)param_3 + 0x18) != 0) {
          iVar1 = FUN_004e4ed0(*(undefined4 *)(param_2 + 8));
          if (iVar1 == 0) {
            iVar1 = FUN_005bad20(param_1);
          }
          else {
            iVar1 = FUN_005ec620();
          }
          if (iVar1 != 0) {
            local_4 = FUN_005ed2f0(*(int *)((int)param_3 + 0x18) + 0x170,0,0);
          }
        }
        pvVar2 = *(void **)((int)param_3 + 0x20);
        if ((pvVar2 != (void *)0x0) && (pvVar2 != (void *)((int)param_3 + 0x28))) {
          free(pvVar2);
        }
        free(param_3);
        FUN_005c6ad0(param_1,param_2);
        *(uint *)*param_1 = *(uint *)*param_1 | 0x100;
        if (((*(uint *)(param_2 + 0x10) & 0x400) != 0) ||
           ((*(uint *)(*(int *)(param_2 + 8) + 0x10) & 0x200) != 0)) {
          *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
        }
        goto LAB_005c6ca9;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
    local_4 = 0x80004005;
  }
LAB_005c6ca9:
  FUN_005b84d0(param_1,1);
  return local_4;
}


