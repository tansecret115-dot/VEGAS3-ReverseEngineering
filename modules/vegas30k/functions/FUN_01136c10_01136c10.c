/* Module: vegas30k.dll
   Function: FUN_01136c10
   Address: 01136c10
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_01136c10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  HRESULT HVar5;
  HGLOBAL hMem;
  LPVOID pvVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *unaff_EBX;
  int iVar10;
  LPVOID unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *apuStack_14 [2];
  undefined1 local_c [12];
  
  piVar14 = *(int **)(param_1 + 0x154);
  if (*(int *)(param_1 + 0x150) != 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = *(int *)(param_1 + 0x150);
    }
    return piVar14;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  puVar13 = *(undefined4 **)(param_1 + 0x24);
  iVar2 = (**(code **)*puVar13)(puVar13,&DAT_011f0e90,local_c);
  if (iVar2 < 0) {
    return piVar14;
  }
  iVar2 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,apuStack_14);
  (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  if (iVar2 < 0) {
    return piVar14;
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(int **)(param_1 + 0x154) = unaff_ESI;
  pvVar3 = calloc(1,(int)unaff_ESI * 0x44);
  *(void **)(param_1 + 0x150) = pvVar3;
  piVar14 = (int *)0x0;
  if (unaff_ESI != (int *)0x0) {
    iVar10 = 0;
    iVar2 = 0;
    do {
      puVar12 = (undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(iVar10 + 0x20 + *(int *)(param_1 + 0x150)) = 0xffffffff;
      *(undefined4 *)(iVar10 + 0x24 + *(int *)(param_1 + 0x150)) = 0;
      *(undefined4 *)(iVar10 + 0x38 + *(int *)(param_1 + 0x150)) = 0;
      *(undefined4 *)(iVar10 + 0x3c + *(int *)(param_1 + 0x150)) = 0;
      *(undefined4 *)(iVar10 + 0x40 + *(int *)(param_1 + 0x150)) = 0;
      *(undefined4 *)(iVar10 + 0x1c + *(int *)(param_1 + 0x150)) = *puVar12;
      puVar9 = (undefined4 *)(iVar2 + (int)unaff_EBP);
      puVar11 = (undefined4 *)(iVar10 + 0x28 + *(int *)(param_1 + 0x150));
      *puVar11 = *puVar9;
      puVar11[1] = puVar9[1];
      puVar11[2] = puVar9[2];
      puVar11[3] = puVar9[3];
      iVar4 = *(int *)(param_1 + 0x150) + iVar10;
      HVar5 = CoCreateInstance((IID *)(iVar4 + 0x28),(LPUNKNOWN)0x0,3,(IID *)&DAT_011f0e80,
                               (LPVOID *)(iVar4 + 0x24));
      if (HVar5 < 0) break;
      hMem = GlobalAlloc(0x40,0x10);
      pvVar6 = GlobalLock(hMem);
      if (pvVar6 == (LPVOID)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_011641e0(*(undefined4 *)(param_1 + 8),param_1);
      }
      *(undefined4 *)(iVar10 + 0x40 + *(int *)(param_1 + 0x150)) = uVar7;
      piVar1 = *(int **)(iVar10 + 0x40 + *(int *)(param_1 + 0x150));
      (**(code **)(*piVar1 + 4))(piVar1);
      *(undefined4 **)(iVar10 + 0x20 + *(int *)(param_1 + 0x150)) = puVar13;
      piVar1 = *(int **)(iVar10 + 0x24 + *(int *)(param_1 + 0x150));
      iVar4 = *(int *)(iVar10 + *(int *)(param_1 + 0x150) + 0x40);
      iVar8 = (**(code **)(*piVar1 + 0xc))(piVar1);
      if (iVar8 < 0) {
        iVar10 = (int)unaff_EBX * 0x44;
        piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x24 + iVar10);
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x150) + 0x24 + iVar10) = 0;
        piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x40 + iVar10);
        iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
        while (iVar2 != 0) {
          piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x40 + iVar10);
          iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
        }
        break;
      }
      piVar1 = *(int **)(iVar10 + 0x24 + *(int *)(param_1 + 0x150));
      iVar8 = (**(code **)(*piVar1 + 0x1c))(piVar1,1);
      if (iVar8 < 0) {
        iVar4 = iVar4 * 0x44;
        piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x24 + iVar4);
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x150) + 0x24 + iVar4) = 0;
        piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x40 + iVar4);
        iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
        while (iVar2 != 0) {
          piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x40 + iVar4);
          iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
        }
        break;
      }
      puVar11 = (undefined4 *)(iVar10 + *(int *)(param_1 + 0x150));
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 *)(iVar10 + *(int *)(param_1 + 0x150)) = 0x1c;
      iVar4 = iVar10 + *(int *)(param_1 + 0x150);
      piVar1 = *(int **)(iVar4 + 0x24);
      iVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,iVar4);
      if (iVar4 < 0) {
        iVar10 = (int)puVar12 * 0x44;
        piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x24 + iVar10);
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x150) + 0x24 + iVar10) = 0;
        piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x40 + iVar10);
        iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
        while (iVar2 != 0) {
          piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 0x40 + iVar10);
          iVar2 = (**(code **)(*piVar1 + 8))(piVar1);
        }
        break;
      }
      iVar8 = *(int *)(param_1 + 0x150) + iVar10;
      iVar4 = *(int *)(iVar8 + 8);
      if (*(int *)(iVar8 + 8) <= *(int *)(param_1 + 0x158)) {
        iVar4 = *(int *)(param_1 + 0x158);
      }
      *(int *)(param_1 + 0x158) = iVar4;
      iVar4 = *(int *)(iVar8 + 0xc);
      if (*(int *)(iVar8 + 0xc) <= *(int *)(param_1 + 0x15c)) {
        iVar4 = *(int *)(param_1 + 0x15c);
      }
      *(int *)(param_1 + 0x15c) = iVar4;
      (**(code **)(**(int **)(iVar8 + 0x24) + 8))(*(int **)(iVar8 + 0x24));
      *(undefined4 *)(iVar10 + 0x24 + *(int *)(param_1 + 0x150)) = 0;
      piVar1 = *(int **)(iVar10 + 0x40 + *(int *)(param_1 + 0x150));
      iVar4 = (**(code **)(*piVar1 + 8))(piVar1);
      while (iVar4 != 0) {
        piVar1 = *(int **)(iVar10 + 0x40 + *(int *)(param_1 + 0x150));
        iVar4 = (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar14 = (int *)((int)piVar14 + 1);
      iVar2 = iVar2 + 0x10;
      iVar10 = iVar10 + 0x44;
    } while (piVar14 < unaff_ESI);
  }
  if (unaff_EBP != (LPVOID)0x0) {
    CoTaskMemFree(unaff_EBP);
  }
  if (apuStack_14[0] != (undefined4 *)0x0) {
    *apuStack_14[0] = *(undefined4 *)(param_1 + 0x150);
  }
  return piVar14;
}


