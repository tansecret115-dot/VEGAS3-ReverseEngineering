/* Module: sfppack1.dll
   Function: FUN_5ce0bc40
   Address: 5ce0bc40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ce0bc40(uint param_1,uchar *param_2)

{
  byte bVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  uchar local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  bVar1 = (byte)(param_1 >> 0x18);
  uVar2 = FUN_5ce0ba40(bVar1 >> 6);
  uVar4 = 2;
  *param_2 = uVar2;
  puVar5 = param_2 + 1;
  do {
    uVar2 = FUN_5ce0ba40((byte)((param_1 << ((byte)uVar4 & 0x1f)) >> 0x1b));
    *puVar5 = uVar2;
    uVar4 = uVar4 + 5;
    puVar5 = puVar5 + 1;
  } while (uVar4 < 0x20);
  *puVar5 = '\0';
  local_8 = FUN_5ce0ba40(bVar1 >> 6);
  local_7 = FUN_5ce0ba40(bVar1 >> 1 & 0x1f);
  local_6 = FUN_5ce0ba40((byte)(param_1 >> 0x14) & 0x1f);
  local_5 = FUN_5ce0ba40((byte)(param_1 >> 0xf) & 0x1f);
  local_4 = FUN_5ce0ba40((byte)(param_1 >> 10) & 0x1f);
  local_3 = FUN_5ce0ba40((byte)(param_1 >> 5) & 0x1f);
  local_2 = FUN_5ce0ba40((byte)param_1 & 0x1f);
  local_1 = 0;
  iVar3 = lstrlenA((LPCSTR)param_2);
  if (iVar3 != 7) {
    _mbscpy(param_2,&local_8);
  }
  return;
}


