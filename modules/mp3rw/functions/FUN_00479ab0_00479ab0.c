/* Module: mp3rw.dll
   Function: FUN_00479ab0
   Address: 00479ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00479ab0(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,byte *param_7,undefined4 *param_8)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *local_18;
  uint local_14;
  uint local_10;
  byte local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  undefined1 local_3;
  
  piVar3 = param_1;
  if (3 < param_5) {
    FUN_00475b80((int)param_1,"Unrecognized equation type for pCAL chunk");
  }
  local_10 = FUN_00479480(param_1,param_2,(int *)&local_18);
  uVar6 = 0xffffffff;
  local_10 = local_10 + 1;
  pbVar9 = param_7;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar1 != 0);
  uVar6 = (~uVar6 - 1) + (uint)(param_6 != 0);
  piVar7 = (int *)(uVar6 + 10 + local_10);
  local_14 = uVar6;
  piVar4 = FUN_00475a80(param_1,param_6 * 4);
  iVar8 = 0;
  param_1 = piVar7;
  if (0 < param_6) {
    piVar7 = piVar4;
    do {
      uVar6 = 0xffffffff;
      pcVar10 = *(char **)(((int)param_8 - (int)piVar4) + (int)piVar7);
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      iVar5 = (uint)(iVar8 != param_6 + -1) + (~uVar6 - 1);
      param_1 = (int *)((int)param_1 + iVar5);
      *piVar7 = iVar5;
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 1;
      uVar6 = local_14;
    } while (iVar8 < param_6);
  }
  FUN_004788d0(piVar3,&DAT_004a6e54,param_1);
  FUN_00478920(piVar3,local_18,local_10);
  FUN_00478850(local_c,param_3);
  FUN_00478850(local_8,param_4);
  local_4 = (undefined1)param_5;
  local_3 = (undefined1)param_6;
  FUN_00478920(piVar3,local_c,10);
  FUN_00478920(piVar3,param_7,uVar6);
  FUN_00475ac0((int)piVar3,local_18);
  if (0 < param_6) {
    iVar8 = (int)piVar4 - (int)param_8;
    do {
      FUN_00478920(piVar3,(byte *)*param_8,*(uint *)(iVar8 + (int)param_8));
      param_8 = param_8 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  FUN_00475ac0((int)piVar3,piVar4);
  FUN_00478950(piVar3);
  return;
}


