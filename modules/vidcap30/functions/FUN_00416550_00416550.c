/* Module: vidcap30.exe
   Function: FUN_00416550
   Address: 00416550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416550(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 0x20) == 0) {
    puVar1 = &DAT_00586c70;
  }
  else {
    puVar1 = (undefined1 *)_SfGetFileNamePtrA_4(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar2 = _SfGetString_8(DAT_005ba2a0,*(int *)(param_1 + 0x20));
    SfPrintF(param_2,uVar2,puVar1);
    return;
  }
  SfPrintF(param_2,&DAT_00586c70,puVar1);
  return;
}


