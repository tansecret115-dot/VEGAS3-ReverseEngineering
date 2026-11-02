/* Module: vidcap30.exe
   Function: FUN_00411920
   Address: 00411920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411920(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  uVar3 = param_1;
  if (param_2 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_2;
  }
  local_c = 0;
  if (0 < local_8) {
    do {
      iVar4 = 0;
      iVar5 = *(int *)(param_2[2] + local_c * 4);
      FUN_00411880(uVar3,iVar5);
      piVar1 = *(int **)(iVar5 + 0x84);
      if (piVar1 == (int *)0x0) {
        param_1 = 0;
      }
      else {
        param_1 = *piVar1;
      }
      if (0 < param_1) {
        do {
          iVar2 = *(int *)(piVar1[2] + iVar4 * 4);
          FUN_00411880(uVar3,"\tIN:\t%s - %#.8x",iVar2,*(undefined4 *)(iVar2 + 0x84));
          FUN_00411880(uVar3,"\t\tFrom - %#.8x",*(undefined4 *)(iVar2 + 0x80));
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1);
      }
      piVar1 = *(int **)(iVar5 + 0x88);
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          iVar2 = *(int *)(piVar1[2] + iVar4 * 4);
          FUN_00411880(uVar3,"\tOUT:\t%s - %#.8x",iVar2,*(undefined4 *)(iVar2 + 0x84));
          FUN_00411880(uVar3,"\t\tTo - %#.8x",*(undefined4 *)(iVar2 + 0x80));
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      FUN_00411880(uVar3,&DAT_00586c70);
      local_c = local_c + 1;
    } while (local_c < local_8);
  }
  return;
}


