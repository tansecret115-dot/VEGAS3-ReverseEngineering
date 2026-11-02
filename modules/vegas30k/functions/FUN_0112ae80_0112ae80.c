/* Module: vegas30k.dll
   Function: FUN_0112ae80
   Address: 0112ae80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_0112ae80(int param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint local_4;
  
  iVar2 = param_3;
  puVar7 = (undefined1 *)0x0;
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
    iVar4 = 0;
  }
  else {
    iVar4 = piVar1[1] * iVar4 + piVar1[2];
  }
  piVar1 = *(int **)(*(int *)(iVar4 + 0x14) + 0x350);
  if (*piVar1 == 0xb) {
    iVar3 = piVar1[1];
  }
  else {
    if (*piVar1 != 0xc) {
      puVar7 = &DAT_80070057;
      goto LAB_0112afd0;
    }
    iVar3 = piVar1[1];
  }
  iVar3 = iVar3 * 0x914;
  if (iVar3 == 0) goto LAB_0112afd0;
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar7 = (undefined1 *)
             SfMpegStreamOpen((tagMPEG_BIT_STREAM *)(param_1 + 0x4c),
                              (char *)(*(int *)(iVar4 + 0x14) + 0x224));
    if ((int)puVar7 < 0) goto LAB_0112afd0;
    puVar7 = (undefined1 *)SfMpegStreamSeekNextStartCode((tagMPEG_BIT_STREAM *)(param_1 + 0x4c));
    if ((int)puVar7 < 0) goto LAB_0112afd0;
  }
  iVar4 = param_2 + 8;
  iVar6 = param_2;
  while( true ) {
    param_2 = iVar3 - *(int *)(param_1 + 0x40);
    if (0x913 < param_2) {
      param_2 = 0x914;
    }
    puVar7 = (undefined1 *)FUN_01012be0(param_1,iVar6,iVar4,&local_4);
    if (((int)puVar7 < 0) || (local_4 != param_2)) break;
    iVar5 = *(int *)(param_1 + 0x40) + local_4;
    iVar6 = iVar6 + 0x91c;
    iVar4 = iVar4 + 0x91c;
    param_3 = param_3 + -0x91c;
    *(int *)(param_1 + 0x40) = iVar5;
    if ((param_3 == 0) || (iVar5 == iVar3)) break;
  }
  if (*(int *)(param_1 + 0x40) == iVar3) {
    SfMpegStreamClose((tagMPEG_BIT_STREAM *)(param_1 + 0x4c));
  }
  else {
    puVar7 = (undefined1 *)0x1;
  }
LAB_0112afd0:
  *param_4 = iVar2 - param_3;
  return puVar7;
}


