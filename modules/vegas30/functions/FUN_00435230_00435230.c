/* Module: vegas30.exe
   Function: FUN_00435230
   Address: 00435230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00435230(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (DAT_00647624 != 0) {
    if (*(int *)(param_1 + 0x1c4) == 0) {
      iVar1 = _SfGetFileNamePtrA_4(param_1 + 0xb8);
    }
    else {
      iVar1 = param_1 + 0xb8;
    }
    iVar2 = FUN_005b85d0(param_1);
    puVar3 = &DAT_00610ea0;
    if (iVar2 == 0) {
      puVar3 = &DAT_0060f98c;
    }
    SfSetWindowText(DAT_00647624,"%s - %s%s",&DAT_00647210,iVar1,puVar3);
  }
  return;
}


