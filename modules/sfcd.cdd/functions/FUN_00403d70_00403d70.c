/* Module: sfcd.cdd
   Function: FUN_00403d70
   Address: 00403d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00403d70(int param_1,int *param_2)

{
  SIZE_T SVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  HGLOBAL pvVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int local_14;
  uint local_10;
  
  if (param_1 == 0) {
    return -0x7fffbffd;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    local_14 = 0;
    uVar2 = FUN_0041f470(param_1);
    local_10 = 0;
    if (uVar2 != 0) {
      do {
        iVar3 = FUN_0041f490(param_1,local_10);
        uVar4 = FUN_0041f3e0(iVar3);
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        SVar1 = uVar4 * 4 + 0x10;
        iVar5 = FUN_00403cf0(param_2,SVar1);
        if (iVar5 != 0) {
          if ((LPCVOID)param_2[1] != (LPCVOID)0x0) {
            pvVar8 = GlobalHandle((LPCVOID)param_2[1]);
            GlobalUnlock(pvVar8);
            pvVar8 = GlobalHandle((LPCVOID)param_2[1]);
            GlobalFree(pvVar8);
          }
          param_2[1] = 0;
          return iVar5;
        }
        puVar9 = (undefined4 *)(param_2[1] + local_14);
        FUN_00403c10(puVar9,(short)SVar1,iVar3);
        if (uVar4 == 0) {
          puVar9[3] = *(undefined4 *)(iVar3 + 0x14);
        }
        else {
          puVar6 = (undefined4 *)FUN_0041f3f0(iVar3,0);
          puVar9[3] = *puVar6;
        }
        piVar10 = puVar9 + 3;
        *piVar10 = *piVar10 + -0x96;
        FUN_0041f9a0((undefined1 *)piVar10,1);
        uVar11 = 1;
        piVar10 = puVar9 + 4;
        if (1 < uVar4) {
          do {
            piVar7 = (int *)FUN_0041f3f0(iVar3,uVar11);
            *piVar10 = *piVar7 + -0x96;
            FUN_0041f9a0((undefined1 *)piVar10,1);
            piVar10 = piVar10 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar4);
        }
        if (local_10 == uVar2 - 1) {
          iVar3 = *(int *)(param_1 + 0x1d8c) + -0x96;
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x18) + -0x96 + *(int *)(iVar3 + 0x14);
        }
        *piVar10 = iVar3;
        FUN_0041f9a0((undefined1 *)piVar10,1);
        local_14 = local_14 + SVar1;
        local_10 = local_10 + 1;
      } while (local_10 < uVar2);
    }
    return 0;
  }
  return -0x7fffbffd;
}


