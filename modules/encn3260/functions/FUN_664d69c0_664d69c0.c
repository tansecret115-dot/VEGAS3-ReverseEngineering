/* Module: encn3260.dll
   Function: FUN_664d69c0
   Address: 664d69c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d69c0(void *this,char *param_1)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_8;
  
  iVar6 = 0;
  iVar9 = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(char **)((int)this + 4) = param_1;
  local_8 = 1;
  do {
    iVar6 = iVar6 + 1;
    cVar5 = *param_1;
    pcVar3 = param_1;
    while (cVar5 != '\0') {
      do {
        if ((cVar5 != '/') && (cVar5 != '\\')) break;
        cVar5 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      } while (cVar5 != '\0');
      cVar5 = *pcVar3;
      bVar2 = false;
      if (((cVar5 != '\0') && (cVar5 != '/')) && (cVar5 != '\\')) {
        if (iVar6 == 2) {
          *(char **)(*(int *)((int)this + 0xc) + iVar9 * 8) = pcVar3;
        }
        else {
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
      }
      cVar5 = *pcVar3;
      while (((cVar5 != '\0' && (cVar5 != '/')) && (cVar5 != '\\'))) {
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
        bVar2 = true;
        cVar5 = *pcVar1;
      }
      if ((iVar6 == 2) && (bVar2)) {
        iVar9 = iVar9 + 1;
        *(char **)(*(int *)((int)this + 0xc) + -4 + iVar9 * 8) = pcVar3;
      }
      local_8 = iVar9;
      cVar5 = *pcVar3;
    }
    if (iVar6 == 2) {
      return;
    }
    iVar8 = *(int *)((int)this + 0xc);
    if (iVar8 != 0) {
      iVar10 = *(int *)(iVar8 + -4);
      puVar7 = (undefined4 *)(iVar8 + iVar10 * 8);
      if (-1 < iVar10 + -1) {
        do {
          puVar7 = puVar7 + -2;
          FUN_664d6950(puVar7);
          iVar10 = iVar10 + -1;
          iVar9 = local_8;
        } while (iVar10 != 0);
      }
      operator_delete((void *)(iVar8 + -4));
    }
    iVar8 = *(int *)((int)this + 8);
    iVar10 = iVar8 + 1;
    *(int *)((int)this + 8) = iVar10;
    piVar4 = operator_new(iVar10 * 8 + 4);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = iVar10;
      piVar4 = piVar4 + 1;
      iVar9 = local_8;
      if (-1 < iVar8) {
        iVar8 = iVar8 + 1;
        piVar11 = piVar4;
        do {
          FUN_664cf1f0(piVar11);
          piVar11 = piVar11 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    *(int **)((int)this + 0xc) = piVar4;
    *piVar4 = *(int *)this;
    *(int *)(*(int *)((int)this + 0xc) + 4) = *(int *)this + 1;
  } while( true );
}


