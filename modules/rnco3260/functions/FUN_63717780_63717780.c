/* Module: rnco3260.dll
   Function: FUN_63717780
   Address: 63717780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63717780(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,int param_9,undefined4 param_10,undefined *param_11)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = param_6;
  param_6 = param_3;
  puVar2 = param_1;
  param_1 = (undefined4 *)(param_3 >> 1);
  if (param_3 == 0) {
    return;
  }
  do {
    (*(code *)param_11)(puVar2,param_2,iVar4,param_7);
    iVar4 = iVar4 + param_9;
    while( true ) {
      puVar2 = (undefined4 *)((int)puVar2 + param_4);
      param_6 = param_6 + -1;
      if (param_6 == 0) {
        return;
      }
      param_1 = (undefined4 *)((int)param_1 - param_8);
      if ((int)param_1 < 0) break;
      puVar3 = (undefined4 *)((int)puVar2 - param_4);
      puVar5 = puVar2;
      for (uVar1 = (uint)(param_5 * param_2) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar1 = param_5 * param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    param_1 = (undefined4 *)((int)param_1 + param_3);
  } while( true );
}


