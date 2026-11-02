/* Module: sfs4rw.dll
   Function: FUN_00425f80
   Address: 00425f80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00425f80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(short *)(param_2 + 4) == 0) {
    uVar3 = *(uint *)(param_2 + 0x14);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_5 = *param_4;
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)param_5 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      param_5 = (undefined4 *)((int)param_5 + 1);
    }
    return 0;
  }
  if (*(short *)(param_2 + 4) == 8) {
    piVar1 = (int *)(param_2 + 0x10);
    param_2 = *(int *)(param_2 + 0x14);
    uVar3 = FUN_00425ee0(param_5,&param_2,(int)param_4,*piVar1 + 4);
    return -(uint)(uVar3 != 0) & 0x8004e00b;
  }
  return 0x8004e00b;
}


