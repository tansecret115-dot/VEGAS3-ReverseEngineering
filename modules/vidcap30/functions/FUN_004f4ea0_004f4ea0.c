/* Module: vidcap30.exe
   Function: FUN_004f4ea0
   Address: 004f4ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_004f4ea0(int param_1,int param_2)

{
  ushort uVar1;
  HWND hWnd;
  HWND hWnd_00;
  int *piVar2;
  LRESULT LVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  int *local_468 [3];
  int local_45c;
  undefined1 *local_454;
  undefined4 *local_450;
  undefined4 local_448 [131];
  undefined4 local_23c;
  undefined4 local_238;
  uint local_230;
  undefined1 local_208;
  undefined4 auStack_207 [129];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    hWnd = *(HWND *)(param_1 + 0x18);
    hWnd_00 = *(HWND *)(param_1 + 0x1c);
    LVar3 = SendMessageA(hWnd,0x110a,9,0);
    if (LVar3 != 0) {
      ppiVar8 = local_468;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppiVar8 = (int *)0x0;
        ppiVar8 = ppiVar8 + 1;
      }
      iVar4 = FUN_004f8340(hWnd,LVar3,&local_208);
      (&local_208)[iVar4] = 0x5c;
      local_468[2] = (int *)FUN_004f6ec0(hWnd,LVar3);
      local_450 = local_448;
      puVar7 = local_448;
      for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_454 = &local_208;
      local_468[0] = (int *)0x2;
      LVar3 = SendMessageA(hWnd_00,0x1004,0,0);
      iVar5 = 0;
      if (0 < LVar3) {
        do {
          local_45c = FUN_004f3c20(hWnd_00,iVar5);
          if (local_45c < *local_468[2]) {
            puVar7 = *(undefined4 **)(local_468[2][2] + local_45c * 4);
            local_23c = puVar7[3];
            local_238 = *puVar7;
            local_230 = local_230 & 0xffffffdf;
            uVar1 = *(ushort *)(puVar7 + 4);
            puVar7 = puVar7 + 5;
            puVar9 = (undefined4 *)((int)auStack_207 + iVar4);
            for (uVar6 = (uint)(uVar1 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            piVar2 = *(int **)(param_1 + 0x3c);
            for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            (**(code **)(*piVar2 + 0xc))(piVar2,local_468);
            _SfList_AllocAndInsertItem_20(param_2,local_448,0x240,0xffffffff,0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < LVar3);
      }
      return LVar3;
    }
  }
  return 0;
}


