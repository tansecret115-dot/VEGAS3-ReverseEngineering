/* Module: g2plug.dll
   Function: SfRealG2_AdvDlg
   Address: 5f80a150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealG2_AdvDlg(struct HWND__ *,struct SFG2_PARAMS *) */

long SfRealG2_AdvDlg(HWND__ *param_1,SFG2_PARAMS *param_2)

{
  SFG2_PARAMS *pSVar1;
  long lVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int *unaff_ESI;
  ulong *puVar5;
  int *unaff_EDI;
  _GUID *p_Var6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  ulong local_2c;
  int local_28 [7];
  undefined1 auStack_c [8];
  int *piStack_4;
  
                    /* 0xa150  34  ?SfRealG2_AdvDlg@@YGJPAUHWND__@@PAUSFG2_PARAMS@@@Z */
  pSVar1 = param_2;
  if (DAT_5f87749c == (int *)0x0) {
    return -0x7fffbffb;
  }
  iVar4 = 4;
  bVar7 = true;
  puVar5 = &DAT_5f872fe8;
  p_Var6 = (_GUID *)(param_2 + 4);
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *puVar5 == p_Var6->Data1;
    puVar5 = puVar5 + 1;
    p_Var6 = (_GUID *)&p_Var6->Data2;
  } while (bVar7);
  if ((!bVar7) &&
     (lVar2 = SfG2GetCodecInfo(*(_GUID *)(param_2 + 4),(uchar **)&param_2,&local_2c), -1 < lVar2)) {
    SfRealG2_RestoreTargetData((uchar *)param_2,local_2c);
    pvVar3 = GlobalHandle(param_2);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(param_2);
    GlobalFree(pvVar3);
  }
  piVar10 = local_28;
  puVar9 = (undefined4 *)&DAT_5f86a4c0;
  iVar4 = (**(code **)*DAT_5f87749c)(DAT_5f87749c);
  if (iVar4 != 0) {
    return iVar4;
  }
  if (*(int *)(pSVar1 + 0x13c) != 0) {
    iVar4 = (**(code **)(*DAT_5f87749c + 0x18))(DAT_5f87749c,&stack0xffffffc8);
    if (iVar4 < 0) {
      if (piVar10 == (int *)0x0) {
        return iVar4;
      }
      (**(code **)(*piVar10 + 8))(piVar10);
      return iVar4;
    }
    iVar4 = (**(code **)*puVar9)(puVar9,&DAT_5f86a410,auStack_c);
    if ((-1 < iVar4) &&
       ((**(code **)(*piStack_4 + 0x34))(piStack_4,*(undefined4 *)(pSVar1 + 0x13c)),
       piStack_4 != (int *)0x0)) {
      (**(code **)(*piStack_4 + 8))(piStack_4);
      piStack_4 = (int *)0x0;
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    if (iVar4 != 0) goto LAB_5f80a2e6;
  }
  puVar9 = (undefined4 *)&stack0xffffffd0;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if ((*(int *)(pSVar1 + 300) == 0) || (*(int *)(pSVar1 + 0x148) == -1)) {
    iVar4 = *DAT_5f8774a0;
    uVar8 = 0;
  }
  else {
    iVar4 = *DAT_5f8774a0;
    uVar8 = 1;
  }
  iVar4 = (**(code **)(iVar4 + 0x10))(DAT_5f8774a0,uVar8,&stack0xffffffd0,0,0);
LAB_5f80a2e6:
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return iVar4;
}


