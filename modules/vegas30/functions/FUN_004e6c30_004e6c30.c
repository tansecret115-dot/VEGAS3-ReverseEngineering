/* Module: vegas30.exe
   Function: FUN_004e6c30
   Address: 004e6c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e6c30(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x20) == 0) {
    puVar1 = &DAT_0060f98c;
  }
  else {
    puVar1 = (undefined1 *)_SfGetFileNamePtrA_4(param_1 + 0x30);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar2 = _SfGetString_8(DAT_00647204,*(int *)(param_1 + 0x2c));
    SfPrintF(param_2,uVar2,puVar1);
    return;
  }
  SfPrintF(param_2,&DAT_0060f98c,puVar1);
  return;
}


