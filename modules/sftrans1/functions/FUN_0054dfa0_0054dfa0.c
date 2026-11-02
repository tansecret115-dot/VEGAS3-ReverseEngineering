/* Module: sftrans1.dll
   Function: FUN_0054dfa0
   Address: 0054dfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0054dfa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  double local_18;
  double local_10;
  
  if ((double)CONCAT44(param_3,param_2) <= _DAT_00555910) {
    local_34 = 0;
    local_30 = 1;
    local_38 = **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8);
  }
  else {
    local_34 = **(int **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x14c) * 8) + -1;
    local_38 = -1;
    local_30 = -1;
  }
  bVar1 = true;
  for (iVar2 = local_34; iVar2 != local_38; iVar2 = iVar2 + local_30) {
    if ((*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x150) +
                                             *(int *)(param_1 + 0x14c) * 8) + 8) + iVar2 * 4) + 0x10
                  ) != '\0') &&
       ((FUN_0054e230(iVar2,param_2,param_3,param_4,param_5,1,&local_28,&local_20), iVar3 = local_34
        , _DAT_0055ca40 <=
          ABS((double)CONCAT44(param_3,param_2) - (double)CONCAT44(uStack_24,local_28)) ||
        (_DAT_0055ca40 <=
         ABS((double)CONCAT44(param_5,param_4) - (double)CONCAT44(uStack_1c,local_20)))))) {
      while ((*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x150) +
                                                  *(int *)(param_1 + 0x14c) * 8) + 8) + iVar3 * 4) +
                       0x10) == '\0' ||
             ((FUN_0054e230(iVar3,local_28,uStack_24,local_20,uStack_1c,1,&local_18,&local_10),
              ABS((double)CONCAT44(uStack_24,local_28) - local_18) <= _DAT_0055ca40 &&
              (ABS((double)CONCAT44(uStack_1c,local_20) - local_10) <= _DAT_0055ca40))))) {
        iVar3 = iVar3 + local_30;
        if (iVar3 == local_38) {
          param_2 = local_28;
          param_3 = uStack_24;
          param_4 = local_20;
          param_5 = uStack_1c;
          bVar1 = true;
          goto LAB_0054e160;
        }
      }
      bVar1 = false;
    }
  }
LAB_0054e160:
  if ((((double)CONCAT44(param_3,param_2) != _DAT_00555910) ||
      ((double)CONCAT44(param_5,param_4) != _DAT_00555910)) && (bVar1)) {
    for (; local_34 != local_38; local_34 = local_34 + local_30) {
      if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x150) +
                                              *(int *)(param_1 + 0x14c) * 8) + 8) + local_34 * 4) +
                   0x10) != '\0') {
        iVar3 = FUN_0054e230(local_34,param_2,param_3,param_4,param_5,0,0,0);
        iVar2 = *(int *)(param_1 + 0x158);
        if (local_34 == iVar2) {
          iVar2 = iVar2 + iVar3;
LAB_0054e200:
          *(int *)(param_1 + 0x158) = iVar2;
        }
        else {
          if ((local_34 < iVar2) && (iVar2 <= iVar3 + local_34)) {
            iVar2 = iVar2 + -1;
            goto LAB_0054e200;
          }
          if ((iVar2 < local_34) && (iVar3 + local_34 <= iVar2)) {
            iVar2 = iVar2 + 1;
            goto LAB_0054e200;
          }
        }
        if (local_34 == *(int *)(param_1 + 0x154)) {
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + iVar3;
        }
      }
    }
    FUN_0054f0c0();
  }
  return;
}


