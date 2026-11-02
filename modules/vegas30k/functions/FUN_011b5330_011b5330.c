/* Module: vegas30k.dll
   Function: FUN_011b5330
   Address: 011b5330
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_011b5330(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (iVar3 = param_2, param_2 != 0)) {
    while ((piVar1 = *(int **)(param_1 + 0x10), piVar1 != (int *)0x0 &&
           (iVar2 = *piVar1, iVar2 != 0))) {
      iVar4 = 0;
      if (0 < iVar2) {
        while (iVar3 = piVar1[1] * iVar4 + piVar1[2], *(int *)(iVar3 + 8) != 0) {
          iVar4 = iVar4 + 1;
          if (iVar2 <= iVar4) goto LAB_011b53a3;
        }
        (**(code **)(**(int **)(iVar3 + 0x18) + 8))(*(int **)(iVar3 + 0x18));
        *(undefined4 *)(iVar3 + 0x18) = 0;
        _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x10),iVar4,1,0);
        param_2 = param_2 + -1;
      }
      if ((iVar3 == 0) || (param_2 == 0)) break;
    }
  }
LAB_011b53a3:
  return param_2 != 0;
}


