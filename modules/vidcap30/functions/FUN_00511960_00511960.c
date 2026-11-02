/* Module: vidcap30.exe
   Function: FUN_00511960
   Address: 00511960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00511960(undefined4 *param_1,HDC param_2)

{
  int *piVar1;
  HWND hWnd;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  HDC hDC;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  uVar3 = (uint)param_2;
  puVar2 = param_1;
  hWnd = (HWND)*param_1;
  if ((((param_2 != (HDC)0x0) && ((HDC)(param_1[0x28] - 1) != param_2)) &&
      ((uint)param_1[0x26] < (uint)param_1[0x28])) &&
     (iVar4 = FUN_005118e0(param_1,param_2,0), iVar4 == 0)) {
    iVar4 = FUN_00511920(puVar2,uVar3,&param_1);
    if (iVar4 != 0) {
      if (param_1 < (undefined4 *)(puVar2[0x2b] + -1)) {
        iVar4 = (int)param_1 * 0x1c;
        puVar7 = param_1;
        do {
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          iVar5 = iVar4 + 0x1c;
          puVar9 = (undefined4 *)(iVar4 + puVar2[0x2f]);
          iVar4 = iVar4 + 0x1c;
          puVar8 = (undefined4 *)(iVar5 + puVar2[0x2f]);
          for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        } while (puVar7 < (undefined4 *)(puVar2[0x2b] + -1));
      }
      puVar2[0x2b] = puVar2[0x2b] + -1;
    }
    hDC = GetDC(hWnd);
    param_2 = hDC;
    FUN_00511050(puVar2,hDC,0,puVar2[0x28] + -1);
    if (uVar3 < puVar2[0x28] - 1) {
      iVar4 = uVar3 * 8;
      uVar10 = uVar3;
      do {
        uVar10 = uVar10 + 1;
        *(undefined4 *)(iVar4 + puVar2[0x2d]) = *(undefined4 *)(iVar4 + 8 + puVar2[0x2d]);
        *(undefined4 *)(puVar2[0x2d] + iVar4 + 4) = *(undefined4 *)(puVar2[0x2d] + iVar4 + 0xc);
        iVar5 = FUN_005118e0(puVar2,uVar10,&param_1);
        if (iVar5 != 0) {
          piVar1 = (int *)(puVar2[0x2e] + (int)param_1 * 4);
          *piVar1 = *piVar1 + -1;
        }
        iVar5 = FUN_00511920(puVar2,uVar10,&param_1);
        if (iVar5 != 0) {
          *(int *)(puVar2[0x2f] + (int)param_1 * 0x1c) =
               *(int *)(puVar2[0x2f] + (int)param_1 * 0x1c) + -1;
        }
        iVar4 = iVar4 + 8;
        hDC = param_2;
      } while (uVar10 < puVar2[0x28] - 1);
    }
    uVar10 = puVar2[0xd];
    if (-1 < (int)uVar10) {
      if (uVar3 < uVar10) {
        puVar2[0xd] = uVar10 - 1;
      }
      if (uVar3 <= (uint)puVar2[0xe]) {
        puVar2[0xe] = puVar2[0xe] - 1;
      }
    }
    iVar4 = puVar2[0x28];
    puVar2[0x28] = iVar4 + -1;
    FUN_00511050(puVar2,hDC,0,iVar4 + -2);
    ReleaseDC(hWnd,hDC);
    return 1;
  }
  MessageBeep(0);
  return 0;
}


