/* Module: vfplugs.dll
   Function: FUN_00413a80
   Address: 00413a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00413a80(HDC param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  HDC pHVar1;
  uint *puVar2;
  bool bVar3;
  DWORD DVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined4 *_Memory;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  short local_18;
  short local_16;
  DWORD local_14;
  short local_10;
  uint local_e;
  
  pHVar1 = param_1;
  DVar4 = GetFontData(param_1,DAT_00493340,2,&param_1,2);
  uVar7 = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
  param_1 = (HDC)(uint)uVar7;
  if (DVar4 == 2) {
    uVar8 = 0;
    uVar6 = (uint)uVar7;
    if (uVar7 != 0) {
      do {
        bVar3 = FUN_00413840(pHVar1,&local_18,uVar8);
        if (CONCAT31(extraout_var,bVar3) == 0) {
          *param_4 = 0;
          return 0;
        }
        if ((local_18 == 3) && ((local_16 == 1 || (local_16 == 0)))) {
          uVar6 = uVar8;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < ((uint)param_1 & 0xffff));
    }
    if (((uint)param_1 & 0xffff) <= uVar6) {
      *param_4 = 0;
      return 0;
    }
    iVar5 = FUN_004138c0(pHVar1,&local_10,local_14);
    puVar2 = param_4;
    puVar10 = param_2;
    if (iVar5 == 0) {
      *param_4 = 0;
      return 0;
    }
    if (local_10 != 4) {
      *param_4 = 0;
      return 0;
    }
    local_e = local_e & 0xffff;
    *param_4 = local_e;
    if ((local_e <= param_3) && (param_2 != (undefined4 *)0x0)) {
      _Memory = malloc(local_e);
      if (_Memory != (undefined4 *)0x0) {
        iVar5 = FUN_00413930(pHVar1,(undefined2 *)_Memory,local_14);
        if (iVar5 != 0) {
          uVar7 = *(ushort *)((int)_Memory + 2);
          puVar9 = _Memory;
          for (uVar6 = (uint)(uVar7 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          free(_Memory);
          return 1;
        }
      }
      *puVar2 = 0;
    }
  }
  return 0;
}


