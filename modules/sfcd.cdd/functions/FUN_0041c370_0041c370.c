/* Module: sfcd.cdd
   Function: FUN_0041c370
   Address: 0041c370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041c370(HSFCD__ *param_1)

{
  int iVar1;
  int iVar2;
  _scsicommand local_64 [4];
  undefined4 local_60;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x160);
  if (*(int *)(iVar1 + 0x274) != 0) {
    *(undefined4 *)(iVar1 + 0x274) = 0;
    FUN_004194f0((undefined4 *)param_1);
    SfScsi_InitCmdOut(*(HSFSCSIPORT__ **)param_1,local_64,0xbb);
    local_60 = 0xc;
    local_5a = *(undefined1 *)(iVar1 + 0x287);
    local_59 = *(undefined1 *)(iVar1 + 0x286);
    local_58 = *(undefined1 *)(iVar1 + 0x28d);
    local_57 = *(undefined1 *)(iVar1 + 0x28c);
    iVar2 = FUN_004194d0((undefined4 *)param_1,local_64);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  if (*(int *)(iVar1 + 0x238) != 0) {
    *(undefined4 *)(iVar1 + 0x238) = 0;
    iVar2 = FUN_0041c260(param_1,(undefined4 *)(iVar1 + 0x23c));
  }
  return iVar2;
}


