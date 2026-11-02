/* Module: vegas30k.dll
   Function: FUN_01192f40
   Address: 01192f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01192f40(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  LPCVOID pMem;
  bool bVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar8 = param_2;
  iVar5 = param_1;
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 0x10) != 0) {
    return 1;
  }
  if ((uVar1 & 4) != 0) {
    return 1;
  }
  if ((uVar1 & 2) != 0) {
    return 1;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x674);
  if (puVar9 != (undefined4 *)0x0) {
    while ((**(code **)(*(int *)*puVar9 + 0x8c))((int *)*puVar9,0x30,&param_1), param_1 != iVar8) {
      puVar9 = (undefined4 *)puVar9[6];
      if (puVar9 == (undefined4 *)0x0) {
        return 0x80004005;
      }
    }
    if (puVar9 != (undefined4 *)0x0) {
      piVar2 = *(int **)(iVar5 + 0x618);
      bVar3 = false;
      if (piVar2 == (int *)0x0) {
        pvVar6 = GlobalAlloc(0x40,0x310);
        pvVar7 = GlobalLock(pvVar6);
        if (pvVar7 == (LPVOID)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_011a61d0(iVar5);
        }
        *(int *)(iVar5 + 0x618) = iVar8;
        if (iVar8 == 0) {
          return 0x8007000e;
        }
        bVar3 = true;
      }
      else if ((*(uint *)(iVar5 + 8) & 0x200) != 0) {
        (**(code **)(*piVar2 + 0xc4))(piVar2,0);
      }
      FUN_011a62e0(*puVar9);
      if (bVar3) {
        puVar9 = calloc(1,0x1c);
        if (puVar9 == (undefined4 *)0x0) {
          pMem = *(LPCVOID *)(iVar5 + 0x618);
          if (pMem != (LPCVOID)0x0) {
            FUN_011a6280();
            pvVar6 = GlobalHandle(pMem);
            GlobalUnlock(pvVar6);
            pvVar6 = GlobalHandle(pMem);
            GlobalFree(pvVar6);
          }
          return 0x8007000e;
        }
        piVar2 = *(int **)(iVar5 + 0x618);
        *puVar9 = piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
        puVar9[3] = 0x80000000;
        puVar9[2] = 8;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        iVar8 = *(int *)(iVar5 + 0x674);
        if (iVar8 == 0) {
          *(undefined4 **)(iVar5 + 0x674) = puVar9;
        }
        else {
          for (iVar4 = *(int *)(iVar8 + 0x18); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x18)) {
            iVar8 = iVar4;
          }
          *(undefined4 **)(iVar8 + 0x18) = puVar9;
        }
        (**(code **)(**(int **)(iVar5 + 0x618) + 0x10))(*(int **)(iVar5 + 0x618),"Preview");
        *(int *)(iVar5 + 0x67c) = *(int *)(iVar5 + 0x67c) + 1;
      }
      if ((*(uint *)(iVar5 + 8) & 0x200) != 0) {
        (**(code **)(**(int **)(iVar5 + 0x618) + 0xc0))
                  (*(int **)(iVar5 + 0x618),iVar5 + 0x4be,&LAB_01195b40,iVar5,0);
      }
      return 0;
    }
  }
  return 0x80004005;
}


