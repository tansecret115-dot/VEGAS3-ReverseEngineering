/* Module: vidcap30.exe
   Function: FUN_0052e290
   Address: 0052e290
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0052e290(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(short *)(param_2 + 4) == 0) {
    uVar4 = *(uint *)(param_2 + 0x14);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_5 = *param_4;
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)param_5 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      param_5 = (undefined4 *)((int)param_5 + 1);
    }
    return 0;
  }
  if (*(short *)(param_2 + 4) == 8) {
    piVar1 = (int *)(param_2 + 0x10);
    param_2 = *(undefined4 *)(param_2 + 0x14);
    iVar2 = FUN_0052e1f0(param_5,&param_2,param_4,*piVar1 + 4);
    return -(uint)(iVar2 != 0) & 0x8004e00b;
  }
  return 0x8004e00b;
}


