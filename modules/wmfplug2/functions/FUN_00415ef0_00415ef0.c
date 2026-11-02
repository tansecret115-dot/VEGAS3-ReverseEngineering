/* Module: wmfplug2.dll
   Function: FUN_00415ef0
   Address: 00415ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00415ef0(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EBX;
  longlong lVar4;
  int iVar5;
  uint uStack_21c;
  int local_218;
  uint local_214;
  wchar_t awStack_210 [264];
  
  piVar1 = (int *)(param_1 + 0xc);
  local_214 = param_1;
  FUN_00415dd0(*(int **)(param_1 + 0xc));
  *piVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar3 = FUN_0042c080(piVar1,4,-1,-1,0x80000002);
    if (((-1 < iVar3) &&
        ((**(code **)(**(int **)(param_1 + 0x18) + 0xc))(*(int **)(param_1 + 0x18),&local_218),
        unaff_EBX != 0)) && (iVar5 = 0, 0 < unaff_EBX)) {
      do {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x10))
                          (*(int **)(param_1 + 0x18),iVar5,&local_214);
        if (((-1 < iVar3) &&
            (iVar3 = FUN_0042bd50((int *)*piVar1,(int *)0x0,0x226,-1,&local_218), -1 < iVar3)) &&
           (puVar2 = *(undefined4 **)(*(int *)(*piVar1 + 8) + local_218 * 4), param_1 = uStack_21c,
           puVar2 != (undefined4 *)0x0)) {
          *puVar2 = 0x1c;
          lVar4 = __allmul(local_214,(int)local_214 >> 0x1f,10000,0);
          *(longlong *)(puVar2 + 1) = lVar4;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0x20a;
          wcsncpy((wchar_t *)(puVar2 + 7),awStack_210,0x105);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < unaff_EBX);
    }
    return iVar3;
  }
  return 0;
}


