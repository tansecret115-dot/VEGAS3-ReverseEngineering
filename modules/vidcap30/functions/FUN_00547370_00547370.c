/* Module: vidcap30.exe
   Function: FUN_00547370
   Address: 00547370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00547370(HDC param_1,int param_2,int param_3,int param_4)

{
  DWORD color;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LPCSTR lpString;
  HDC hdc;
  UINT UStack_48;
  int iStack_44;
  char cStack_3f;
  int local_34;
  RECT RStack_30;
  LONG local_20;
  LONG local_1c;
  int local_18;
  int local_14;
  tagRECT tStack_10;
  
  if (param_3 != -0xdc) {
    uVar3 = *(uint *)(param_3 + 200);
    local_34 = *(int *)(param_3 + 0x74) + -1;
    local_20 = *(LONG *)(param_3 + 0xf4);
    local_1c = *(LONG *)(param_3 + 0xf8);
    local_18 = *(int *)(param_3 + 0xfc);
    local_14 = *(int *)(param_3 + 0x100);
    FUN_00544330(*(undefined4 *)(param_3 + 0xe0),&local_20,DAT_006624c8,DAT_006624c8);
    if (*(HGDIOBJ *)(param_3 + 0x10c) != (HGDIOBJ)0x0) {
      SelectObject(*(HDC *)(param_3 + 0xe0),*(HGDIOBJ *)(param_3 + 0x10c));
    }
    SetTextAlign(*(HDC *)(param_3 + 0xe0),10);
    if (param_4 == 0) {
      hdc = *(HDC *)(param_3 + 0xe0);
      color = DAT_006624d4;
    }
    else {
      color = GetSysColor(0x11);
      hdc = *(HDC *)(param_3 + 0xe0);
    }
    SetTextColor(hdc,color);
    SetBkColor(*(HDC *)(param_3 + 0xe0),DAT_006624bc);
    if (0 < *(int *)(param_3 + 0x16c)) {
      param_4 = 3;
      do {
        puVar1 = (undefined4 *)0x0;
        if (*(uint *)(param_3 + 0x34) < uVar3) {
          lpString = "";
          UStack_48 = 0;
          cStack_3f = '\0';
        }
        else {
          puVar1 = (undefined4 *)(**(code **)(param_3 + 0x21c))(param_3 + 0x1c8,uVar3,0xffff,0);
          UStack_48 = puVar1[1];
          lpString = (LPCSTR)*puVar1;
          cStack_3f = (char)((ushort)*(undefined2 *)((int)puVar1 + 0xe) >> 8);
        }
        iVar2 = FUN_00545910(uVar3,param_3);
        if (param_4 != iVar2) {
          RStack_30.left = local_20;
          RStack_30.top = local_1c;
          iStack_44 = 0;
          RStack_30.right = local_18;
          RStack_30.bottom = local_14;
          if ((iVar2 == 0) || ((*(uint *)(param_3 + 0x164) & 0x300) == 0)) {
            FUN_00544330(*(undefined4 *)(param_3 + 0xe0),&RStack_30,DAT_006624c4,DAT_006624c0);
          }
          else {
            FUN_00544330(*(undefined4 *)(param_3 + 0xe0),&RStack_30,DAT_006624c0,DAT_006624bc);
            iStack_44 = 1;
          }
          SetBkColor(*(HDC *)(param_3 + 0xe0),DAT_006624bc);
          param_4 = iVar2;
        }
        ExtTextOutA(*(HDC *)(param_3 + 0xe0),RStack_30.right + -1,RStack_30.bottom + iStack_44,6,
                    &RStack_30,lpString,UStack_48,(INT *)0x0);
        if (cStack_3f != '\0') {
          tStack_10.top = RStack_30.top;
          tStack_10.left = RStack_30.left;
          tStack_10.right = RStack_30.right;
          tStack_10.bottom = RStack_30.bottom;
          InflateRect(&tStack_10,-1,0);
          FUN_00545990(*(undefined4 *)(param_3 + 0xe0),&tStack_10,iStack_44,1,0,puVar1);
        }
        BitBlt(param_1,0,local_34,*(int *)(param_3 + 0xfc),*(int *)(param_3 + 0x100),
               *(HDC *)(param_3 + 0xe0),0,0,0xcc0020);
        local_34 = local_34 + *(int *)(param_3 + 0x16c);
        uVar3 = uVar3 + 1;
      } while (local_34 < *(int *)(param_2 + 0xc));
    }
  }
  return;
}


