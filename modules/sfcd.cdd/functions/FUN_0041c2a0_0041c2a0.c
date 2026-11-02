/* Module: sfcd.cdd
   Function: FUN_0041c2a0
   Address: 0041c2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


HSFCD__ * FUN_0041c2a0(HSFCD__ *param_1,int param_2)

{
  int iVar1;
  HSFCD__ *pHVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_18 [3];
  undefined1 local_a [6];
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(param_1 + 0x160);
  pHVar2 = param_1;
  if (*(int *)(iVar1 + 0x274) == 0) {
    *(undefined4 *)(iVar1 + 0x274) = 0;
    FUN_004194f0((undefined4 *)param_1);
    pHVar2 = (HSFCD__ *)FUN_00419810(param_1,0x2a,local_18,0x16);
    if (pHVar2 == (HSFCD__ *)0x0) {
      FUN_0041f970(local_a,1);
      FUN_0041f970(local_4,1);
      puVar4 = local_18;
      puVar5 = (undefined4 *)(iVar1 + 0x278);
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
      *(undefined4 *)(iVar1 + 0x274) = 1;
    }
  }
  if ((param_2 != 0) && (*(int *)(iVar1 + 0x238) == 0)) {
    *(undefined4 *)(iVar1 + 0x238) = 0;
    pHVar2 = (HSFCD__ *)FUN_00419810(param_1,5,(undefined4 *)(iVar1 + 0x23c),0x38);
    if (pHVar2 == (HSFCD__ *)0x0) {
      *(undefined4 *)(iVar1 + 0x238) = 1;
    }
  }
  return pHVar2;
}


