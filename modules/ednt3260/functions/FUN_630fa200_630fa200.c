/* Module: ednt3260.dll
   Function: FUN_630fa200
   Address: 630fa200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_630fa200(void *param_1)

{
  double dVar1;
  undefined2 uVar2;
  int iVar3;
  ushort *puVar4;
  double *pdVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  double local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  FUN_630fa550((int)param_1);
  iVar6 = 0;
  do {
    if (*(short *)((int)param_1 + 0x630a) == 0) {
      iVar3 = iVar6 * 0x30;
      dVar1 = *(double *)(iVar3 + 0x18da + (int)param_1);
      if ((*(short *)((int)param_1 + 0x6312) != 0) &&
         (dVar1 < *(double *)((int)param_1 + iVar3 + 0x18ea))) {
        dVar1 = *(double *)((int)param_1 + iVar3 + 0x18ea);
      }
      local_1c = *(double *)((int)param_1 + iVar3 + 0x18e2);
    }
    else {
      dVar1 = *(double *)(iVar6 * 0x30 + 0x18da + (int)param_1);
      if (1 < *(short *)((int)param_1 + 0x6346)) {
        pdVar5 = (double *)((int)param_1 + iVar6 * 0x30 + 0x18e2);
        iVar3 = *(short *)((int)param_1 + 0x6346) + -1;
        do {
          if (dVar1 < *pdVar5) {
            dVar1 = *pdVar5;
          }
          pdVar5 = pdVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    fVar7 = FUN_630f96e0(SUB84(dVar1 * _DAT_63102be8,0),
                         (int)((ulonglong)(dVar1 * _DAT_63102be8) >> 0x20),0x30);
    if (*(short *)((int)param_1 + 0x630a) == 0) {
      fVar8 = FUN_630f96e0(SUB84(local_1c * _DAT_63102be8,0),
                           (int)((ulonglong)(local_1c * _DAT_63102be8) >> 0x20),0x30);
      local_1c = (double)fVar8;
    }
    pdVar5 = (double *)((int)param_1 + 0x19fa);
    FUN_630faba0(*(double **)((int)param_1 + 0x16),(double)fVar7,(double *)((int)param_1 + 0x1a02),
                 pdVar5,(short *)((int)param_1 + 0x1a0a));
    FUN_630fad10((double)CONCAT44(*(undefined4 *)((int)param_1 + iVar6 * 8 + 0x1a5a),
                                  *(undefined4 *)((int)param_1 + iVar6 * 8 + 0x1a56)),pdVar5,
                 (double *)((int)param_1 + 0x1a2e),(short *)((int)param_1 + 0x1a36));
    uVar2 = FUN_630faed0();
    *(undefined2 *)((int)param_1 + iVar6 * 2 + 0x63cc) = uVar2;
    if (iVar6 == 0) {
      local_c = *(undefined4 *)pdVar5;
      uStack_8 = *(undefined4 *)((int)param_1 + 0x19fe);
    }
    else if (*pdVar5 < (double)CONCAT44(uStack_8,local_c)) {
      local_c = *(undefined4 *)pdVar5;
      uStack_8 = *(undefined4 *)((int)param_1 + 0x19fe);
    }
    if (*(short *)((int)param_1 + 0x630a) == 0) {
      pdVar5 = (double *)((int)param_1 + 0x1a0c);
      FUN_630faba0(*(double **)((int)param_1 + 0x16),local_1c,(double *)((int)param_1 + 0x1a14),
                   pdVar5,(short *)((int)param_1 + 0x1a1c));
      FUN_630fad10((double)CONCAT44(*(undefined4 *)((int)param_1 + iVar6 * 8 + 0x1a8a),
                                    *(undefined4 *)((int)param_1 + iVar6 * 8 + 0x1a86)),pdVar5,
                   (double *)((int)param_1 + 0x1a38),(short *)((int)param_1 + 0x1a40));
      uVar2 = FUN_630faed0();
      *(undefined2 *)((int)param_1 + iVar6 * 2 + 0x63e4) = uVar2;
      if (iVar6 == 0) {
        local_14 = *(undefined4 *)pdVar5;
        uStack_10 = *(undefined4 *)((int)param_1 + 0x1a10);
      }
      else if (*pdVar5 < (double)CONCAT44(uStack_10,local_14)) {
        local_14 = *(undefined4 *)pdVar5;
        uStack_10 = *(undefined4 *)((int)param_1 + 0x1a10);
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  FUN_630face0((double)CONCAT44(uStack_8,local_c),(double *)((int)param_1 + 0x1a1e));
  FUN_630fadd0(param_1,(double *)((int)param_1 + 0x1a56),(double *)((int)param_1 + 0x1a1e),
               (double *)((int)param_1 + 0x1a42),(short *)((int)param_1 + 0x1a4a));
  uVar2 = FUN_630faf60();
  *(undefined2 *)((int)param_1 + 0x6318) = uVar2;
  if (*(short *)((int)param_1 + 0x630a) == 0) {
    FUN_630face0((double)CONCAT44(uStack_10,local_14),(double *)((int)param_1 + 0x1a26));
    FUN_630fadd0(param_1,(double *)((int)param_1 + 0x1a86),(double *)((int)param_1 + 0x1a26),
                 (double *)((int)param_1 + 0x1a4c),(short *)((int)param_1 + 0x1a54));
    uVar2 = FUN_630faf60();
    *(undefined2 *)((int)param_1 + 0x6328) = uVar2;
  }
  if (*(short *)((int)param_1 + 0x63cc) == 0) {
    *(undefined2 *)((int)param_1 + 0x63c0) = 0;
  }
  else {
    *(undefined2 *)((int)param_1 + 0x63c0) = 1;
  }
  puVar4 = (ushort *)((int)param_1 + 0x63c2);
  iVar6 = 5;
  do {
    *puVar4 = (ushort)(puVar4[6] != puVar4[5]);
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (*(short *)((int)param_1 + 0x630a) == 0) {
    if (*(short *)((int)param_1 + 0x63e4) == 0) {
      *(undefined2 *)((int)param_1 + 0x63d8) = 0;
    }
    else {
      *(undefined2 *)((int)param_1 + 0x63d8) = 1;
    }
    puVar4 = (ushort *)((int)param_1 + 0x63da);
    iVar6 = 5;
    do {
      *puVar4 = (ushort)(puVar4[6] != puVar4[5]);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined2 *)((int)param_1 + 0x6316) = 1;
  if (*(short *)((int)param_1 + 0x630a) == 0) {
    *(undefined2 *)((int)param_1 + 0x6326) = 1;
  }
  return;
}


