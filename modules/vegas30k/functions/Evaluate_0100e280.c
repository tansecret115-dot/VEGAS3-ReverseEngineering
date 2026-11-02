/* Module: vegas30k.dll
   Function: Evaluate
   Address: 0100e280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: long __thiscall CSfXSpline::Evaluate(double,struct tSFXSPLINEPOINT *,struct
   tSFXSPLINEPOINT *) */

long __thiscall
CSfXSpline::Evaluate
          (CSfXSpline *this,double param_1,tSFXSPLINEPOINT *param_2,tSFXSPLINEPOINT *param_3)

{
  undefined1 *puVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  undefined4 *puVar11;
  float10 fVar12;
  double dVar13;
  undefined1 *apuStack_190 [5];
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  double *pdStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_140 [24];
  double adStack_128 [2];
  double adStack_118 [3];
  undefined1 auStack_100 [8];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  double dStack_f0;
  undefined1 auStack_e8 [24];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [24];
  undefined4 auStack_a0 [10];
  undefined4 auStack_78 [29];
  
                    /* 0xe280  69  ?Evaluate@CSfXSpline@@QAEJNPAUtSFXSPLINEPOINT@@0@Z */
  if (*(int *)(this + 0x14) != 0) {
    uStack_16c = *(undefined4 *)(this + 0x10);
    uStack_170 = *(undefined4 *)(this + 0xc);
    pdStack_174 = (double *)0x100e2af;
    iVar3 = (**(code **)this)();
    puVar9 = (undefined1 *)0x0;
    if (0 < iVar3) {
      do {
        uStack_17c = *(undefined4 *)(this + 0x10);
        apuStack_190[4] = *(undefined1 **)(this + 0xc);
        pdStack_174 = adStack_128;
        apuStack_190[3] = (undefined1 *)0x100e2c8;
        puStack_178 = puVar9;
        iVar4 = (**(code **)(this + 4))();
        if ((iVar4 < 0) || (param_1 < adStack_128[0])) break;
        puVar9 = puVar9 + 1;
      } while ((int)puVar9 < iVar3);
    }
    puVar1 = (undefined1 *)(iVar3 + -1);
    if ((int)puVar1 <= (int)puVar9) {
      puVar9 = puVar1;
    }
    if (iVar3 != 0) {
      puStack_178 = puVar9 + -2;
      if ((int)puStack_178 < 0) {
        puStack_178 = (undefined1 *)0x0;
      }
      else if ((int)puVar1 < (int)puStack_178) {
        puStack_178 = puVar1;
      }
      apuStack_190[4] = *(undefined1 **)(this + 0xc);
      pdStack_174 = (double *)auStack_100;
      uStack_17c = *(undefined4 *)(this + 0x10);
      apuStack_190[3] = (undefined1 *)0x100e31a;
      (**(code **)(this + 4))();
      pdVar2 = pdStack_174;
      apuStack_190[2] = puVar9 + -1;
      if ((int)apuStack_190[2] < 0) {
        apuStack_190[2] = (undefined1 *)0x0;
      }
      else if ((int)pdStack_174 < (int)apuStack_190[2]) {
        apuStack_190[2] = (undefined1 *)pdStack_174;
      }
      apuStack_190[0] = *(undefined1 **)(this + 0xc);
      apuStack_190[3] = auStack_e8;
      apuStack_190[1] = *(undefined1 **)(this + 0x10);
      (**(code **)(this + 4))();
      if ((int)puVar9 < 0) {
        pdVar5 = (double *)(undefined1 *)0x0;
      }
      else {
        pdVar5 = pdVar2;
        if ((int)puVar9 <= (int)pdVar2) {
          pdVar5 = (double *)puVar9;
        }
      }
      puVar8 = &uStack_d0;
      (**(code **)(this + 4))
                (*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10),pdVar5,puVar8);
      pdVar6 = (double *)(puVar9 + 1);
      if ((int)pdVar6 < 0) {
        pdVar6 = (double *)(undefined1 *)0x0;
      }
      else if ((int)pdVar2 < (int)pdVar6) {
        pdVar6 = pdVar2;
      }
      (**(code **)(this + 4))
                (*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10),pdVar6,auStack_b8);
      puVar7 = (undefined4 *)FUN_0100dfe0(apuStack_190,auStack_140,adStack_118,&dStack_f0,0);
      puVar11 = (undefined4 *)&stack0xfffffe98;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar7 = (undefined4 *)&stack0xfffffe98;
      puVar11 = auStack_a0;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar7 = (undefined4 *)FUN_0100dfe0(apuStack_190,auStack_c8,&dStack_f0,adStack_118,0);
      dVar13 = (double)CONCAT44(uStack_f4,uStack_f8);
      puVar11 = (undefined4 *)&stack0xfffffe98;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar7 = (undefined4 *)&stack0xfffffe98;
      puVar11 = auStack_78;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      if (dVar13 < _DAT_011dad58) {
        puVar7 = (undefined4 *)
                 FUN_0100dcf0(&stack0xfffffe98,adStack_118,&dStack_f0,0x55555555,0x3fd55555);
        puVar11 = (undefined4 *)&stack0xfffffe98;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar7 = (undefined4 *)&stack0xfffffe98;
        ppuVar10 = apuStack_190;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppuVar10 = (undefined1 *)*puVar7;
          puVar7 = puVar7 + 1;
          ppuVar10 = ppuVar10 + 1;
        }
        puVar7 = (undefined4 *)
                 FUN_0100dcf0(&stack0xfffffe98,apuStack_190,auStack_a0,uStack_f8,uStack_f4);
        ppuVar10 = apuStack_190;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppuVar10 = (undefined1 *)*puVar7;
          puVar7 = puVar7 + 1;
          ppuVar10 = ppuVar10 + 1;
        }
        ppuVar10 = apuStack_190;
        puVar7 = auStack_a0;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *ppuVar10;
          ppuVar10 = ppuVar10 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      if ((double)CONCAT44(uStack_cc,uStack_d0) < _DAT_011dad58) {
        puVar7 = (undefined4 *)
                 FUN_0100dcf0(apuStack_190,&dStack_f0,adStack_118,0x55555555,0x3fd55555);
        ppuVar10 = apuStack_190;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppuVar10 = (undefined1 *)*puVar7;
          puVar7 = puVar7 + 1;
          ppuVar10 = ppuVar10 + 1;
        }
        ppuVar10 = apuStack_190;
        puVar7 = (undefined4 *)&stack0xfffffe98;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *ppuVar10;
          ppuVar10 = ppuVar10 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar7 = (undefined4 *)
                 FUN_0100dcf0(apuStack_190,&stack0xfffffe98,auStack_78,uStack_d0,uStack_cc);
        ppuVar10 = apuStack_190;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppuVar10 = (undefined1 *)*puVar7;
          puVar7 = puVar7 + 1;
          ppuVar10 = ppuVar10 + 1;
        }
        ppuVar10 = apuStack_190;
        puVar7 = auStack_78;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *ppuVar10;
          ppuVar10 = ppuVar10 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      dVar13 = 0.0;
      if (_DAT_011db3f0 < dStack_f0 - adStack_118[0]) {
        dVar13 = (param_1 - adStack_118[0]) / (dStack_f0 - adStack_118[0]);
        if (*(code **)(this + 8) != (code *)0x0) {
          fVar12 = (float10)(**(code **)(this + 8))
                                      (*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10),
                                       (uint)puVar8 & ((int)puVar8 < 1) - 1,dVar13);
          dVar13 = (double)fVar12;
        }
      }
      puVar8 = (undefined4 *)
               FUN_0100dd70(apuStack_190,adStack_118,auStack_a0,auStack_78,&dStack_f0,
                            SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20),param_3);
      ppuVar10 = apuStack_190;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppuVar10 = (undefined1 *)*puVar8;
        puVar8 = puVar8 + 1;
        ppuVar10 = ppuVar10 + 1;
      }
      ppuVar10 = apuStack_190;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 **)param_2 = *ppuVar10;
        ppuVar10 = ppuVar10 + 1;
        param_2 = param_2 + 4;
      }
      return (long)(undefined1 *)pdVar5;
    }
  }
  return -0x7fffbffb;
}


