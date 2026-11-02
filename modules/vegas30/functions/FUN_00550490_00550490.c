/* Module: vegas30.exe
   Function: FUN_00550490
   Address: 00550490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00550490(uint param_1,int param_2,short *param_3,undefined2 *param_4)

{
  int *piVar1;
  LONG LVar2;
  LONG nDenominator;
  HDC hdc;
  HGDIOBJ h;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LPCSTR lpString;
  tagSIZE *ptVar7;
  uint local_44;
  uint local_40;
  ushort local_3c;
  HGDIOBJ local_38;
  tagSIZE local_30;
  tagRECT local_28;
  undefined1 local_18 [4];
  int local_14;
  
  iVar5 = param_1;
  local_3c = *(ushort *)(param_2 * 0x10 + 4 + *(int *)(param_1 + 0x54c));
  GetClientRect(*(HWND *)(param_1 + 0x98),&local_28);
  local_40 = local_28.right - local_28.left;
  if (4 < local_40) {
    local_40 = local_40 - 2;
  }
  hdc = GetDC(*(HWND *)(param_1 + 0x98));
  h = (HGDIOBJ)_SfGetUIFont_4(100);
  SelectObject(hdc,h);
  ptVar7 = &local_30;
  lpString = (LPCSTR)((uint)*(ushort *)(param_2 * 0x10 + 6 + *(int *)(param_1 + 0x54c)) +
                     *(int *)(param_1 + 0x548));
  iVar3 = lstrlenA(lpString);
  GetTextExtentPointA(hdc,lpString,iVar3,ptVar7);
  LVar2 = local_30.cx;
  ptVar7 = &local_30;
  iVar3 = lstrlenA("0");
  GetTextExtentPointA(hdc,"0",iVar3,ptVar7);
  nDenominator = local_30.cx;
  piVar1 = (int *)(param_1 + 0x554);
  local_44 = LVar2 + 0x13;
  param_1 = 0;
  if (*piVar1 != 0) {
    local_3c = local_3c & 0x2000;
    do {
      uVar6 = 0;
      puVar4 = (undefined4 *)FUN_0054bad0(*(undefined4 *)(iVar5 + 0x57c),param_1,param_2,0);
      if ((*(byte *)((int)puVar4 + 0xe) & 4) != 0) {
        local_38 = SelectObject(hdc,(HGDIOBJ)puVar4[5]);
      }
      if (((local_3c != 0) && ((HANDLE)puVar4[6] != (HANDLE)0x0)) &&
         (GetObjectA((HANDLE)puVar4[6],0x18,local_18), local_14 != 0)) {
        if (puVar4[7] == 0) {
          uVar6 = local_14 + 5;
        }
        else {
          uVar6 = local_14 + 5 + (local_14 / (int)puVar4[7]) * 2;
        }
      }
      if (*(LPCSTR)*puVar4 != '\0') {
        GetTextExtentPointA(hdc,(LPCSTR)*puVar4,puVar4[1],&local_30);
        uVar6 = uVar6 + 6 + local_30.cx;
      }
      if ((*(byte *)((int)puVar4 + 0xe) & 4) != 0) {
        SelectObject(hdc,local_38);
      }
      if (local_44 < uVar6) {
        local_44 = uVar6;
      }
    } while ((uVar6 <= local_40) && (param_1 = param_1 + 1, param_1 < *(uint *)(iVar5 + 0x554)));
  }
  ReleaseDC(*(HWND *)(iVar5 + 0x98),hdc);
  if (local_40 <= local_44) {
    local_44 = local_40;
  }
  *param_3 = (short)local_44;
  iVar5 = MulDiv((int)(short)local_44,8,nDenominator);
  *param_4 = (short)iVar5;
  return;
}


