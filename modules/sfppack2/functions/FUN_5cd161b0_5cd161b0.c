/* Module: sfppack2.dll
   Function: FUN_5cd161b0
   Address: 5cd161b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd161b0(HDC param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  HBRUSH h;
  uint uVar8;
  HGDIOBJ pvStack00000010;
  
  piVar5 = param_2;
  iVar1 = param_2[3];
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = *param_2;
  h = CreateSolidBrush(0);
  pvStack00000010 = SelectObject(param_1,h);
  param_2 = (int *)0x0;
  if (0 < iVar3 - iVar4) {
    do {
      uVar8 = ftol();
      uVar6 = ftol();
      uVar7 = ftol();
      SelectObject(param_1,pvStack00000010);
      DeleteObject(h);
      h = CreateSolidBrush((uint)CONCAT11(uVar7,uVar6) << 8 | uVar8 & 0xff);
      pvStack00000010 = SelectObject(param_1,h);
      PatBlt(param_1,*piVar5 + (int)param_2,piVar5[1],1,iVar1 - iVar2,0xf00021);
      param_2 = (int *)((int)param_2 + 1);
    } while ((int)param_2 < iVar3 - iVar4);
  }
  SelectObject(param_1,pvStack00000010);
  DeleteObject(h);
  return;
}


