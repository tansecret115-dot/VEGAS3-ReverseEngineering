/* Module: mcplugrw.dll
   Function: FUN_0046fc00
   Address: 0046fc00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046fc00(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = (uint)*(byte *)(param_1 + 0xae);
  uVar2 = (uint)*(byte *)(param_1 + 0x47);
  param_1 = (uint)*(byte *)(param_1 + 0x3e);
  iVar3 = (local_4 - param_1) * uVar2;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar1 + 0x46)) - local_4
          ) + param_1;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x3e) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar1 + 0x3d);
  local_4 = (uint)*(byte *)(uVar1 + 0xad);
  iVar3 = (local_4 - param_1) * uVar2;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar1 + 0x45)) - local_4
          ) + param_1;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x3d) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar1 + 0x3c);
  local_4 = (uint)*(byte *)(uVar1 + 0xac);
  iVar3 = (local_4 - param_1) * uVar2;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar1 + 0x44)) - local_4
          ) + param_1;
  if (0xff < iVar3) {
    *(undefined1 *)(uVar1 + 0x3c) = 0xff;
    return;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(char *)(uVar1 + 0x3c) = (char)iVar3;
  return;
}


