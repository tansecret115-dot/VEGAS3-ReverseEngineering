/* Module: g2plug.dll
   Function: FUN_5f864b00
   Address: 5f864b00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f864b00(int param_1)

{
  int *piVar1;
  int iVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint unaff_retaddr;
  
  uVar6 = 0;
  if ((param_1 == 0) || (piVar1 = *(int **)(param_1 + 4), piVar1 == (int *)0x0)) {
    return 0xffffffff;
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    return *(uint *)(param_1 + 0x70);
  }
  iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    uVar7 = (**(code **)(*piVar1 + 0x18))(piVar1,*(undefined4 *)(param_1 + 4));
    unaff_retaddr = uVar7;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(uint *)(param_1 + 0x70) = uVar7 + iVar2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  hMem = GlobalAlloc(0x42,(uVar7 + iVar2) * 0x3c);
  pvVar3 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x6c) = pvVar3;
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar2 = 0;
    while( true ) {
      *(undefined4 *)(iVar2 + 0x1c + *(int *)(param_1 + 0x6c)) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0x20 + *(int *)(param_1 + 0x6c)) = 0;
      *(undefined4 *)(iVar2 + 0x34 + *(int *)(param_1 + 0x6c)) = 0;
      *(undefined4 *)(iVar2 + 0x38 + *(int *)(param_1 + 0x6c)) = 0;
      if (uVar6 < uVar7) {
        iVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))
                          (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),uVar6,
                           iVar2 + 0x20 + *(int *)(param_1 + 0x6c));
      }
      else {
        iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x70))
                          (*(int **)(param_1 + 4),uVar6 - uVar7,
                           iVar2 + 0x20 + *(int *)(param_1 + 0x6c));
      }
      if (iVar4 < 0) {
        return uVar6 - 1;
      }
      *(uint *)(iVar2 + 0x1c + *(int *)(param_1 + 0x6c)) = uVar6;
      if (uVar7 <= uVar6) {
        piVar1 = *(int **)(iVar2 + 0x20 + *(int *)(param_1 + 0x6c));
        (**(code **)(*piVar1 + 0x38))
                  (piVar1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                   *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                   *(undefined4 *)(param_1 + 0x44));
      }
      piVar1 = *(int **)(iVar2 + 0x20 + *(int *)(param_1 + 0x6c));
      iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x80));
      if (iVar4 < 0) break;
      piVar1 = *(int **)(iVar2 + 0x20 + *(int *)(param_1 + 0x6c));
      iVar4 = param_1;
      if (uVar6 < uVar7) {
        iVar4 = param_1 + 0x10;
      }
      iVar4 = (**(code **)(*piVar1 + 0x1c))(piVar1,1,iVar4);
      if (iVar4 < 0) break;
      puVar8 = (undefined4 *)(iVar2 + *(int *)(param_1 + 0x6c));
      for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x6c)) = 0x1c;
      iVar4 = *(int *)(param_1 + 0x6c) + iVar2;
      piVar1 = *(int **)(iVar4 + 0x20);
      iVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,iVar4);
      if (iVar4 < 0) break;
      iVar5 = *(int *)(param_1 + 0x6c) + iVar2;
      iVar4 = *(int *)(iVar5 + 8);
      if (iVar4 <= *(int *)(param_1 + 0x74)) {
        iVar4 = *(int *)(param_1 + 0x74);
      }
      *(int *)(param_1 + 0x74) = iVar4;
      iVar4 = *(int *)(iVar5 + 0xc);
      if (iVar4 <= *(int *)(param_1 + 0x78)) {
        iVar4 = *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x78) = iVar4;
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + 0x3c;
      uVar7 = unaff_retaddr;
      if (*(uint *)(param_1 + 0x70) <= uVar6) {
        return uVar6;
      }
    }
    piVar1 = *(int **)(uVar6 * 0x3c + 0x20 + *(int *)(param_1 + 0x6c));
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(uVar6 * 0x3c + 0x20 + *(int *)(param_1 + 0x6c)) = 0;
  }
  return uVar6;
}


