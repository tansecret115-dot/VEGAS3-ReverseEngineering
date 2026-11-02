/* Module: sfcd.cdd
   Function: FUN_00419710
   Address: 00419710
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419710(HSFCD__ *param_1,_scsicommand param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort auStack_6a [3];
  _scsicommand local_64 [72];
  int local_1c;
  
  iVar1 = FUN_00419660(param_1,local_64,param_2,(_scsicommand)0xff);
  if (iVar1 == 0) {
    auStack_6a[0] = (ushort)((uint)*(undefined4 *)(local_1c + 4) >> 0x10);
    FUN_0041f970((undefined1 *)auStack_6a,1);
    if (7 < auStack_6a[0]) {
      auStack_6a[0] = 8;
    }
    puVar3 = (undefined4 *)(auStack_6a[0] + 8 + local_1c);
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
    return 0;
  }
  return iVar1;
}


