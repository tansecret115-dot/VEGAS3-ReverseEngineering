/* Module: sfpublish.dll
   Function: FUN_00415080
   Address: 00415080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00415080(int param_1)

{
  int *piVar1;
  uchar *puVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uchar *puVar7;
  HWND pHVar8;
  undefined4 *puVar9;
  HANDLE h;
  uchar uVar10;
  uchar *lpsz;
  char *pcVar11;
  undefined4 uVar12;
  UINT UVar13;
  char *pcVar14;
  int iVar15;
  UINT UVar16;
  int local_2c;
  tagRECT local_28;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  local_2c = 0;
  piVar1 = *(int **)(param_1 + 0x34);
  if (0 < *piVar1) {
    do {
      lpsz = (uchar *)0x0;
      puVar7 = *(uchar **)(piVar1[2] + local_2c * 4);
      uVar10 = *puVar7;
      puVar2 = puVar7;
      if (uVar10 == '\0') {
LAB_004150cb:
        lpsz = puVar2;
      }
      else {
        do {
          if (uVar10 == '/') {
            lpsz = puVar2;
          }
          puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
          uVar10 = *puVar2;
        } while (uVar10 != '\0');
        if (lpsz == (uchar *)0x0) goto LAB_004150cb;
      }
      if (*lpsz == '\0') {
        uVar10 = *puVar7;
        lpsz = (uchar *)0x0;
        puVar2 = puVar7;
        if (uVar10 != '\0') {
          do {
            if (uVar10 == '\\') {
              lpsz = puVar2;
            }
            puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
            uVar10 = *puVar2;
          } while (uVar10 != '\0');
          if (lpsz != (uchar *)0x0) goto LAB_004150f2;
        }
        lpsz = puVar2;
      }
LAB_004150f2:
      puVar2 = (uchar *)CharNextA((LPCSTR)lpsz);
      _mbscpy(puVar7,puVar2);
      pCVar3 = FUN_00416730((LPCSTR)puVar7);
      if (*pCVar3 != '\0') {
        *pCVar3 = '\0';
      }
      piVar1 = *(int **)(param_1 + 0x34);
      local_2c = local_2c + 1;
    } while (local_2c < *piVar1);
  }
  iVar4 = FUN_00413120((int *)**(undefined4 **)(param_1 + 0x30));
  if ((-1 < iVar4) &&
     (uVar5 = FUN_00412de0(*(int **)(param_1 + 0x30),*(int **)(param_1 + 0x34)), -1 < (int)uVar5)) {
    iVar4 = *(int *)**(undefined4 **)(param_1 + 0x30);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      uVar5 = FUN_00411b00(*(undefined4 **)(*(int *)(**(int **)(param_1 + 0x30) + 8) + iVar4 * 4));
      if ((int)uVar5 < 0) {
        pcVar14 = "LoadAccounts failed for provider %s hr=%d";
        uVar12 = 0x29c;
        pcVar11 = "refreshproviders.cpp";
        uVar5 = 1;
        puVar6 = FUN_004012b0();
        FUN_00415b60((int)puVar6,uVar5,pcVar11,uVar12,pcVar14);
        FUN_0041dd10((int *)**(undefined4 **)(param_1 + 0x30),iVar4,1,0);
        uVar5 = 0;
      }
    }
    if (-1 < (int)uVar5) goto LAB_004151ba;
  }
  puVar7 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x7e);
  FUN_00419230(*(HWND *)(param_1 + 4),0x10,puVar7);
LAB_004151ba:
  pHVar8 = GetDlgItem(*(HWND *)(param_1 + 4),0x204);
  SendMessageA(pHVar8,0x466,0,0);
  ShowWindow(pHVar8,0);
  GetWindowRect(pHVar8,&local_28);
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 4),(LPPOINT)&local_28,2);
  pHVar8 = GetDlgItem(*(HWND *)(param_1 + 4),0x206);
  UVar16 = 0x3020;
  iVar15 = 0;
  iVar4 = 0;
  UVar13 = 0;
  pCVar3 = (LPCSTR)0xc1;
  puVar9 = (undefined4 *)FUN_004012d0();
  h = (HANDLE)FUN_0041b6c0(puVar9,pCVar3,UVar13,iVar4,iVar15,UVar16);
  GetObjectA(h,0x18,local_18);
  MoveWindow(pHVar8,local_28.right - local_14,local_28.top,local_14,local_10,1);
  SendMessageA(pHVar8,0x172,0,(LPARAM)h);
  ShowWindow(pHVar8,5);
  pHVar8 = GetDlgItem(*(HWND *)(param_1 + 4),0x205);
  puVar7 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x7f);
  FUN_0041a720(pHVar8,puVar7);
  pHVar8 = GetDlgItem(*(HWND *)(param_1 + 4),2);
  puVar7 = (uchar *)FUN_0041b9f0(DAT_0044164c,0x7d);
  FUN_0041a720(pHVar8,puVar7);
  *(undefined4 *)(param_1 + 0x24) = 1;
  pHVar8 = GetDlgItem(*(HWND *)(param_1 + 4),0x203);
  SendMessageA(pHVar8,0x406,0,100);
  SendMessageA(pHVar8,0x402,100,0);
  SendMessageA(*(HWND *)(param_1 + 4),0x111,2,0);
  return;
}


