/* Module: vegas30.exe
   Function: FUN_004dd620
   Address: 004dd620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dd620(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
                 undefined4 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  LPSTR pCVar1;
  int *piVar2;
  LPCSTR pCVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte local_8 [4];
  undefined1 local_4 [4];
  
  iVar7 = param_1;
  *param_8 = 0;
  *param_9 = 0;
  FUN_004dd330(param_1,local_4,local_8);
  if (((local_8[0] & 1) != 0) && (*(int *)(param_1 + 0xd70) != 0)) {
    puVar8 = (undefined4 *)(param_1 + 0xd58);
    puVar9 = param_6;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    pCVar1 = (LPSTR)(param_6 + 10);
    param_6[2] = param_2;
    param_6[4] = param_4;
    param_6[3] = param_3;
    param_6[5] = param_5;
    param_6[8] = pCVar1;
    if (*(int *)(param_1 + 0xd94) == 2) {
      param_6[7] = *(undefined4 *)(param_1 + 0xd84);
    }
    else {
      param_6[7] = *(undefined4 *)(param_1 + 0xd80);
    }
    piVar6 = *(int **)(param_1 + 0xc38);
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6;
    }
    param_1 = 0;
    if (0 < iVar5) {
      piVar6 = (int *)piVar6[2];
      do {
        piVar2 = (int *)*piVar6;
        if (((((*(byte *)(piVar2 + 8) & 1) != 0) && (*piVar2 == param_2)) && (piVar2[1] == param_3))
           && ((piVar2[2] == param_4 && (piVar2[3] == param_5)))) {
          lstrcpynA(pCVar1,(LPCSTR)(piVar2 + 0xc),0x104);
          *(undefined1 *)((int)param_6 + 299) = 0;
          goto LAB_004dd753;
        }
        param_1 = param_1 + 1;
        piVar6 = piVar6 + 1;
      } while (param_1 < iVar5);
    }
    pCVar3 = (LPCSTR)_SfGetFileNamePtrA_4(param_6[6] + 0x170);
    lstrcpynA(pCVar1,pCVar3,0x104);
    *(undefined1 *)((int)param_6 + 299) = 0;
    puVar4 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(pCVar1);
    *puVar4 = 0;
LAB_004dd753:
    *param_8 = param_6;
  }
  if ((local_8[0] & 2) != 0) {
    iVar5 = 0;
    *param_7 = 0x10;
    param_7[6] = *(undefined4 *)(iVar7 + 0xd50);
    param_7[2] = param_2;
    param_7[3] = param_3;
    pCVar1 = (LPSTR)(param_7 + 10);
    param_7[4] = param_4;
    param_7[1] = 0;
    param_7[5] = param_5;
    param_7[8] = pCVar1;
    if (*(int *)(iVar7 + 0xd94) == 2) {
      param_7[7] = *(undefined4 *)(iVar7 + 0xd80);
    }
    else {
      param_7[7] = *(undefined4 *)(iVar7 + 0xd80);
    }
    piVar6 = *(int **)(iVar7 + 0xc38);
    if (piVar6 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar6;
    }
    if (0 < iVar7) {
      piVar6 = (int *)piVar6[2];
      do {
        piVar2 = (int *)*piVar6;
        if ((((*(byte *)(piVar2 + 8) & 1) != 0) && (*piVar2 == param_2)) &&
           ((piVar2[1] == param_3 && ((piVar2[2] == param_4 && (piVar2[3] == param_5)))))) {
          lstrcpynA(pCVar1,(LPCSTR)(piVar2 + 0xc),0x104);
          *(undefined1 *)((int)param_7 + 299) = 0;
          *param_9 = param_7;
          return;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < iVar7);
    }
    pCVar3 = (LPCSTR)_SfGetFileNamePtrA_4(param_7[6] + 0x170);
    lstrcpynA(pCVar1,pCVar3,0x104);
    *(undefined1 *)((int)param_7 + 299) = 0;
    puVar4 = (undefined1 *)_SfGetFileNameExtensionPtrA_4(pCVar1);
    *puVar4 = 0;
    *param_9 = param_7;
  }
  return;
}


