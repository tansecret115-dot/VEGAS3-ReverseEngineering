/* Module: vegas30.exe
   Function: FUN_00510550
   Address: 00510550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00510550(HDC param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  HBRUSH h;
  HGDIOBJ h_00;
  HGDIOBJ pvVar7;
  POINT *pPVar8;
  undefined1 *puVar9;
  int local_120;
  undefined4 local_118;
  undefined4 local_114;
  POINT local_110 [4];
  LONG local_f0;
  LONG local_ec;
  undefined1 local_e8 [132];
  undefined1 local_64 [96];
  
  iVar1 = *param_3;
  iVar2 = *(int *)(iVar1 + 0x98);
  local_118 = 0x15;
  local_114 = 0x15;
  iVar5 = FUN_0050c470(*(undefined4 *)(iVar1 + 0x98),*(undefined4 *)(iVar2 + 0x88),
                       *(undefined4 *)(iVar2 + 0x8c),local_e8,2,0,0);
  if ((iVar5 != -1) && ((*(byte *)(iVar2 + 4) & 8) == 0)) {
    FUN_0050db20(local_64,iVar2,*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar2 + 0x8c),2,
                 DAT_00647e50,0,0,0,0);
    puVar9 = local_64;
    local_120 = 4;
    pPVar8 = local_110;
    do {
      FUN_0050d7f0(pPVar8,puVar9,*(undefined4 *)(iVar1 + 0x98),&local_118);
      puVar9 = puVar9 + 0x10;
      pPVar8->x = pPVar8->x + *param_2;
      pPVar8->y = pPVar8->y + param_2[1];
      local_120 = local_120 + -1;
      pPVar8 = pPVar8 + 1;
    } while (local_120 != 0);
    local_f0 = local_110[0].x;
    local_ec = local_110[0].y;
    uVar3 = ftol();
    uVar4 = ftol();
    uVar6 = ftol();
    h = CreateSolidBrush(uVar6 & 0xff | (uint)CONCAT11(uVar3,uVar4) << 8);
    h_00 = SelectObject(param_1,h);
    pvVar7 = GetStockObject(8);
    pvVar7 = SelectObject(param_1,pvVar7);
    Polygon(param_1,local_110,5);
    SelectObject(param_1,pvVar7);
    SelectObject(param_1,h_00);
    if (h != (HBRUSH)0x0) {
      DeleteObject(h);
    }
  }
  return;
}


