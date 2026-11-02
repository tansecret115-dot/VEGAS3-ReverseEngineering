/* Module: rmbe3260.dll
   Function: FUN_6604e510
   Address: 6604e510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6604e510(undefined4 *param_1,byte *param_2,ushort param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  short local_44 [32];
  
  puVar3 = param_1;
  if (param_3 != 0) {
    puVar2 = (undefined4 *)(uint)param_3;
    uVar8 = 0;
    for (uVar5 = (uint)(param_3 >> 1); uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    puVar9 = param_1;
    for (uVar5 = (uint)((param_3 & 1) != 0); param_1 = puVar2, _param_3 = (byte *)local_44,
        uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined2 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 2);
    }
    do {
      uVar5 = (int)uVar8 >> 0x1f;
      *(ushort *)_param_3 = (((uVar8 ^ uVar5) - uVar5 & 1 ^ uVar5) != uVar5) + 9;
      uVar8 = uVar8 + 1;
      param_1 = (undefined4 *)((int)param_1 + -1);
      _param_3 = (byte *)((int)_param_3 + 2);
    } while (param_1 != (undefined4 *)0x0);
  }
  iVar7 = 0;
  param_1 = (undefined4 *)0x0;
  _param_3 = param_2;
  param_2 = (byte *)0x26;
  do {
    uVar5 = (uint)param_1 & 0xffff;
    uVar4 = local_44[uVar5] - (short)iVar7;
    iVar6 = 8 - (uint)uVar4;
    if (iVar6 < 1) {
      uVar8 = (uint)*_param_3;
    }
    else {
      uVar8 = 0xff >> ((byte)iVar6 & 0x1f) &
              CONCAT22((short)((uint)_param_3 >> 0x10),(ushort)*_param_3);
    }
    psVar1 = (short *)((int)puVar3 + uVar5 * 2);
    *psVar1 = *psVar1 + (short)(uVar8 << ((byte)iVar7 & 0x1f));
    if ((uVar4 < 9) &&
       (psVar1 = (short *)((int)puVar3 + uVar5 * 2 + 2),
       *psVar1 = *psVar1 + (ushort)(*_param_3 >> ((byte)uVar4 & 0x1f)), uVar4 < 9)) {
      param_1 = (undefined4 *)((int)param_1 + 1);
      iVar7 = -(uint)uVar4;
    }
    iVar7 = iVar7 + 8;
    _param_3 = _param_3 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != (byte *)0x0);
  return 0;
}


