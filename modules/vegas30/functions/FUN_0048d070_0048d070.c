/* Module: vegas30.exe
   Function: FUN_0048d070
   Address: 0048d070
   Source: Ghidra pseudocode (Stage 10 batch) */


HGLOBAL FUN_0048d070(LPSTREAM param_1,int param_2)

{
  IStreamVtbl *pIVar1;
  _func_5239 *p_Var2;
  IStreamVtbl *pIVar3;
  int iVar4;
  long lVar5;
  HRESULT HVar6;
  uint uVar7;
  uint uVar8;
  IStream *pIVar9;
  int *piVar10;
  HGLOBAL local_44;
  int local_40 [10];
  _func_5241 *local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  
  pIVar1 = param_1->lpVtbl;
  iVar4 = FUN_005bad30(0,0,&param_1);
  if (iVar4 < 0) {
    return (HGLOBAL)0x0;
  }
  piVar10 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  local_40[0] = 0x30;
  local_14 = *(uint *)(param_2 + 8);
  local_40[2] = *(int *)(param_2 + 0x10);
  local_18 = pIVar1[2].Revert;
  switch(pIVar1[2].Revert) {
  case (_func_5241 *)0x1:
  case (_func_5241 *)0x2:
    local_40[1] = 0x25;
    break;
  case (_func_5241 *)0x3:
  case (_func_5241 *)0x4:
  case (_func_5241 *)0x5:
  case (_func_5241 *)0x6:
    local_40[1] = 10;
    break;
  default:
    local_40[1] = 0;
  }
  local_c = (uint)(*(int *)(param_2 + 4) == 0xffff);
  if (local_c == 0) {
    local_8 = (uint)*(ushort *)(pIVar1[4].Seek + *(int *)(param_2 + 4) * 0x10 + 8);
  }
  if (((int)pIVar1[2].Revert < 1) || (2 < (int)pIVar1[2].Revert)) {
    HVar6 = (*param_1->lpVtbl->Write)(param_1,local_40,0x40,(ULONG *)0x0);
    if (HVar6 < 0) goto LAB_0048d222;
    if (((2 < (int)pIVar1[2].Revert) && ((int)pIVar1[2].Revert < 7)) &&
       (uVar7 = local_14, uVar8 = local_14, local_14 < local_40[2] + local_14)) {
      do {
        p_Var2 = pIVar1[5].CopyTo;
        if (p_Var2 == (_func_5239 *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)p_Var2;
        }
        if (((int)uVar8 < 0) || (iVar4 + -1 < (int)uVar8)) {
          pIVar9 = (IStream *)0x0;
        }
        else {
          pIVar9 = *(IStream **)(*(int *)(p_Var2 + 8) + uVar8 * 4);
        }
        if (pIVar9 != (IStream *)0x0) {
          pIVar3 = pIVar9[4].lpVtbl;
          pIVar9[4].lpVtbl = (IStreamVtbl *)0x0;
          lVar5 = _sfmarker::Persist(pIVar9,(int)param_1);
          pIVar9[4].lpVtbl = pIVar3;
          uVar7 = local_14;
          if (lVar5 < 0) goto LAB_0048d222;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_40[2] + uVar7);
    }
    iVar4 = GetHGlobalFromStream(param_1,&local_44);
  }
  else {
    iVar4 = FUN_0048d280(pIVar1,local_40,param_1);
    if (iVar4 < 0) goto LAB_0048d222;
    iVar4 = GetHGlobalFromStream(param_1,&local_44);
  }
  if (-1 < iVar4) {
    FUN_005bad50(param_1);
    return local_44;
  }
LAB_0048d222:
  if (param_1 != (LPSTREAM)0x0) {
    HVar6 = GetHGlobalFromStream(param_1,&local_44);
    FUN_005bad50(param_1);
    if (-1 < HVar6) {
      GlobalFree(local_44);
    }
  }
  return (HGLOBAL)0x0;
}


