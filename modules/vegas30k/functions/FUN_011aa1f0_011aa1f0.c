/* Module: vegas30k.dll
   Function: FUN_011aa1f0
   Address: 011aa1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_011aa1f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  HGLOBAL hMem;
  LPVOID pvVar9;
  int *piVar10;
  undefined4 *puVar11;
  code *pcVar12;
  int *unaff_ESI;
  int *unaff_EDI;
  uint uVar13;
  uint uVar14;
  uint uStack_230;
  int *piVar15;
  int *piStack_214;
  undefined1 auStack_210 [4];
  int local_20c;
  undefined4 local_208;
  undefined1 auStack_120 [264];
  uint uStack_18;
  uint uStack_14;
  
  _mbscpy((uchar *)(param_1 + 0x4fc),(uchar *)"Multiple stereo");
  piVar15 = *(int **)(param_1 + 0x664);
  local_20c = 0;
  local_208 = 0;
  if (piVar15 == (int *)0x0) {
    piVar15 = *(int **)(param_1 + 0x668);
    if (piVar15 == (int *)0x0) {
      piVar15 = *(int **)(param_1 + 0x66c);
      piVar10 = &local_20c;
      piVar4 = (int *)(**(code **)(*piVar15 + 0x68))();
    }
    else {
      piVar10 = &local_20c;
      piVar4 = (int *)(**(code **)(*piVar15 + 100))();
    }
  }
  else {
    piVar10 = &local_20c;
    piVar4 = (int *)(**(code **)(*piVar15 + 0x58))();
  }
  if ((int)piVar4 < 0) {
    return piVar4;
  }
  iVar5 = (**(code **)(*piStack_214 + 0xc))();
  while (iVar5 == 0) {
    (**(code **)(*unaff_ESI + 8))();
    iVar5 = (**(code **)(*piVar10 + 0xc))(piVar10,1);
  }
  (**(code **)(*unaff_EDI + 8))();
  puVar11 = *(undefined4 **)(param_1 + 0x674);
  *(uint *)(param_1 + 0x604) = uStack_18;
  *(uint *)(param_1 + 0x608) = uStack_14;
  *(undefined4 *)(param_1 + 0x60c) = 0;
  *(undefined4 *)(param_1 + 0x610) = 0;
  pcVar12 = calloc_exref;
  if (uStack_14 == 0) {
    uStack_14 = 1;
  }
  else if (0x20 < uStack_14) {
    uStack_14 = 0x20;
  }
  pvVar6 = calloc(1,uStack_14 * 4);
  if (pvVar6 == (void *)0x0) {
    return (int *)0x8007000e;
  }
  uStack_230 = 0;
  if (uStack_14 != 0) {
    do {
      uVar7 = (*pcVar12)();
      *(undefined4 *)((int)pvVar6 + uStack_230 * 4) = uVar7;
      iVar5 = *(int *)((int)pvVar6 + uStack_230 * 4);
      if (iVar5 == 0) goto LAB_011aa57e;
      *(uint *)(iVar5 + 4) = uStack_18;
      uVar7 = (*pcVar12)();
      *(undefined4 *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc) = uVar7;
      if (*(int *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc) == 0) {
        free(*(void **)((int)pvVar6 + uStack_230 * 4));
        *(undefined4 *)((int)pvVar6 + uStack_230 * 4) = 0;
        goto LAB_011aa57e;
      }
      uVar13 = 0;
      if (uStack_18 != 0) {
        do {
          pvVar8 = calloc(1,8);
          *(void **)(*(int *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc) + uVar13 * 4) = pvVar8;
          puVar1 = *(uint **)(*(int *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc) + uVar13 * 4);
          pcVar12 = free_exref;
          if (puVar1 == (uint *)0x0) goto joined_r0x011aa520;
          *puVar1 = uVar13;
          *(uint *)(*(int *)(*(int *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc) + uVar13 * 4) +
                   4) = uVar13;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uStack_18);
      }
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = *(undefined4 **)(param_1 + 0x674);
      }
      **(undefined4 **)((int)pvVar6 + uStack_230 * 4) = *puVar11;
      *(undefined4 *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0x10) = 0;
      puVar11 = (undefined4 *)puVar11[6];
      uStack_230 = uStack_230 + 1;
      pcVar12 = calloc_exref;
    } while (uStack_230 < uStack_14);
  }
  uStack_230 = 0;
  pcVar12 = free_exref;
  if (uStack_14 != 0) {
    do {
      hMem = GlobalAlloc(0x40,0x670);
      pvVar9 = GlobalLock(hMem);
      if ((pvVar9 == (LPVOID)0x0) || (piVar10 = (int *)FUN_0119fb20(), piVar10 == (int *)0x0))
      goto LAB_011aa57e;
      (**(code **)(*piVar10 + 0x120))();
      (**(code **)(*piVar10 + 0x90))(piVar10,0xf);
      (**(code **)(*piVar10 + 0x90))(piVar10,0x40,param_1 + 0x20);
      uVar13 = uStack_18;
      iVar5 = FUN_0119fcb0();
      if (iVar5 != 0) {
        puVar11 = calloc(1,0x1c);
        if (puVar11 == (undefined4 *)0x0) {
          piVar15 = (int *)0x8007000e;
          pcVar12 = free_exref;
          if (piVar10 != (int *)0x0) {
            (**(code **)(*piVar10 + 0x118))();
            pcVar12 = free_exref;
          }
          goto LAB_011aa58c;
        }
        *puVar11 = piVar10;
        (**(code **)(*piVar10 + 4))();
        puVar11[1] = piVar10;
        puVar11[2] = 1;
        puVar11[3] = 0x80000000;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        iVar5 = *(int *)(param_1 + 0x674);
        if (iVar5 == 0) {
          *(undefined4 **)(param_1 + 0x674) = puVar11;
        }
        else {
          for (iVar2 = *(int *)(iVar5 + 0x18); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
            iVar5 = iVar2;
          }
          *(undefined4 **)(iVar5 + 0x18) = puVar11;
        }
        piVar15 = (int *)**(undefined4 **)((int)pvVar6 + (int)auStack_210 * 4);
        (**(code **)(*piVar15 + 0xc))(piVar15,auStack_120);
        if (unaff_EDI < (int *)0x1a) {
          cVar3 = (char)unaff_EDI + 'A';
        }
        else {
          cVar3 = (char)unaff_EDI + 'G';
        }
        SfPrintF(&stack0xfffffdd4,"BUS %c",(int)cVar3);
        (**(code **)(*piVar10 + 0x10))(piVar10,&stack0xfffffdd4);
        *(int *)(param_1 + 0x67c) = *(int *)(param_1 + 0x67c) + 1;
        (**(code **)(*piVar10 + 0x90))(piVar10,0x33,&stack0xfffffdb8);
        uVar13 = uStack_18;
      }
      uVar14 = 0;
      if (uVar13 != 0) {
        do {
          free(*(void **)(*(int *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc) + uVar14 * 4));
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar13);
      }
      pcVar12 = free_exref;
      free(*(void **)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc));
      free(*(void **)((int)pvVar6 + uStack_230 * 4));
      piVar15 = (int *)0x0;
      *(undefined4 *)((int)pvVar6 + uStack_230 * 4) = 0;
      uStack_230 = uStack_230 + 1;
    } while (uStack_230 < uStack_14);
  }
  (*pcVar12)();
  return piVar15;
LAB_011aa57e:
  piVar15 = (int *)0x8007000e;
  pcVar12 = free_exref;
  goto LAB_011aa58c;
joined_r0x011aa520:
  while (free_exref = pcVar12, uVar13 != 0) {
    uVar13 = uVar13 - 1;
    free(*(void **)(*(int *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc) + uVar13 * 4));
    pcVar12 = free_exref;
  }
  free(*(void **)((int)pvVar6 + uStack_230 * 4));
  piVar15 = (int *)0x8007000e;
  *(undefined4 *)((int)pvVar6 + uStack_230 * 4) = 0;
LAB_011aa58c:
  uStack_230 = 0;
  do {
    iVar5 = *(int *)((int)pvVar6 + uStack_230 * 4);
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0xc) != 0) {
        uVar13 = 0;
        if (uStack_18 != 0) {
          do {
            if (*(int *)(*(int *)(*(int *)((int)pvVar6 + uStack_230 * 4) + 0xc) + uVar13 * 4) != 0)
            {
              (*pcVar12)();
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uStack_18);
        }
        (*pcVar12)();
      }
      (*pcVar12)();
      *(undefined4 *)((int)pvVar6 + uStack_230 * 4) = 0;
    }
    uStack_230 = uStack_230 + 1;
  } while (uStack_230 < uStack_14);
  iVar5 = *(int *)(param_1 + 0x674);
  while (iVar5 != 0) {
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x674) + 8))();
    iVar5 = *(int *)(*(int *)(param_1 + 0x674) + 0x18);
    (*pcVar12)();
    *(int *)(param_1 + 0x674) = iVar5;
  }
  *(undefined4 *)(param_1 + 0x674) = 0;
  return piVar15;
}


