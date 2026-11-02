/* Module: 14_43260.dll
   Function: FUN_100054a0
   Address: 100054a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_100054a0(void *this,undefined4 *param_1,byte *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  ushort *_Memory;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  short *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x64;
  _Memory = malloc(*(int *)((int)this + 0x99e) << 2);
  puVar6 = _Memory;
  puVar5 = param_1;
  while (puVar5 = puVar5 + 1, puVar5 < param_1 + 0xb) {
    *(undefined4 *)puVar6 = *puVar5;
    puVar6 = puVar6 + 2;
  }
  *(undefined4 *)puVar6 = *param_1;
  iVar3 = *(int *)((int)this + 0x99e);
  for (puVar6 = puVar6 + 2; puVar6 < _Memory + iVar3 * 2; puVar6 = puVar6 + 8) {
    *(undefined4 *)puVar6 = *puVar5;
    *(undefined4 *)(puVar6 + 2) = puVar5[3];
    *(undefined4 *)(puVar6 + 4) = puVar5[1];
    *(undefined4 *)(puVar6 + 6) = puVar5[2];
    puVar5 = puVar5 + 4;
  }
  uVar10 = 0;
  sVar9 = 0;
  iVar3 = *(int *)((int)this + 0x99e);
  local_c = &DAT_10015cc4;
  puVar6 = _Memory;
  while (puVar6 < _Memory + iVar3 * 2) {
    while (sVar9 < 4) {
      puVar8 = puVar6 + 2;
      sVar1 = *local_c;
      local_c = local_c + 2;
      iVar11 = uVar10 << ((byte)sVar1 & 0x1f);
      sVar9 = sVar9 + sVar1;
      uVar10 = CONCAT22((short)((uint)iVar11 >> 0x10),(ushort)iVar11 | *puVar6);
      puVar6 = puVar8;
      if ((puVar8 == _Memory + iVar3 * 2) &&
         (uVar7 = (int)sVar9 >> 0x1f, (((int)sVar9 ^ uVar7) - uVar7 & 3 ^ uVar7) != uVar7)) {
        do {
          uVar10 = uVar10 << 1;
          sVar9 = sVar9 + 1;
          uVar7 = (int)sVar9 >> 0x1f;
        } while ((((int)sVar9 ^ uVar7) - uVar7 & 3 ^ uVar7) != uVar7);
      }
    }
    iVar11 = (int)sVar9;
    do {
      iVar11 = iVar11 + -4;
      sVar9 = sVar9 + -4;
      uVar7 = 0xf << ((byte)iVar11 & 0x1f) & uVar10;
      uVar10 = uVar10 - uVar7;
      param_1._0_2_ = (ushort)uVar7;
      uVar2 = (ushort)param_1 >> ((byte)sVar9 & 0x1f);
      param_1 = (undefined4 *)(uint)uVar2;
      if ((short)local_8 == 100) {
        local_8 = param_1;
      }
      else {
        cVar4 = (char)local_8;
        param_1._0_1_ = (byte)uVar2;
        local_8 = (undefined4 *)0x64;
        *param_2 = cVar4 << 4 | (byte)param_1 & 0xf;
        param_2 = param_2 + 1;
      }
    } while (3 < sVar9);
  }
  free(_Memory);
  return;
}


