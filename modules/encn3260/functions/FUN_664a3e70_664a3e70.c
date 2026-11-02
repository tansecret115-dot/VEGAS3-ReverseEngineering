/* Module: encn3260.dll
   Function: FUN_664a3e70
   Address: 664a3e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664a3e70(char *param_1,HDC param_2,HANDLE param_3)

{
  char cVar1;
  uint uVar2;
  HBRUSH h;
  HPEN h_00;
  int mode;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  tagTEXTMETRICA local_ac;
  undefined1 local_74 [4];
  int local_70;
  int local_6c;
  int local_5c [3];
  int local_50 [3];
  LPCSTR local_44 [3];
  HGDIOBJ local_38;
  HBRUSH local_34;
  HGDIOBJ local_30;
  HGDIOBJ local_2c;
  LPCSTR local_28 [3];
  tagSIZE local_1c;
  tagRECT local_14;
  
  GetObjectA(param_3,0x18,local_74);
  GetTextMetricsA(param_2,&local_ac);
  local_14.right = local_70;
  local_14.top = local_6c - local_ac.tmHeight;
  local_14.left = 0;
  local_14.bottom = local_6c;
  local_30 = SelectObject(param_2,param_3);
  h = CreateSolidBrush(0x8000);
  local_34 = h;
  h_00 = CreatePen(5,0,0);
  local_2c = SelectObject(param_2,h);
  local_38 = SelectObject(param_2,h_00);
  Rectangle(param_2,local_14.left,local_14.top,local_14.right,local_14.bottom);
  mode = SetBkMode(param_2,1);
  SetTextColor(param_2,0xff00);
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  GetTextExtentPointA(param_2,param_1,~uVar4 - 1,&local_1c);
  FUN_664bb450(local_44,param_1);
  if (local_14.right - local_14.left < local_1c.cx) {
    uVar4 = 1;
    if (*(int *)(local_44[0] + -8) != 1) {
      do {
        GetTextExtentPointA(param_2,local_44[0],uVar4,&local_1c);
        if (local_14.right - local_14.left < local_1c.cx) {
          FUN_664bb2c0(local_28);
          uVar2 = uVar4;
          do {
            uVar2 = uVar2 - 1;
            if ((int)uVar2 < 1) goto LAB_664a4027;
            piVar3 = FUN_664bbab0(local_44,local_50,uVar2);
            FUN_664bb570(local_28,piVar3);
            FUN_664bb3e0(local_50);
            piVar3 = FUN_664bb6c0(local_5c,local_28,&DAT_664e3384);
            FUN_664bb570(local_28,piVar3);
            FUN_664bb3e0(local_5c);
            GetTextExtentPointA(param_2,local_28[0],*(int *)(local_28[0] + -8),&local_1c);
          } while (local_14.right - local_14.left < local_1c.cx);
          DrawTextA(param_2,local_28[0],*(int *)(local_28[0] + -8),&local_14,0x24);
LAB_664a4027:
          FUN_664bb3e0((int *)local_28);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != *(uint *)(local_44[0] + -8));
    }
  }
  else {
    uVar4 = 0xffffffff;
    pcVar5 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    DrawTextA(param_2,param_1,~uVar4 - 1,&local_14,0x25);
  }
  SetBkMode(param_2,mode);
  SelectObject(param_2,local_2c);
  SelectObject(param_2,local_38);
  SelectObject(param_2,local_30);
  DeleteObject(local_34);
  DeleteObject(h_00);
  FUN_664bb3e0((int *)local_44);
  return;
}


