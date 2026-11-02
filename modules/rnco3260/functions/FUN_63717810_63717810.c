/* Module: rnco3260.dll
   Function: FUN_63717810
   Address: 63717810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63717810(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,int param_9,undefined4 param_10,undefined *param_11,
            undefined *param_12)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = param_4 * 2;
  puVar4 = (undefined4 *)(param_4 + (int)param_1);
  if (param_8 != 0) {
    (*(code *)param_11)(param_1,param_2,param_6,param_7);
    param_8 = param_8 + -1;
    if (param_8 != 0) {
      iVar2 = (int)param_1 + (iVar1 - (int)puVar4);
      do {
        param_6 = param_6 + param_9;
        (*(code *)param_12)(param_1,puVar4,(undefined1 *)(iVar2 + (int)puVar4),param_2,param_6,
                            param_7);
        param_1 = (undefined4 *)((int)param_1 + iVar1);
        puVar4 = (undefined4 *)((int)puVar4 + iVar1);
        param_8 = param_8 + -1;
      } while (param_8 != 0);
    }
    for (uVar3 = (uint)(param_5 * param_2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = param_5 * param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return;
}


