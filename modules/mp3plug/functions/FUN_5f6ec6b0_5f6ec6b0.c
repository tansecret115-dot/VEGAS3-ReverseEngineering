/* Module: mp3plug.dll
   Function: FUN_5f6ec6b0
   Address: 5f6ec6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6ec6b0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint unaff_ESI;
  int iVar5;
  int *local_1c;
  int local_18;
  
  *param_1 = *param_2;
  iVar5 = param_1[1];
  if (iVar5 == 0) {
    unaff_ESI = 8;
  }
  else if ((iVar5 == 1) || (iVar5 == 2)) {
    unaff_ESI = 6;
  }
  iVar5 = *param_1;
  piVar2 = *(int **)(*(int *)param_1[3] + 0x20);
  iVar3 = piVar2[unaff_ESI + 0x19];
  if ((((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 3)) || ((iVar5 == 4 || (iVar5 == 6)))) {
    FUN_5f702b30((int)(param_2 + 2),*(int *)(*(int *)param_1[3] + 0x10),*piVar2,1);
    iVar5 = (*(int **)(*(int *)param_1[3] + 0x20))[2];
    if (iVar5 < **(int **)(*(int *)param_1[3] + 0x20)) {
      do {
        param_2[iVar5 + 2] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < **(int **)(*(int *)param_1[3] + 0x20));
    }
    FUN_5f704ee0((int)(param_2 + 2),1,*(int *)**(undefined4 **)(param_3 + 0xc),
                 *(int *)(*(int *)param_1[3] + 0x20) + 0xc,param_1[4]);
    FUN_5f704fa0(*(uint *)**(undefined4 **)(param_3 + 0xc),(float *)param_1[4],
                 *(float **)(param_3 + 0x288),*(int *)(param_3 + 0x268),1,(float *)param_1[8]);
  }
  else if (iVar5 == 2) {
    iVar5 = 0;
    local_18 = 8;
    do {
      FUN_5f702b30(local_18 + (int)param_2,*(int *)(*(int *)(param_1[3] + 4) + 0x10),
                   *(int *)(*(int *)(*(int *)(param_1[3] + 4) + 0x20) + 8),3);
      piVar2 = *(int **)(*(int *)(param_1[3] + 4) + 0x20);
      iVar3 = piVar2[2];
      if (iVar3 < *piVar2) {
        iVar4 = iVar3 * 0xc;
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)((int)param_2 + iVar4 + iVar5 * 4 + 8) = 0;
          iVar4 = iVar4 + 0xc;
        } while (iVar3 < **(int **)(*(int *)(param_1[3] + 4) + 0x20));
      }
      FUN_5f704ee0(local_18 + (int)param_2,3,**(int **)(*(int *)(param_3 + 0xc) + 4),
                   *(int *)(*(int *)(param_1[3] + 4) + 0x20) + 0xc,param_1[iVar5 + 5]);
      FUN_5f704fa0(**(uint **)(*(int *)(param_3 + 0xc) + 4),(float *)param_1[iVar5 + 5],
                   *(float **)(param_3 + 0x28c + iVar5 * 4),*(int *)(param_3 + 0x26c + iVar5 * 4),0,
                   (float *)param_1[iVar5 + 9]);
      iVar5 = iVar5 + 1;
      local_18 = local_18 + 4;
    } while (iVar5 < 3);
  }
  else if (iVar5 == 5) {
    FUN_5f704ee0((int)(param_2 + 2),unaff_ESI,*(int *)**(undefined4 **)(param_3 + 0xc),
                 *(int *)(*(int *)param_1[3] + 0x20) + 0xc,param_1[4]);
    FUN_5f704fa0(unaff_ESI,(float *)param_1[4],*(float **)(param_3 + 0x288),
                 *(int *)(param_3 + 0x268),1,(float *)param_1[8]);
    local_1c = param_2 + 2;
    iVar5 = 0;
    local_18 = 0;
    do {
      FUN_5f702b30((int)local_1c,*(int *)(*(int *)(param_1[3] + 4) + 0x10),
                   *(int *)(*(int *)(*(int *)(param_1[3] + 4) + 0x20) + 8),3);
      piVar2 = *(int **)(*(int *)(param_1[3] + 4) + 0x20);
      iVar4 = piVar2[2];
      if (iVar4 < *piVar2) {
        iVar1 = iVar4 * 0xc;
        do {
          iVar4 = iVar4 + 1;
          *(undefined4 *)((int)param_2 + iVar1 + iVar5 * 4 + 8) = 0;
          iVar1 = iVar1 + 0xc;
          piVar2 = *(int **)(*(int *)(param_1[3] + 4) + 0x20);
        } while (iVar4 < *piVar2);
      }
      FUN_5f704ee0(local_18 + 8 + iVar3 * 4 + (int)param_2,3,
                   **(int **)(*(int *)(param_3 + 0xc) + 4) + -3,(int)(piVar2 + 6),
                   param_1[iVar5 + 5] + 0xc);
      FUN_5f704fa0(**(int **)(*(int *)(param_3 + 0xc) + 4) - 3,(float *)(param_1[iVar5 + 5] + 0xc),
                   (float *)(*(int *)(param_3 + 0x28c + iVar5 * 4) + 0xc),
                   *(int *)(param_3 + 0x26c + iVar5 * 4) + 0xc,0,(float *)(param_1[iVar5 + 9] + 0xc)
                  );
      local_18 = local_18 + 4;
      local_1c = local_1c + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
  }
  return 0;
}


