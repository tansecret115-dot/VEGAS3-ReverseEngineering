/* Module: vegas30.exe
   Function: FUN_00580510
   Address: 00580510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00580510(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  UINT UVar4;
  CHAR local_104 [260];
  
  FUN_00580a00();
  if ((*param_1 & 8) != 0) {
    uVar3 = MapVirtualKeyA(0x11,0);
    if (uVar3 == 0) {
      uVar3 = 0x11;
    }
    GetKeyNameTextA((uVar3 & 0xff) << 0x10,local_104,0x104);
    FUN_00580f10(local_104);
    FUN_00580f50(0x2d);
  }
  if ((*param_1 & 4) != 0) {
    uVar3 = MapVirtualKeyA(0x10,0);
    if (uVar3 == 0) {
      uVar3 = 0x10;
    }
    GetKeyNameTextA((uVar3 & 0xff) << 0x10,local_104,0x104);
    FUN_00580f10(local_104);
    FUN_00580f50(0x2d);
  }
  if ((*param_1 & 0x10) != 0) {
    uVar3 = MapVirtualKeyA(0x12,0);
    if (uVar3 == 0) {
      uVar3 = 0x12;
    }
    GetKeyNameTextA((uVar3 & 0xff) << 0x10,local_104,0x104);
    FUN_00580f10(local_104);
    FUN_00580f50(0x2d);
  }
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    uVar3 = _mbctoupper((int)(char)param_1[2]);
    FUN_00580f50(uVar3);
    return;
  }
  uVar2 = *(ushort *)(param_1 + 2);
  UVar4 = MapVirtualKeyA((uint)uVar2,0);
  if (UVar4 == 0) {
    UVar4 = (uint)uVar2;
  }
  GetKeyNameTextA(((uint)((bVar1 & 0x40) != 0) << 8 | UVar4 & 0xff) << 0x10,local_104,0x104);
  FUN_00580f10(local_104);
  return;
}


