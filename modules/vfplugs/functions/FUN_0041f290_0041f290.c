/* Module: vfplugs.dll
   Function: FUN_0041f290
   Address: 0041f290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041f290(int param_1)

{
  HDC hdc;
  undefined1 uVar1;
  undefined1 uVar2;
  HGDIOBJ pvVar3;
  int iVar4;
  uint uVar5;
  HBRUSH h;
  int iVar6;
  int y;
  int local_38;
  COLORREF local_34;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  double local_10 [2];
  
  if (param_1 != 0) {
    hdc = *(HDC *)(param_1 + 0x324);
    pvVar3 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x328));
    *(HGDIOBJ *)(param_1 + 0x35c) = pvVar3;
    iVar4 = *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1b8);
    iVar6 = *(int *)(param_1 + 0x1c4) - *(int *)(param_1 + 0x1bc);
    local_38 = 0;
    if (0 < iVar4) {
      do {
        y = 0;
        if (0 < iVar6) {
          do {
            local_28 = *(int *)(param_1 + 0x1b8) + local_38;
            local_24 = *(int *)(param_1 + 0x1bc) + y;
            FUN_00419e00(&local_28,(int *)(param_1 + 0x1b8),local_10);
            local_14 = 0x3f800000;
            FUN_0041af00(&local_20,local_10);
            if ((*(byte *)(param_1 + 4) & 1) != 0) {
              local_20 = (local_20 + local_1c + local_18) * _DAT_00487df0;
              local_1c = local_20;
              local_18 = local_20;
            }
            if ((&stack0x00000000 != (undefined1 *)0x20) && (&stack0x00000000 != (undefined1 *)0x34)
               ) {
              uVar1 = ftol();
              uVar2 = ftol();
              uVar5 = ftol();
              local_34 = (uint)CONCAT11(uVar1,uVar2) << 8 | uVar5 & 0xff;
            }
            h = CreateSolidBrush(local_34);
            pvVar3 = SelectObject(hdc,h);
            PatBlt(hdc,local_38,y,1,1,0xf00021);
            pvVar3 = SelectObject(hdc,pvVar3);
            DeleteObject(pvVar3);
            y = y + 1;
          } while (y < iVar6);
        }
        local_38 = local_38 + 1;
      } while (local_38 < iVar4);
    }
    return 0;
  }
  return 0x80070057;
}


