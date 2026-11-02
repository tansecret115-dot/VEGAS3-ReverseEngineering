/* Module: vidpcore.dll
   Function: FUN_5de96300
   Address: 5de96300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de96300(HDC param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  HDC pHVar1;
  uint *puVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 *_Memory;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  short local_18;
  short local_16;
  undefined4 local_14;
  short local_10;
  uint local_e;
  
  pHVar1 = param_1;
  DVar3 = GetFontData(param_1,DAT_5df3d938,2,&param_1,2);
  uVar6 = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
  param_1 = (HDC)(uint)uVar6;
  if (DVar3 == 2) {
    uVar7 = 0;
    uVar5 = (uint)uVar6;
    if (uVar6 != 0) {
      do {
        iVar4 = FUN_5de960c0(pHVar1,&local_18,uVar7);
        if (iVar4 == 0) {
          *param_4 = 0;
          return 0;
        }
        if ((local_18 == 3) && ((local_16 == 1 || (local_16 == 0)))) {
          uVar5 = uVar7;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < ((uint)param_1 & 0xffff));
    }
    if (((uint)param_1 & 0xffff) <= uVar5) {
      *param_4 = 0;
      return 0;
    }
    iVar4 = FUN_5de96140(pHVar1,&local_10,local_14);
    puVar2 = param_4;
    puVar9 = param_2;
    if (iVar4 == 0) {
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
        iVar4 = FUN_5de961b0(pHVar1,_Memory,local_14);
        if (iVar4 != 0) {
          uVar6 = *(ushort *)((int)_Memory + 2);
          puVar8 = _Memory;
          for (uVar5 = (uint)(uVar6 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
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


