/* Module: qt4plug.dll
   Function: FUN_5f5183a0
   Address: 5f5183a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f5183a0(uint param_1,undefined4 *param_2)

{
  undefined1 uVar2;
  int iVar1;
  
  iVar1 = FUN_5f5782f0();
  *param_2 = 0x80;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_5f5782f0();
    if (iVar1 != 0) {
      FUN_5f5781b0();
      param_2[1] = (param_1 & 0xff0000 | param_1 >> 0x10) >> 8 |
                   (param_1 & 0xff00 | param_1 << 0x10) << 8;
    }
    iVar1 = FUN_5f5782f0();
    if (iVar1 != 0) {
      FUN_5f5781b0();
      param_2[3] = (param_1 & 0xff0000 | param_1 >> 0x10) >> 8 |
                   (param_1 & 0xff00 | param_1 << 0x10) << 8;
    }
    iVar1 = FUN_5f5782f0();
    uVar2 = (undefined1)(param_1 >> 8);
    if (iVar1 != 0) {
      FUN_5f5781b0();
      *(ushort *)((int)param_2 + 10) = CONCAT11((char)param_1,uVar2);
    }
    iVar1 = FUN_5f5782f0();
    if (iVar1 != 0) {
      FUN_5f5781b0();
      *(ushort *)(param_2 + 2) = CONCAT11((char)param_1,uVar2);
    }
  }
  return;
}


