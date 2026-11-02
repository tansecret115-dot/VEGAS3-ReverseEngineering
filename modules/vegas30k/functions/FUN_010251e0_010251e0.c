/* Module: vegas30k.dll
   Function: FUN_010251e0
   Address: 010251e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HRESULT FUN_010251e0(int *param_1,int param_2,uint param_3,IStreamVtbl *param_4,uint param_5,
                    int param_6,IStreamVtbl *param_7,IStreamVtbl *param_8)

{
  HRESULT HVar1;
  HRESULT HVar2;
  int iVar3;
  IStreamVtbl *pIVar4;
  IStreamVtbl *pIVar5;
  IStreamVtbl *pIVar6;
  int *unaff_ESI;
  LPSTREAM pIVar7;
  IStreamVtbl *pIVar8;
  IStreamVtbl *pIVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  LPSTREAM local_2c;
  LPSTREAM local_28;
  int iStack_24;
  undefined8 uStack_20;
  int iStack_18;
  int iStack_14;
  
  pIVar8 = (IStreamVtbl *)(param_3 - param_5);
  local_2c = (IStream *)0x0;
  pIVar6 = (IStreamVtbl *)(((int)param_4 - param_6) - (uint)(param_3 < param_5));
  local_28 = (IStream *)0x0;
  HVar1 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_2c);
  HVar2 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_28);
  if ((HVar1 < 0) || (HVar2 < 0)) {
    if (local_2c != (IStream *)0x0) {
      (*local_2c->lpVtbl->Release)(local_2c);
    }
    if (local_28 != (IStream *)0x0) {
      (*local_28->lpVtbl->Release)(local_28);
    }
    (**(code **)(*param_1 + 0xc))(param_1,0);
    if (-1 < HVar1) {
      HVar1 = HVar2;
    }
    return HVar1;
  }
  if ((*(int **)(param_2 + 0x60) == (int *)0x0) || (**(int **)(param_2 + 0x60) == 0))
  goto LAB_01025537;
  piVar14 = param_1;
  (**(code **)(*param_1 + 0xc))(param_1,1);
  iVar3 = _SfVideoKeyframe_Find_24(param_2,&local_2c,pIVar8,pIVar6,param_7,param_8);
  if (iVar3 < 0) {
    iStack_24 = 0;
    local_28 = (IStream *)0x0;
    _SfVideoKeyframe_FindNeighbors_20(param_2,&iStack_24,&local_28,pIVar8,pIVar6);
    if (iStack_24 < 0) {
      if ((int)local_28 < 0) {
        if (-1 < iStack_24) goto LAB_0102549b;
        iStack_24 = 0;
        local_2c = *(LPSTREAM *)(*(int *)(param_2 + 0x60) + 8);
        goto LAB_010254bd;
      }
      uStack_20 = 1.0;
      pIVar7 = (LPSTREAM)
               (*(int *)(*(int *)(param_2 + 0x60) + 4) * (int)local_28 +
               *(int *)(*(int *)(param_2 + 0x60) + 8));
      local_2c = pIVar7;
    }
    else {
      if ((int)local_28 < 1) {
LAB_0102549b:
        local_2c = (LPSTREAM)
                   (*(int *)(*(int *)(param_2 + 0x60) + 4) * iStack_24 +
                   *(int *)(*(int *)(param_2 + 0x60) + 8));
        goto LAB_010254bd;
      }
      iVar3 = *(int *)(param_2 + 0x60);
      local_2c = (LPSTREAM)(*(int *)(iVar3 + 4) * iStack_24 + *(int *)(iVar3 + 8));
      uStack_20._4_4_ = local_2c[1].lpVtbl;
      pIVar7 = (LPSTREAM)(*(int *)(iVar3 + 4) * (int)local_28 + *(int *)(iVar3 + 8));
      uStack_20._0_4_ = local_2c->lpVtbl;
      pIVar4 = pIVar7->lpVtbl;
      pIVar5 = pIVar7[1].lpVtbl;
      if ((param_7 != (IStreamVtbl *)0xffffffff) ||
         (pIVar9 = pIVar8, param_4 = pIVar6, param_8 != (IStreamVtbl *)0xffffffff)) {
        if (((int)uStack_20._4_4_ < 1) && ((int)uStack_20._4_4_ < 0)) {
          uStack_20._0_4_ = (IStreamVtbl *)0x0;
          uStack_20._4_4_ = (IStreamVtbl *)0x0;
        }
        else if (((int)param_8 <= (int)uStack_20._4_4_) &&
                (((int)param_8 < (int)uStack_20._4_4_ || (param_7 < (IStreamVtbl *)uStack_20)))) {
          uStack_20._0_4_ = param_7;
          uStack_20._4_4_ = param_8;
        }
        if (((int)pIVar5 < 1) && ((int)pIVar5 < 0)) {
          pIVar4 = (IStreamVtbl *)0x0;
          pIVar5 = (IStreamVtbl *)0x0;
        }
        else if (((int)param_8 <= (int)pIVar5) &&
                (((int)param_8 < (int)pIVar5 || (param_7 < pIVar4)))) {
          pIVar4 = param_7;
          pIVar5 = param_8;
        }
        if (((((int)uStack_20._4_4_ < (int)pIVar6) ||
             ((pIVar9 = (IStreamVtbl *)uStack_20, param_4 = uStack_20._4_4_,
              (int)uStack_20._4_4_ <= (int)pIVar6 && ((IStreamVtbl *)uStack_20 <= pIVar8)))) &&
            (pIVar9 = pIVar8, param_4 = pIVar6, (int)pIVar5 <= (int)pIVar6)) &&
           (((int)pIVar5 < (int)pIVar6 || (pIVar4 < pIVar8)))) {
          pIVar9 = pIVar4;
          param_4 = pIVar5;
        }
      }
      iStack_18 = (int)pIVar4 - (int)(IStreamVtbl *)uStack_20;
      iStack_14 = (int)pIVar5 + (-(uint)(pIVar4 < (IStreamVtbl *)uStack_20) - (int)uStack_20._4_4_);
      if (iStack_18 == 0 && iStack_14 == 0) {
        uStack_20 = 0.0;
      }
      else {
        uStack_20 = (double)CONCAT44((int)param_4 +
                                     (-(uint)(pIVar9 < (IStreamVtbl *)uStack_20) -
                                     (int)uStack_20._4_4_),
                                     (int)pIVar9 - (int)(IStreamVtbl *)uStack_20);
        uStack_20 = (double)(longlong)uStack_20 / (double)CONCAT44(iStack_14,iStack_18);
        switch(local_2c[6].lpVtbl) {
        case (IStreamVtbl *)0x1:
          if (_DAT_011dad58 <= uStack_20) {
            uStack_20 = _DAT_011dad58;
          }
          else {
            uStack_20 = _DAT_011db3f0;
          }
          break;
        case (IStreamVtbl *)0x2:
          uStack_20 = uStack_20 * uStack_20;
          break;
        case (IStreamVtbl *)0x3:
          uStack_20 = _DAT_011dad58 - (_DAT_011dad58 - uStack_20) * (_DAT_011dad58 - uStack_20);
          break;
        case (IStreamVtbl *)0x4:
          uStack_20 = (_DAT_011dba48 - (uStack_20 + uStack_20)) * uStack_20 * uStack_20;
        }
      }
    }
  }
  else {
LAB_010254bd:
    uStack_20 = 0.0;
    pIVar7 = local_2c;
  }
  (**(code **)(*unaff_ESI + 0x10))(unaff_ESI,local_2c[5].lpVtbl,local_2c[4].lpVtbl,0);
  piVar13 = (int *)0x0;
  (**(code **)(*piVar14 + 0x10))(piVar14,pIVar7[5].lpVtbl,pIVar7[4].lpVtbl);
  uVar12 = 0;
  (**(code **)(*piVar13 + 0x14))(piVar13,0,0,0);
  uVar11 = 0;
  uVar10 = 0;
  (**(code **)(iRam00000000 + 0x14))(0,0,0,0,0);
  (**(code **)(*param_1 + 0x1c))(param_1,uVar10,uVar11);
  (**(code **)(*param_1 + 0x20))(param_1,piVar13,uVar12);
LAB_01025537:
  (*local_2c->lpVtbl->Release)(local_2c);
  (*local_2c->lpVtbl->Release)(local_2c);
  return 0;
}


