/* Module: vegas30k.dll
   Function: FUN_01155230
   Address: 01155230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01155230(HDC param_1,int *param_2,int param_3)

{
  short sVar1;
  HDC hdc;
  COLORREF color;
  COLORREF CVar2;
  int iVar3;
  int x;
  int x_00;
  
  hdc = param_1;
  color = GetBkColor(param_1);
  x_00 = *(int *)(param_3 + 0x70);
  iVar3 = *(int *)(param_3 + 0x74) + -1;
  x = x_00 + 1;
  UnrealizeObject(*(HGDIOBJ *)(param_3 + 0x108));
  SetBrushOrgEx(param_1,0,0,(LPPOINT)0x0);
  SelectObject(param_1,*(HGDIOBJ *)(param_3 + 0x108));
  if (((*(uint *)(param_3 + 0x164) & 0x1000) != 0) && (0 < *(int *)(param_3 + 0x16c))) {
    do {
      iVar3 = iVar3 + *(int *)(param_3 + 0x16c);
      if (param_2[1] <= iVar3) {
        if ((*(uint *)(param_3 + 0x164) & 0x1000) == 0) {
          FUN_01151e70(param_1,x,iVar3,param_2[2] - x,1,color);
        }
        else {
          PatBlt(param_1,x,iVar3,param_2[2] - x,1,0xf00021);
        }
      }
    } while (iVar3 < param_2[3]);
  }
  if (((*(uint *)(param_3 + 0x164) & 0x2000) != 0) &&
     (param_1 = (HDC)0x0, *(int *)(param_3 + 0x60) != 0)) {
    iVar3 = 0;
    do {
      if ((param_1 < *(uint *)(param_3 + 100)) || (*(uint *)(param_3 + 0xb8) <= param_1)) {
        sVar1 = *(short *)(*(int *)(param_3 + 0x1c0) + 2 + iVar3);
        if (sVar1 != 0) {
          x_00 = x_00 + sVar1;
          if (x_00 < *param_2) goto LAB_0115538c;
          if ((*(uint *)(param_3 + 0x164) & 0x2000) == 0) {
            CVar2 = DAT_012af80c;
            if (param_1 != (HDC)(*(uint *)(param_3 + 100) - 1)) {
              CVar2 = color;
            }
            FUN_01151e70(hdc,x_00,*(int *)(param_3 + 0x74),1,param_2[3] - *(int *)(param_3 + 0x74),
                         CVar2);
          }
          else {
            PatBlt(hdc,x_00,*(int *)(param_3 + 0x74),1,param_2[3] - *(int *)(param_3 + 0x74),
                   0xf00021);
          }
        }
        if (param_2[2] <= x_00) break;
      }
LAB_0115538c:
      param_1 = (HDC)((int)param_1 + 1);
      iVar3 = iVar3 + 0x10;
    } while (param_1 < *(uint *)(param_3 + 0x60));
  }
  SetBkColor(hdc,color);
  return;
}


