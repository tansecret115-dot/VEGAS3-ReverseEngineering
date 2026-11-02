/* Module: vegas30.exe
   Function: FUN_004ca990
   Address: 004ca990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004caa79) */
/* WARNING: Removing unreachable block (ram,0x004caa26) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca990(int param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  __int64 _Var6;
  
  if (*(int *)(param_1 + 0xbc8) != 0) {
    iVar2 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = _DAT_00000000;
      if (*(int *)(param_1 + 0xbc8) != 0) {
        piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        iVar2 = *piVar3;
      }
    }
    lVar5 = 0;
    *(int *)(param_1 + 0xbc4) = iVar2;
    if (iVar2 < 1) {
      *(undefined4 *)(param_1 + 0xcc8) = DAT_00647e38;
      *(undefined4 *)(param_1 + 0xccc) = DAT_00647e3c;
    }
    else if (*(int *)(param_1 + 0xbc8) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x600);
    }
    else {
      lVar5 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
    }
    lVar1 = lVar5;
    if (lVar5 < *(longlong *)(param_1 + 0xcc8)) {
      lVar1 = *(longlong *)(param_1 + 0xcc8);
    }
    *(longlong *)(param_1 + 0xcc8) = lVar1;
    FUN_00457e90(param_1,*(undefined4 *)(param_1 + 0xcc8),(int)((ulonglong)lVar1 >> 0x20));
    if (((((*(byte *)(param_1 + 0x18) & 2) != 0) && (*(int *)(param_1 + 0xab4) != 0)) &&
        (*(int *)(param_1 + 0xb78) == 0)) &&
       ((*(int *)(param_1 + 0xb7c) == 0 && (_Var6 = Transport_GetLength(), _Var6 < lVar5)))) {
      (**(code **)(*(int *)(param_1 + 0xab4) + 0x20))(param_1,1);
    }
    uVar4 = FUN_004caaa0(param_1);
    FUN_00454330(param_1,uVar4);
  }
  return;
}


