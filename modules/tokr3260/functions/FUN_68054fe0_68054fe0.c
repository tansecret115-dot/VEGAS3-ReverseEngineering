/* Module: tokr3260.dll
   Function: FUN_68054fe0
   Address: 68054fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_68054fe0(int param_1,int *param_2,int param_3,int param_4,int *param_5,int param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  
  piVar4 = param_2;
  local_8 = 0;
  if (0 < param_6) {
    iVar5 = param_4 - (int)param_2;
    param_2 = (int *)param_6;
    piVar1 = *(int **)(*(int *)(param_7 + 0xf224) + 0x38);
    do {
      iVar2 = piVar1[1];
      iVar3 = (int)(*piVar1 + (*piVar1 >> 0x1f & 3U)) >> 2;
      iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
      if (iVar3 < iVar2) {
        iVar2 = iVar2 - iVar3;
        do {
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (*piVar4 == 0) {
        *(undefined4 *)(iVar5 + (int)piVar4) = 0;
      }
      else {
        iVar2 = ftol();
        *(int *)(iVar5 + (int)piVar4) = iVar2 + 6;
      }
      local_8 = local_8 + *(int *)(iVar5 + (int)piVar4);
      piVar4 = piVar4 + 1;
      param_2 = (int *)((int)param_2 + -1);
      piVar1 = piVar1 + 1;
    } while (param_2 != (int *)0x0);
  }
  *param_5 = local_8;
  return;
}


