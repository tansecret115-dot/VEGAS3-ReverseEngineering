/* Module: rnco3260.dll
   Function: FUN_63761747
   Address: 63761747
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x637616e2) */
/* WARNING: Removing unreachable block (ram,0x63761709) */
/* WARNING: Removing unreachable block (ram,0x63761722) */
/* WARNING: Removing unreachable block (ram,0x6376173f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_63761747(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  _DAT_63797004 = 0x7bdf;
  _DAT_63797020 = param_2 * 0x2d0 + param_1;
  _DAT_63797024 = (param_2 >> 1) * 0x2d0 + (param_1 >> 1);
  DAT_63797008 = param_3;
  DAT_6379700c = param_4;
  _DAT_63797028 = &DAT_6376106c;
  if ((param_3 != param_5) || (param_4 != param_6)) {
    _DAT_63797028 = &DAT_637611c7;
    if ((param_3 * 2 != param_5) || (param_4 * 2 != param_6)) {
      _DAT_63797028 = &DAT_63761381;
      _DAT_6379702c = param_5;
      DAT_63797030 = param_6;
      _DAT_63797038 = (param_3 << 0x10) / param_5;
      _DAT_63797044 = (param_6 << 0x10) / (param_4 & 0x7fffffff) + 1;
    }
  }
  uVar2 = 0x2700;
  uVar5 = 0x9680;
  uVar3 = 0x2d80;
  uVar4 = 0xf00;
  DAT_63797000 = 0x100;
  iVar6 = 0;
  do {
    (&DAT_6379904c)[iVar6] = (char)(uVar2 >> 8);
    (&DAT_6379914c)[iVar6] = (char)(uVar5 >> 8);
    (&DAT_6379924c)[iVar6] = (char)(uVar3 >> 8);
    (&DAT_6379934c)[iVar6] = (char)(uVar4 >> 8);
    uVar2 = (uint)(ushort)((short)uVar2 + 0xb3);
    uVar5 = (uint)(ushort)((short)uVar5 - 0x2c);
    uVar3 = (uint)(ushort)((short)uVar3 - 0x5b);
    uVar4 = (uint)(ushort)((short)uVar4 + 0xe3);
    iVar6 = iVar6 + 1;
  } while (iVar6 < DAT_63797000);
  iVar6 = 0;
  bVar1 = 0;
  DAT_63797000 = 0x100;
  do {
    *(undefined4 *)((int)&DAT_6379944c + iVar6) = 0;
    *(undefined4 *)((int)&DAT_6379984c + iVar6) = 0;
    *(undefined4 *)((int)&DAT_63799c4c + iVar6) = 0;
    iVar6 = iVar6 + 4;
  } while (iVar6 < DAT_63797000);
  DAT_63797000 = 0x200;
  do {
    *(byte *)((int)&DAT_63799c4c + iVar6) = bVar1 & 0xf8;
    *(byte *)((int)&DAT_6379944c + iVar6) = (bVar1 & 0xf8) >> 1;
    *(byte *)((int)&DAT_6379984c + iVar6) = bVar1 >> 3;
    iVar6 = iVar6 + 1;
    bVar1 = bVar1 + 1;
  } while (iVar6 < DAT_63797000);
  DAT_63797000 = 0x300;
  do {
    *(undefined4 *)((int)&DAT_6379944c + iVar6) = 0xecececec;
    *(undefined4 *)((int)&DAT_6379984c + iVar6) = 0x1f1f1f1f;
    *(undefined4 *)((int)&DAT_63799c4c + iVar6) = 0xf8f8f8f8;
    iVar6 = iVar6 + 4;
  } while (iVar6 < DAT_63797000);
  return;
}


