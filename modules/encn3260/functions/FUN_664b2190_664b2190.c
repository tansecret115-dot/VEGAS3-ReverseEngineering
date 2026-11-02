/* Module: encn3260.dll
   Function: FUN_664b2190
   Address: 664b2190
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b2190(void *this,HDC param_1)

{
  int iVar1;
  int iVar2;
  HBRUSH h;
  COLORREF color;
  HPEN h_00;
  int *piVar3;
  undefined4 *puVar4;
  LOGBRUSH local_30;
  undefined4 local_24 [2];
  int local_1c;
  int local_18;
  HPEN local_14;
  HBRUSH local_10;
  HGDIOBJ local_c;
  HGDIOBJ local_8;
  
  if (*(int *)((int)this + 0x4b6) == 0) {
    local_30.lbStyle = 0;
    local_30.lbColor = FUN_664b2360((int)this);
    local_30.lbHatch = 0;
    h = CreateBrushIndirect(&local_30);
    local_10 = h;
    color = FUN_664b2360((int)this);
    h_00 = CreatePen(0,1,color);
    local_14 = h_00;
    local_8 = SelectObject(param_1,h);
    local_c = SelectObject(param_1,h_00);
    piVar3 = FUN_664a7f60(*(void **)((int)this + 0x3a),local_24);
    iVar1 = *piVar3;
    local_18 = (int)this + 0x4fa;
    iVar2 = piVar3[1];
    local_1c = *(int *)((int)this + 0x4fe);
    if (local_1c != 0) {
      piVar3 = (int *)0x0;
      if (local_1c == 0) goto LAB_664b222e;
      do {
        puVar4 = (undefined4 *)FUN_664bab80(local_1c);
        piVar3 = (int *)*puVar4;
LAB_664b222e:
        Rectangle(param_1,iVar1 + *piVar3,piVar3[1] + iVar2,piVar3[2] + iVar1,piVar3[3] + iVar2);
        FUN_664bab40(&local_1c);
      } while (local_1c != 0);
    }
    SelectObject(param_1,local_8);
    SelectObject(param_1,local_c);
    DeleteObject(local_10);
    DeleteObject(local_14);
  }
  return;
}


