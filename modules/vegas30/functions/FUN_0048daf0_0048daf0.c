/* Module: vegas30.exe
   Function: FUN_0048daf0
   Address: 0048daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048daf0(int *param_1,int param_2,uchar *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uchar *puVar7;
  LPSTR lpsz;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uchar *puVar11;
  uint *puVar12;
  uchar *local_42c;
  undefined4 local_41c;
  uint local_418 [6];
  uint local_400 [5];
  uchar auStack_3e9 [1001];
  
  local_41c = 0;
  iVar2 = *param_1;
  if (1 < *(uint *)(param_2 + 0x14)) {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0xc);
  if (uVar5 < 2) {
    uVar5 = **(int **)(iVar2 + 0x134) - *(int *)(param_2 + 8);
  }
  SendMessageA(*(HWND *)(iVar2 + 0xdc),0x426,0x18,(LPARAM)local_400);
  puVar10 = local_400;
  puVar12 = local_418;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x130);
  iVar8 = iVar3 * 0x10;
  switch(*(undefined2 *)(iVar8 + 8 + *(int *)(iVar2 + 0xf4))) {
  case 1:
  case 4:
  case 5:
  case 6:
  case 8:
  case 10:
  case 0xf:
  case 0x10:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    DAT_0064ca60 = 1;
    FUN_004e9f70(uVar4,0x225,0);
  }
  uVar9 = *(uint *)(param_2 + 8);
  if (uVar9 < uVar5 + uVar9) {
    do {
      iVar6 = lstrlenA((LPCSTR)param_3);
      if (iVar6 == 0) break;
      local_42c = param_3 + iVar6;
      puVar7 = _mbsstr(param_3,"\t");
      puVar11 = local_42c;
      if ((puVar7 < local_42c) && (puVar7 != (uchar *)0x0)) {
        puVar11 = puVar7;
      }
      puVar7 = _mbsstr(param_3,"\r\n");
      if ((puVar7 < puVar11) && (puVar7 != (uchar *)0x0)) {
        lpsz = CharNextA((LPCSTR)puVar7);
        local_42c = (uchar *)CharNextA(lpsz);
        puVar11 = puVar7;
      }
      puVar7 = _mbsstr(param_3,"\r");
      if ((puVar7 < puVar11) && (puVar7 != (uchar *)0x0)) {
        local_42c = (uchar *)CharNextA((LPCSTR)puVar7);
        puVar11 = puVar7;
      }
      puVar7 = _mbsstr(param_3,"\n");
      if ((puVar7 < puVar11) && (puVar7 != (uchar *)0x0)) {
        local_42c = (uchar *)CharNextA((LPCSTR)puVar7);
        puVar11 = puVar7;
      }
      puVar11 = puVar11 + (1 - (int)param_3);
      if ((uchar *)0x3e7 < puVar11) {
        puVar11 = (uchar *)0x3e8;
      }
      lstrcpynA((LPSTR)(auStack_3e9 + 1),(LPCSTR)param_3,(int)puVar11);
      auStack_3e9[(int)puVar11] = '\0';
      uVar1 = *(ushort *)(iVar8 + 4 + *(int *)(iVar2 + 0xf4));
      if ((((uVar1 & 0x4000) == 0) ||
          (iVar6 = (*(code *)param_1[0x10])(param_1,uVar9,iVar3,0), iVar6 == 1)) &&
         ((uVar1 & 0xc000) != 0)) {
        local_418[0] = uVar9;
        local_418[1] = iVar3;
        local_418[2] = uVar9;
        local_418[3] = iVar3;
        SendMessageA(*(HWND *)(iVar2 + 0xdc),0x427,0x18,(LPARAM)local_418);
        (*(code *)param_1[0x11])(param_1,uVar9,iVar3,3,auStack_3e9 + 1);
        local_41c = 6;
      }
      uVar9 = uVar9 + 1;
      param_3 = local_42c;
    } while (uVar9 < uVar5 + *(int *)(param_2 + 8));
  }
  switch(*(undefined2 *)(iVar8 + 8 + *(int *)(iVar2 + 0xf4))) {
  case 1:
  case 4:
  case 5:
  case 6:
  case 8:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    FUN_004ea040(uVar4,0);
  }
  DAT_0064ca60 = 0;
  SendMessageA(*(HWND *)(iVar2 + 0xdc),0x427,0x18,(LPARAM)local_400);
  return local_41c;
}


