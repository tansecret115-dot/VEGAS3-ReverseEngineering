/* Module: sfcd.cdd
   Function: FUN_004197b0
   Address: 004197b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004197b0(HSFCD__ *param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  _scsicommand local_64 [72];
  int local_1c;
  
  iVar1 = FUN_00419660(param_1,local_64,SUB41(param_2,0),(_scsicommand)0xff);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)(local_1c + 4);
    if (*(byte *)(local_1c + 4) != param_2) {
      puVar3 = (undefined4 *)(local_1c + 8);
    }
    for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar2 = param_4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
  }
  return;
}


