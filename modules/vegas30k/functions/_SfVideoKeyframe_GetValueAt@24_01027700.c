/* Module: vegas30k.dll
   Function: _SfVideoKeyframe_GetValueAt@24
   Address: 01027700
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint _SfVideoKeyframe_GetValueAt_24
               (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  ULARGE_INTEGER *pUVar1;
  uint uVar2;
  int iVar3;
  HRESULT HVar4;
  uint *puVar5;
  ULARGE_INTEGER *pUVar6;
  uint uVar7;
  ULARGE_INTEGER *pUVar8;
  uint uVar9;
  int iVar10;
  int unaff_EBX;
  int *unaff_EBP;
  uint *puVar11;
  IStream *unaff_EDI;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  LPSTREAM local_18;
  undefined8 local_14;
  ULARGE_INTEGER *local_c;
  uint local_8;
  int local_4;
  
                    /* 0x27700  1258  _SfVideoKeyframe_GetValueAt@24 */
  iVar10 = *(int *)(param_1 + 0x60);
  local_18 = (IStream *)0x0;
  local_14._0_4_ = (ULARGE_INTEGER *)0x0;
  local_14._4_4_ = 0;
  iVar3 = _SfVideoKeyframe_Find_24(param_1,&local_8,param_3,param_4,param_5,param_6);
  if (iVar3 < 0) {
    _SfVideoKeyframe_FindNeighbors_20(param_1,&local_4,&local_c,param_3,param_4);
    if (local_4 < 0) {
      if ((int)local_c < 0) {
        local_14._4_4_ =
             (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),param_2);
        goto LAB_010279d6;
      }
LAB_010279a3:
      local_4 = *(int *)(iVar10 + 4) * (int)local_c;
    }
    else {
      if (0 < (int)local_c) {
        HVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&local_18);
        if ((HVar4 < 0) ||
           (HVar4 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,(LPSTREAM *)&local_14), HVar4 < 0))
        goto LAB_010279d6;
        iVar3 = *(int *)(iVar10 + 8);
        local_4 = *(int *)(iVar10 + 4) * local_4;
        puVar11 = (uint *)(local_4 + iVar3);
        puVar5 = (uint *)(*(int *)(iVar10 + 4) * (int)local_c + iVar3);
        (*local_18->lpVtbl->Write)
                  (local_18,(void *)puVar11[5],*(ULONG *)(local_4 + 0x10 + iVar3),(ULONG *)0x0);
        uVar7 = puVar5[5];
        pUVar6 = (ULARGE_INTEGER *)local_14;
        (**(code **)((((ULARGE_INTEGER *)local_14)->s).LowPart + 0x10))
                  ((ULARGE_INTEGER *)local_14,uVar7,puVar5[4],0);
        (*unaff_EDI->lpVtbl->Seek)(unaff_EDI,(LARGE_INTEGER)0x0,0,pUVar6);
        uVar13 = 0;
        (**(code **)(*unaff_EBP + 0x14))(unaff_EBP,0,0,0,0);
        uVar9 = puVar11[1];
        pUVar6 = (ULARGE_INTEGER *)*puVar5;
        uVar12 = puVar5[1];
        pUVar8 = (ULARGE_INTEGER *)*puVar11;
        if ((local_c == (ULARGE_INTEGER *)0xffffffff) &&
           (pUVar1 = (ULARGE_INTEGER *)local_14, uVar2 = local_14._4_4_, local_8 == 0xffffffff)) {
LAB_010278c5:
          local_14._4_4_ = uVar2;
          local_14._0_4_ = pUVar1;
        }
        else {
          if (((int)uVar9 < 1) && ((int)uVar9 < 0)) {
            pUVar8 = (ULARGE_INTEGER *)0x0;
            uVar9 = 0;
          }
          else if (((int)local_8 <= (int)uVar9) &&
                  (((int)local_8 < (int)uVar9 || (local_c < pUVar8)))) {
            pUVar8 = local_c;
            uVar9 = local_8;
          }
          if (((int)uVar12 < 1) && ((int)uVar12 < 0)) {
            pUVar6 = (ULARGE_INTEGER *)0x0;
            uVar12 = 0;
          }
          else if (((int)local_8 <= (int)uVar12) &&
                  (((int)local_8 < (int)uVar12 || (local_c < pUVar6)))) {
            pUVar6 = local_c;
            uVar12 = local_8;
          }
          if ((((int)local_14._4_4_ <= (int)uVar9) &&
              ((pUVar1 = pUVar8, uVar2 = uVar9, (int)local_14._4_4_ < (int)uVar9 ||
               ((ULARGE_INTEGER *)local_14 < pUVar8)))) ||
             (((int)uVar12 <= (int)local_14._4_4_ &&
              ((pUVar1 = pUVar6, uVar2 = uVar12, (int)uVar12 < (int)local_14._4_4_ ||
               (pUVar6 < (ULARGE_INTEGER *)local_14)))))) goto LAB_010278c5;
        }
        local_c = (ULARGE_INTEGER *)((int)pUVar6 - (int)pUVar8);
        local_8 = (uVar12 - uVar9) - (uint)(pUVar6 < pUVar8);
        if (local_c == (ULARGE_INTEGER *)0x0 && local_8 == 0) {
          local_14 = 0.0;
        }
        else {
          local_14 = (double)CONCAT44((local_14._4_4_ - uVar9) -
                                      (uint)((ULARGE_INTEGER *)local_14 < pUVar8),
                                      (int)(ULARGE_INTEGER *)local_14 - (int)pUVar8);
          local_14 = (double)(longlong)local_14 / (double)CONCAT44(local_8,local_c);
          switch(puVar11[6]) {
          case 1:
            if (_DAT_011dad58 <= local_14) {
              local_14 = _DAT_011dad58;
            }
            else {
              local_14 = _DAT_011db3f0;
            }
            break;
          case 2:
            local_14 = local_14 * local_14;
            break;
          case 3:
            local_14 = _DAT_011dad58 - (_DAT_011dad58 - local_14) * (_DAT_011dad58 - local_14);
            break;
          case 4:
            local_14 = (_DAT_011dba48 - (local_14 + local_14)) * local_14 * local_14;
          }
        }
        uVar7 = (**(code **)(**(int **)(unaff_EBX + 0x14) + 0x18))
                          (*(int **)(unaff_EBX + 0x14),local_18,uVar13,uVar7,
                           (ULARGE_INTEGER *)local_14,local_14._4_4_);
        local_14._4_4_ = uVar7;
        goto LAB_010279d6;
      }
      if (local_4 < 0) {
        if (-1 < (int)local_c) goto LAB_010279a3;
      }
      else if (-1 < (int)local_c) goto LAB_010279d6;
      if (local_4 < 0) goto LAB_010279d6;
      local_4 = *(int *)(iVar10 + 4) * local_4;
    }
    local_8 = local_4 + *(int *)(iVar10 + 8);
    iVar10 = *param_2;
    uVar13 = *(undefined4 *)(local_8 + 0x10);
    uVar14 = *(undefined4 *)(local_8 + 0x14);
  }
  else {
    uVar13 = *(undefined4 *)(local_8 + 0x10);
    uVar14 = *(undefined4 *)(local_8 + 0x14);
    iVar10 = *param_2;
  }
  (**(code **)(iVar10 + 0x10))(param_2,uVar14,uVar13,0);
LAB_010279d6:
  if (local_18 != (IStream *)0x0) {
    (*local_18->lpVtbl->Release)(local_18);
  }
  if ((ULARGE_INTEGER *)local_14 != (ULARGE_INTEGER *)0x0) {
    (**(code **)((((ULARGE_INTEGER *)local_14)->s).LowPart + 8))
              ((IStream *)&((ULARGE_INTEGER *)local_14)->s);
  }
  return local_14._4_4_;
}


