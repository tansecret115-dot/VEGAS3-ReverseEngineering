/* Module: sfpaplug.dll
   Function: FUN_00411430
   Address: 00411430
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00411430(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int iStack_240;
  int local_23c;
  undefined4 uStack_238;
  int local_234;
  wchar_t awStack_230 [16];
  wchar_t awStack_210 [264];
  
  local_234 = param_1;
  FUN_00410e80(*(int **)(param_1 + 0x14));
  *(int *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = FUN_0042baa0((int *)(param_1 + 0x14),4,-1,-1,0x80000002);
    if (((-1 < iVar2) &&
        ((**(code **)(**(int **)(param_1 + 0x24) + 0x10))(*(int **)(param_1 + 0x24),&local_23c),
        unaff_EBX != 0)) && (iVar3 = 0, 0 < unaff_EBX)) {
      do {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x14))
                          (*(int **)(param_1 + 0x24),iVar3,&uStack_238);
        if (((-1 < iVar2) &&
            (iVar2 = FUN_0042b770(*(int **)(param_1 + 0x14),(int *)0x0,0x248,-1,&iStack_240),
            -1 < iVar2)) &&
           (puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x14) + 8) + iStack_240 * 4),
           puVar1 != (undefined4 *)0x0)) {
          *puVar1 = 0x1c;
          puVar1[1] = uStack_238;
          puVar1[2] = local_234;
          puVar1[3] = 0;
          puVar1[4] = 0;
          wcsncpy((wchar_t *)(puVar1 + 7),awStack_230,0x11);
          puVar1[5] = 0x22;
          wcsncpy((wchar_t *)((int)puVar1 + 0x3e),awStack_210,0x105);
          puVar1[6] = 0x20a;
          param_1 = local_23c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < unaff_EBX);
    }
    return iVar2;
  }
  return 0;
}


