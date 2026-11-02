/* Module: vegas30.exe
   Function: FUN_00525f50
   Address: 00525f50
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT FUN_00525f50(int param_1,HGLOBAL param_2,void *param_3)

{
  SIZE_T *pv;
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  HRESULT HVar5;
  HGLOBAL pvVar6;
  int iVar7;
  LPVOID pvVar8;
  LPSTREAM local_14;
  int iStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  HVar5 = -0x7ff8ffa9;
  local_c = 1;
  local_14 = (IStream *)0x0;
  if (((param_1 != 0) && (param_2 != (HGLOBAL)0x0)) &&
     (HVar5 = CreateStreamOnHGlobal(param_2,1,&local_14), local_14 != (IStream *)0x0)) {
    if (-1 < HVar5) {
      if ((param_3 != (void *)0x0) || (**(int **)(param_1 + 0x84) == 1)) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x84) + 8);
        iVar7 = 0;
        if (piVar1 != (int *)0x0) {
          iVar7 = *piVar1;
        }
        while (iVar7 = iVar7 + -1, -1 < iVar7) {
          iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x84) + 8) + 8) + iVar7 * 4);
          if (*(LPCVOID *)(iVar2 + 0x118) != (LPCVOID)0x0) {
            pvVar6 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x118));
            GlobalUnlock(pvVar6);
            pvVar6 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x118));
            GlobalFree(pvVar6);
            *(undefined4 *)(iVar2 + 0x118) = 0;
            *(undefined4 *)(iVar2 + 0x120) = 0;
          }
          if (*(LPCVOID *)(iVar2 + 0x120) != (LPCVOID)0x0) {
            pvVar6 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x120));
            GlobalUnlock(pvVar6);
            pvVar6 = GlobalHandle(*(LPCVOID *)(iVar2 + 0x120));
            GlobalFree(pvVar6);
            *(undefined4 *)(iVar2 + 0x120) = 0;
            *(undefined4 *)(iVar2 + 0x11c) = 0;
          }
          _SfList_DeleteList_16(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),iVar7,1,1);
          *(int *)(*(int *)(param_1 + 0x84) + 4) = *(int *)(*(int *)(param_1 + 0x84) + 4) + -1;
        }
      }
      HVar5 = (*local_14->lpVtbl->Read)(local_14,&local_c,4,(ULONG *)&param_2);
      if (((HVar5 < 0) || (param_2 != (HGLOBAL)0x4)) ||
         ((HVar5 = (*local_14->lpVtbl->Read)(local_14,&iStack_10,4,(ULONG *)&param_2), HVar5 < 0 ||
          (param_2 != (HGLOBAL)0x4)))) {
LAB_0052624b:
        HVar5 = -0x7ffb1ff8;
      }
      else {
        param_1 = 0;
        if (0 < iStack_10) {
          do {
            piVar1 = *(int **)(iVar3 + 0x84);
            if (*piVar1 <= piVar1[1]) break;
            _SfList_AllocItem_12(piVar1[2],0x124,&param_3);
            pvVar4 = param_3;
            if (param_3 != (void *)0x0) {
              HVar5 = (*local_14->lpVtbl->Read)(local_14,param_3,0x10,(ULONG *)&param_2);
              if ((HVar5 < 0) || (param_2 != (HGLOBAL)0x10)) goto LAB_0052624b;
              iVar7 = FUN_00508960((int)pvVar4 + 0x10,pvVar4,0x104);
              if (iVar7 == 0) {
                _SfLoadString_16(DAT_00647204,0x5078,(int)pvVar4 + 0x10,0x104);
              }
              pv = (SIZE_T *)((int)pvVar4 + 0x114);
              HVar5 = (*local_14->lpVtbl->Read)(local_14,pv,4,(ULONG *)&param_2);
              if ((HVar5 < 0) || (param_2 != (HGLOBAL)0x4)) goto LAB_0052624b;
              if (*pv == 0) {
                *(undefined4 *)((int)pvVar4 + 0x118) = 0;
              }
              else {
                pvVar6 = GlobalAlloc(0x40,*pv);
                pvVar8 = GlobalLock(pvVar6);
                *(undefined4 *)((int)pvVar4 + 0x118) = pvVar8;
                HVar5 = (*local_14->lpVtbl->Read)
                                  (local_14,*(void **)((int)pvVar4 + 0x118),*pv,(ULONG *)&param_2);
                if ((HVar5 < 0) || ((HGLOBAL)*pv != param_2)) goto LAB_0052624b;
              }
              *(undefined4 *)((int)pvVar4 + 0x11c) = 0;
              *(undefined4 *)((int)pvVar4 + 0x120) = 0;
              _SfList_InsertList_16
                        (*(undefined4 *)(*(int *)(iVar3 + 0x84) + 8),0xffffffff,0,0xffffffff);
              piVar1 = (int *)(*(int *)(iVar3 + 0x84) + 4);
              *piVar1 = *piVar1 + 1;
            }
            param_1 = param_1 + 1;
          } while (param_1 < iStack_10);
        }
        uStack_8 = 0;
        uStack_4 = 0;
        HVar5 = (*local_14->lpVtbl->Read)(local_14,&uStack_8,8,(ULONG *)&param_2);
      }
    }
    if (local_14 != (IStream *)0x0) {
      (*local_14->lpVtbl->Release)(local_14);
    }
  }
  return HVar5;
}


