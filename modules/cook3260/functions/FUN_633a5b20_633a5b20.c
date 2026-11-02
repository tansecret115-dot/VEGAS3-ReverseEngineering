/* Module: cook3260.dll
   Function: FUN_633a5b20
   Address: 633a5b20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_633a5b20(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int aiStack_8c [34];
  
  piVar4 = aiStack_8c + 0x11;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      iVar2 = (int)*(char *)(iVar3 + param_1);
      if (0 < iVar2 + -100) {
        aiStack_8c[iVar2 + -0x53] = aiStack_8c[iVar2 + -0x53] + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 0x48;
    *(int *)((int)aiStack_8c + iVar3 + 4) = iVar2;
    iVar3 = iVar3 + 4;
    iVar2 = (*(int *)((int)aiStack_8c + iVar1) + iVar2) * 2;
  } while (iVar3 < 0x3d);
  if (aiStack_8c[0x10] + aiStack_8c[0x21] != 0x10000) {
    return 0xffffffff;
  }
  iVar3 = 0;
  if (0 < param_4) {
    piVar4 = param_3;
    do {
      iVar2 = *(char *)(iVar3 + param_1) + -100;
      if (iVar2 < 1) {
        *(undefined4 *)((param_2 - (int)param_3) + (int)piVar4) =
             *(undefined4 *)(param_2 + (iVar2 + iVar3) * 4);
        iVar2 = param_3[iVar2 + iVar3];
      }
      else {
        iVar1 = aiStack_8c[iVar2];
        *(int *)((param_2 - (int)param_3) + (int)piVar4) = iVar1;
        aiStack_8c[iVar2] = iVar1 + 1;
      }
      *piVar4 = iVar2;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_4);
  }
  return 0;
}


