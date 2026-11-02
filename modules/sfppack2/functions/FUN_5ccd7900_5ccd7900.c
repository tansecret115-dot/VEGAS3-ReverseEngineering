/* Module: sfppack2.dll
   Function: FUN_5ccd7900
   Address: 5ccd7900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5ccd7900(void *this,int param_1)

{
  double dVar1;
  float10 fVar2;
  double dVar3;
  HGLOBAL pvVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  LPCVOID pMem;
  double *pdVar9;
  int iVar10;
  double dVar11;
  int iVar12;
  void *pvStack_314;
  int iStack_310;
  undefined8 uStack_30c;
  void *local_300;
  undefined1 local_2fc [164];
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208 [516];
  
  local_258 = 0x14;
  local_254 = 0x1c;
  local_250 = 0x28;
  local_24c = 0x38;
  local_248 = 0x50;
  local_244 = 0x71;
  local_240 = 0xa0;
  local_23c = 0xe2;
  local_238 = 0x140;
  local_234 = 0x1c4;
  local_230 = 0x280;
  local_22c = 0x389;
  local_228 = 0x500;
  local_224 = 0x712;
  local_220 = 0xa00;
  local_21c = 0xe24;
  local_218 = 0x1400;
  local_214 = 0x1c48;
  local_210 = 0x2800;
  local_20c = 0x3891;
  local_300 = this;
  (**(code **)(**(int **)((int)this + 0x2c) + 0xdc))
            (*(int **)((int)this + 0x2c),local_208,local_2fc);
  (**(code **)(**(int **)((int)this + 0x2c) + 0xd4))(*(int **)((int)this + 0x2c),&pvStack_314);
  pvVar4 = GlobalAlloc(0x42,40000);
  pdVar5 = GlobalLock(pvVar4);
  FUN_5ccd4870(pdVar5,5000,(int)&local_21c,iStack_310);
  iVar12 = 0;
  do {
    iVar6 = ftol();
    iVar7 = ftol();
    if (iVar12 <= param_1) {
      iVar6 = 0;
      iVar7 = iVar7 + -1;
    }
    if (iVar12 == 0x13) {
      iVar7 = 4999;
    }
    if (4999 < iVar6) {
      iVar6 = 4999;
    }
    if (4999 < iVar7) {
      iVar7 = 4999;
    }
    *(undefined4 *)(&uStack_30c + iVar12) = 0;
    *(undefined4 *)((int)&uStack_30c + iVar12 * 8 + 4) = 0;
    dVar11 = 0.0;
    dVar1 = _DAT_5cd51508;
    if (iVar7 < iVar6) {
LAB_5ccd7b52:
      (&uStack_30c)[iVar12] = (double)(&uStack_30c)[iVar12] / (double)((iVar7 - iVar6) + 1);
      dVar3 = dVar1;
    }
    else {
      pdVar9 = pdVar5 + iVar6;
      iVar10 = (iVar7 - iVar6) + 1;
      do {
        (&uStack_30c)[iVar12] = (double)(&uStack_30c)[iVar12] + *pdVar9;
        if (dVar11 < *pdVar9) {
          dVar11 = *pdVar9;
        }
        if (*pdVar9 < dVar1) {
          dVar1 = *pdVar9;
        }
        pdVar9 = pdVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      this = pvStack_314;
      dVar3 = dVar11;
      if (iVar6 != iVar7) goto LAB_5ccd7b52;
    }
    if (dVar3 == _DAT_5cd51520) {
LAB_5ccd7bbc:
      *(undefined4 *)(&uStack_30c + iVar12) = 0;
      *(undefined4 *)((int)&uStack_30c + iVar12 * 8 + 4) = 0xc07e0000;
    }
    else {
      if (dVar11 < _DAT_5cd51510 / dVar3) {
        dVar11 = dVar3;
      }
      if (dVar11 == _DAT_5cd51520) goto LAB_5ccd7bbc;
      fVar2 = (float10)log2((float10)dVar11);
      (&uStack_30c)[iVar12] = (double)((float10)0.3010299956639812 * fVar2 * (float10)_DAT_5cd51bd0)
      ;
    }
    iVar12 = iVar12 + 1;
    if (0x13 < iVar12) {
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x20))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x28))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x30))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x38))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x40))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x48))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x50))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x58))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x60))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x68))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x70))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x78))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x80))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x88))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x90))(*(int **)((int)this + 0x2c),uVar8);
      pMem = (LPCVOID)ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0x98))(*(int **)((int)this + 0x2c));
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0xa0))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0xa8))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0xb0))(*(int **)((int)this + 0x2c),uVar8);
      uVar8 = ftol();
      (**(code **)(**(int **)((int)this + 0x2c) + 0xb8))(*(int **)((int)this + 0x2c),uVar8);
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      return;
    }
  } while( true );
}


