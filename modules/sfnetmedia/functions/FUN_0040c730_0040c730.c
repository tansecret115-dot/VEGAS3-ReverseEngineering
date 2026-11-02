/* Module: sfnetmedia.dll
   Function: FUN_0040c730
   Address: 0040c730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040c730(void *this,undefined4 param_1,undefined4 param_2,INT_PTR param_3)

{
  bool bVar1;
  HWND hWnd;
  LRESULT LVar2;
  LRESULT LVar3;
  undefined4 *puVar4;
  LPSTR pCVar5;
  uchar *puVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int local_12c [5];
  CHAR *local_118;
  undefined4 local_114;
  CHAR local_104 [260];
  
  iVar9 = 0;
  bVar1 = false;
  hWnd = GetDlgItem(*(HWND *)((int)this + 4),600);
  LVar2 = SendMessageA(hWnd,0x1004,0,0);
  piVar10 = local_12c;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  local_118 = local_104;
  local_12c[0] = 0xd;
  local_114 = 0x103;
  local_12c[3] = 0;
  if (0 < LVar2) {
    do {
      local_12c[2] = 2;
      local_12c[1] = iVar9;
      LVar3 = SendMessageA(hWnd,0x1005,0,(LPARAM)local_12c);
      if (LVar3 != 0) {
        uVar11 = 0x75;
        puVar4 = (undefined4 *)FUN_004012d0();
        pCVar5 = FUN_00418380(puVar4,uVar11);
        iVar8 = lstrcmpA(local_118,pCVar5);
        if (iVar8 != 0) {
          uVar11 = 0x74;
          puVar4 = (undefined4 *)FUN_004012d0();
          pCVar5 = FUN_00418380(puVar4,uVar11);
          iVar8 = lstrcmpA(local_118,pCVar5);
          if (iVar8 != 0) goto LAB_0040c7fb;
        }
        bVar1 = true;
      }
LAB_0040c7fb:
      iVar9 = iVar9 + 1;
    } while (iVar9 < LVar2);
    if (bVar1) {
      uVar11 = 0x6e;
      puVar4 = (undefined4 *)FUN_004012d0();
      puVar6 = (uchar *)FUN_00418380(puVar4,uVar11);
      iVar8 = FUN_00415bc0(*(HWND *)((int)this + 4),0x124,puVar6);
      if (iVar8 == 7) {
        return 0xffffffff;
      }
      goto LAB_0040c8a5;
    }
  }
  BVar7 = IsWindow(*(HWND *)((int)this + 0x80));
  if (BVar7 != 0) {
    uVar11 = 0x6e;
    puVar4 = (undefined4 *)FUN_004012d0();
    puVar6 = (uchar *)FUN_00418380(puVar4,uVar11);
    iVar8 = FUN_00415bc0(*(HWND *)((int)this + 4),0x124,puVar6);
    if (iVar8 == 7) {
      return 0xffffffff;
    }
  }
LAB_0040c8a5:
  BVar7 = IsWindow(*(HWND *)((int)this + 0x80));
  if (BVar7 != 0) {
    DestroyWindow(*(HWND *)((int)this + 0x80));
  }
  EndDialog(*(HWND *)((int)this + 4),param_3);
  return 0;
}


