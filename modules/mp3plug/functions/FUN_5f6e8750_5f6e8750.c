/* Module: mp3plug.dll
   Function: FUN_5f6e8750
   Address: 5f6e8750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6e8750(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_3;
  param_1[1] = iVar2;
  if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 3)) || ((iVar2 == 4 || (iVar2 == 6)))) {
    puVar3 = (undefined4 *)(param_2 + 8);
    puVar4 = (undefined4 *)param_1[3];
    for (iVar2 = 0x240; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else if (iVar2 == 2) {
    FUN_5f7004e0(param_2 + 8,0,0xd,(int *)(*(int *)(*(int *)(param_3[3] + 4) + 0x20) + 0xc),
                 param_1[3]);
  }
  else if (iVar2 == 5) {
    puVar3 = (undefined4 *)(param_2 + 8);
    puVar4 = (undefined4 *)param_1[3];
    for (uVar1 = *(uint *)(*(int *)(param_2 + 4) + 4) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_5f7004e0(param_2 + 8,3,0xd,(int *)(*(int *)(*(int *)(param_3[3] + 4) + 0x20) + 0xc),
                 param_1[3]);
  }
  uVar1 = FUN_5f700750((float *)param_1[3],(float *)param_1[4],param_1[5],param_1[6]);
  param_1[2] = uVar1;
  iVar2 = param_1[1];
  if (((iVar2 == 0) || (iVar2 == 1)) || ((iVar2 == 3 || ((iVar2 == 4 || (iVar2 == 6)))))) {
    iVar2 = FUN_5f700a50(param_1[4],param_1[6],*(int *)(*(int *)(*(int *)param_3[3] + 0x20) + 4) + 1
                         ,*(int *)(*(int *)param_3[3] + 0x20) + 0xc,param_3[4],param_3[8],param_1[2]
                         ,(int)(param_1 + 7));
    param_1[0x147] = iVar2;
  }
  else if (iVar2 == 2) {
    iVar2 = FUN_5f700bd0(param_1[4],param_1[6],
                         *(int *)(*(int *)(*(int *)(param_3[3] + 4) + 0x20) + 4) + 1,
                         *(int *)(*(int *)(param_3[3] + 4) + 0x20) + 0xc,(int)(param_3 + 5),
                         (int)(param_3 + 9),param_1[2],(int)(param_1 + 7));
    param_1[0x147] = iVar2;
  }
  else if (iVar2 == 5) {
    iVar2 = FUN_5f700da0(param_1[4],param_1[6],*param_1,*(int *)(*(int *)param_3[3] + 0x20) + 0xc,
                         *(int *)(*(int *)(*(int *)(param_3[3] + 4) + 0x20) + 4) + 1,
                         *(int *)(*(int *)(param_3[3] + 4) + 0x20) + 0xc,param_3[4],param_3[8],
                         (int)(param_3 + 5),(int)(param_3 + 9),param_1[2],(int)(param_1 + 7));
    param_1[0x147] = iVar2;
  }
  FUN_5f6eb9d0(param_1[0x147],*param_1,param_1[1],(int)(param_1 + 7),
               *(undefined4 **)(param_2 + 0x90c),param_1 + 0x14e);
  *(undefined4 *)param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x148] = 0;
  return 1;
}


