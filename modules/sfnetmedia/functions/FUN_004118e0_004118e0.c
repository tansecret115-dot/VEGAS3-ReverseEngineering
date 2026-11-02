/* Module: sfnetmedia.dll
   Function: FUN_004118e0
   Address: 004118e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004118e0(int param_1)

{
  int *piVar1;
  uchar *puVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  HWND pHVar7;
  undefined4 *puVar8;
  HANDLE h;
  uchar uVar9;
  uchar *lpsz;
  UINT UVar10;
  int iVar11;
  UINT UVar12;
  int local_2c;
  tagRECT local_28;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  piVar1 = *(int **)(param_1 + 0x34);
  local_2c = 0;
  if (0 < *piVar1) {
    do {
      lpsz = (uchar *)0x0;
      puVar6 = *(uchar **)(piVar1[2] + local_2c * 4);
      uVar9 = *puVar6;
      puVar2 = puVar6;
      if (uVar9 == '\0') {
LAB_0041192b:
        lpsz = puVar2;
      }
      else {
        do {
          if (uVar9 == '/') {
            lpsz = puVar2;
          }
          puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
          uVar9 = *puVar2;
        } while (uVar9 != '\0');
        if (lpsz == (uchar *)0x0) goto LAB_0041192b;
      }
      if (*lpsz == '\0') {
        uVar9 = *puVar6;
        lpsz = (uchar *)0x0;
        puVar2 = puVar6;
        if (uVar9 != '\0') {
          do {
            if (uVar9 == '\\') {
              lpsz = puVar2;
            }
            puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
            uVar9 = *puVar2;
          } while (uVar9 != '\0');
          if (lpsz != (uchar *)0x0) goto LAB_00411952;
        }
        lpsz = puVar2;
      }
LAB_00411952:
      puVar2 = (uchar *)CharNextA((LPCSTR)lpsz);
      _mbscpy(puVar6,puVar2);
      pCVar3 = FUN_004130c0((LPCSTR)puVar6);
      if (*pCVar3 != '\0') {
        *pCVar3 = '\0';
      }
      piVar1 = *(int **)(param_1 + 0x34);
      local_2c = local_2c + 1;
    } while (local_2c < *piVar1);
  }
  iVar4 = FUN_00410c20((int *)**(undefined4 **)(param_1 + 0x30));
  if ((iVar4 < 0) ||
     (uVar5 = FUN_00410940(*(int **)(param_1 + 0x30),*(int **)(param_1 + 0x34)), (int)uVar5 < 0)) {
    puVar6 = (uchar *)FUN_00418380(DAT_0044172c,0x8b);
    FUN_00415bc0(*(HWND *)(param_1 + 4),0x10,puVar6);
  }
  pHVar7 = GetDlgItem(*(HWND *)(param_1 + 4),0x204);
  SendMessageA(pHVar7,0x466,0,0);
  ShowWindow(pHVar7,0);
  GetWindowRect(pHVar7,&local_28);
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 4),(LPPOINT)&local_28,2);
  pHVar7 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fe);
  UVar12 = 0x3020;
  iVar11 = 0;
  iVar4 = 0;
  UVar10 = 0;
  pCVar3 = (LPCSTR)0x69;
  puVar8 = (undefined4 *)FUN_004012d0();
  h = (HANDLE)FUN_00418050(puVar8,pCVar3,UVar10,iVar4,iVar11,UVar12);
  GetObjectA(h,0x18,local_18);
  MoveWindow(pHVar7,local_28.right - local_14,local_28.top,local_14,local_10,1);
  SendMessageA(pHVar7,0x172,0,(LPARAM)h);
  ShowWindow(pHVar7,5);
  pHVar7 = GetDlgItem(*(HWND *)(param_1 + 4),0x205);
  puVar6 = (uchar *)FUN_00418380(DAT_0044172c,0x8c);
  FUN_004170b0(pHVar7,puVar6);
  pHVar7 = GetDlgItem(*(HWND *)(param_1 + 4),2);
  puVar6 = (uchar *)FUN_00418380(DAT_0044172c,0x8a);
  FUN_004170b0(pHVar7,puVar6);
  *(undefined4 *)(param_1 + 0x24) = 1;
  pHVar7 = GetDlgItem(*(HWND *)(param_1 + 4),0x203);
  SendMessageA(pHVar7,0x406,0,100);
  SendMessageA(pHVar7,0x402,100,0);
  SendMessageA(*(HWND *)(param_1 + 4),0x111,2,0);
  return;
}


