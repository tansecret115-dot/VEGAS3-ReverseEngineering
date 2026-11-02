/* Module: vegas30.exe
   Function: FUN_00607af0
   Address: 00607af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00607af0(uint param_1,uchar *param_2)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  uchar local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  uVar1 = FUN_006078f0(param_1 >> 0x1e);
  uVar3 = 2;
  *param_2 = uVar1;
  puVar4 = param_2 + 1;
  do {
    uVar1 = FUN_006078f0((param_1 << ((byte)uVar3 & 0x1f)) >> 0x1b);
    *puVar4 = uVar1;
    uVar3 = uVar3 + 5;
    puVar4 = puVar4 + 1;
  } while (uVar3 < 0x20);
  *puVar4 = '\0';
  local_8 = FUN_006078f0(param_1 >> 0x1e);
  local_7 = FUN_006078f0(param_1 >> 0x19 & 0xffffff1f);
  local_6 = FUN_006078f0(param_1 >> 0x14 & 0xffffff1f);
  local_5 = FUN_006078f0(param_1 >> 0xf & 0xffffff1f);
  local_4 = FUN_006078f0(param_1 >> 10 & 0xffffff1f);
  local_3 = FUN_006078f0(param_1 >> 5 & 0xffffff1f);
  local_2 = FUN_006078f0(param_1 & 0xffffff1f);
  local_1 = 0;
  iVar2 = lstrlenA((LPCSTR)param_2);
  if (iVar2 != 7) {
    _mbscpy(param_2,&local_8);
  }
  return;
}


