/* Module: wmfplug2.dll
   Function: FUN_00416020
   Address: 00416020
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00416020(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  longlong lVar3;
  int iVar4;
  int iStack_23c;
  int local_238;
  uint uStack_234;
  int local_230 [8];
  wchar_t awStack_210 [264];
  
  local_230[0] = param_1;
  FUN_00415dd0(*(int **)(param_1 + 0x14));
  *(int *)(param_1 + 0x14) = 0;
  iVar2 = FUN_0042c080((int *)(param_1 + 0x14),4,-1,-1,0x80000002);
  if (((-1 < iVar2) &&
      ((**(code **)(**(int **)(param_1 + 0x18) + 4))(*(int **)(param_1 + 0x18),&local_238),
      unaff_EBX != 0)) && (iVar4 = 0, 0 < unaff_EBX)) {
    do {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 8))
                        (*(int **)(param_1 + 0x18),iVar4,&uStack_234);
      if (((-1 < iVar2) &&
          (iVar2 = FUN_0042bd50(*(int **)(param_1 + 0x14),(int *)0x0,0x248,-1,&iStack_23c),
          -1 < iVar2)) &&
         (puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x14) + 8) + iStack_23c * 4),
         puVar1 != (undefined4 *)0x0)) {
        *puVar1 = 0x1c;
        lVar3 = __allmul(uStack_234,(int)uStack_234 >> 0x1f,10000,0);
        *(longlong *)(puVar1 + 1) = lVar3;
        puVar1[3] = 0;
        puVar1[4] = 0;
        wcsncpy((wchar_t *)(puVar1 + 7),(wchar_t *)local_230,0x11);
        puVar1[5] = 0x22;
        wcsncpy((wchar_t *)((int)puVar1 + 0x3e),awStack_210,0x105);
        puVar1[6] = 0x20a;
        param_1 = local_238;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < unaff_EBX);
  }
  return iVar2;
}


