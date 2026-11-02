/* Module: rnco3260.dll
   Function: FUN_63762204
   Address: 63762204
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x637622c0) */
/* WARNING: Removing unreachable block (ram,0x63762262) */
/* WARNING: Removing unreachable block (ram,0x6376228a) */
/* WARNING: Removing unreachable block (ram,0x637622de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_63762204(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  _DAT_6379a06c = param_2 * 0x2d0 + param_1;
  _DAT_6379a070 = (param_2 >> 1) * 0x2d0 + (param_1 >> 1);
  DAT_6379a054 = param_3;
  DAT_6379a058 = param_4;
  _DAT_6379a074 = &DAT_63761820;
  if ((param_3 != param_5) || (param_4 != param_6)) {
    _DAT_6379a074 = &DAT_63761a4b;
    if ((param_3 * 2 != param_5) || (param_4 * 2 != param_6)) {
      _DAT_6379a074 = &DAT_63761fa4;
      _DAT_6379a09c = &DAT_637620f9;
      _DAT_6379a078 = param_5;
      DAT_6379a07c = param_6;
      _DAT_6379a084 = (param_3 << 0x10) / param_5;
      _DAT_6379a090 = (param_6 << 0x10) / (param_4 & 0x7fffffff) + 1;
    }
  }
  uVar2 = 0x2700;
  uVar5 = 0x9680;
  uVar3 = 0x2d80;
  uVar4 = 0xf00;
  DAT_6379a04c = 0x100;
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
  } while (iVar6 < DAT_6379a04c);
  iVar6 = 0;
  cVar1 = '\0';
  DAT_6379a04c = 0x100;
  do {
    *(undefined4 *)((int)&DAT_6379944c + iVar6) = 0;
    *(undefined4 *)((int)&DAT_6379984c + iVar6) = 0;
    *(undefined4 *)((int)&DAT_63799c4c + iVar6) = 0;
    iVar6 = iVar6 + 4;
  } while (iVar6 < DAT_6379a04c);
  DAT_6379a04c = 0x200;
  do {
    *(char *)((int)&DAT_6379944c + iVar6) = cVar1;
    *(char *)((int)&DAT_6379984c + iVar6) = cVar1;
    *(char *)((int)&DAT_63799c4c + iVar6) = cVar1;
    iVar6 = iVar6 + 1;
    cVar1 = cVar1 + '\x01';
  } while (iVar6 < DAT_6379a04c);
  DAT_6379a04c = 0x300;
  do {
    *(undefined4 *)((int)&DAT_6379944c + iVar6) = 0xffffffff;
    *(undefined4 *)((int)&DAT_6379984c + iVar6) = 0xffffffff;
    *(undefined4 *)((int)&DAT_63799c4c + iVar6) = 0xffffffff;
    iVar6 = iVar6 + 4;
  } while (iVar6 < DAT_6379a04c);
  return;
}


