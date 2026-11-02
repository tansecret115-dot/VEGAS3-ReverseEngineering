/* Module: sfcd.cdd
   Function: FUN_0040b010
   Address: 0040b010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040b010(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_55;
  undefined1 local_54;
  undefined4 *local_1c;
  int local_18;
  
  uVar1 = *param_2;
  iVar3 = uVar1 << 3;
  SfScsi_InitCmdOut((HSFSCSIPORT__ *)*param_1,local_64,0xea);
  local_60 = 10;
  local_55 = (undefined1)((uint)iVar3 >> 8);
  local_54 = (undefined1)iVar3;
  puVar4 = (undefined4 *)param_2[1];
  for (iVar2 = (uVar1 & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *local_1c = *puVar4;
    puVar4 = puVar4 + 1;
    local_1c = local_1c + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)local_1c = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    local_1c = (undefined4 *)((int)local_1c + 1);
  }
  local_18 = iVar3;
  FUN_0040aaa0(param_1,local_64);
  return;
}


