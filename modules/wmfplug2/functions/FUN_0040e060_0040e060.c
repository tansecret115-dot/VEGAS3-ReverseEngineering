/* Module: wmfplug2.dll
   Function: FUN_0040e060
   Address: 0040e060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040e5a2) */
/* WARNING: Removing unreachable block (ram,0x0040e5c5) */
/* WARNING: Removing unreachable block (ram,0x0040e5ca) */
/* WARNING: Removing unreachable block (ram,0x0040e65e) */
/* WARNING: Removing unreachable block (ram,0x0040e662) */
/* WARNING: Removing unreachable block (ram,0x0040e606) */
/* WARNING: Removing unreachable block (ram,0x0040e60c) */
/* WARNING: Removing unreachable block (ram,0x0040e610) */
/* WARNING: Removing unreachable block (ram,0x0040e62e) */
/* WARNING: Removing unreachable block (ram,0x0040e64b) */
/* WARNING: Removing unreachable block (ram,0x0040e667) */
/* WARNING: Removing unreachable block (ram,0x0040e6c3) */
/* WARNING: Removing unreachable block (ram,0x0040e6c7) */
/* WARNING: Removing unreachable block (ram,0x0040e66f) */
/* WARNING: Removing unreachable block (ram,0x0040e673) */
/* WARNING: Removing unreachable block (ram,0x0040e677) */
/* WARNING: Removing unreachable block (ram,0x0040e695) */
/* WARNING: Removing unreachable block (ram,0x0040e6b0) */
/* WARNING: Removing unreachable block (ram,0x0040e6cc) */
/* WARNING: Removing unreachable block (ram,0x0040e6d0) */
/* WARNING: Removing unreachable block (ram,0x0040e6d4) */
/* WARNING: Removing unreachable block (ram,0x0040e6f3) */
/* WARNING: Removing unreachable block (ram,0x0040e6d8) */
/* WARNING: Removing unreachable block (ram,0x0040e6fa) */
/* WARNING: Removing unreachable block (ram,0x0040e70f) */
/* WARNING: Removing unreachable block (ram,0x0040e72f) */
/* WARNING: Removing unreachable block (ram,0x0040e713) */
/* WARNING: Removing unreachable block (ram,0x0040e735) */
/* WARNING: Removing unreachable block (ram,0x0040e739) */

undefined1 * __thiscall FUN_0040e060(void *this,wchar_t *******param_1,int param_2)

{
  wchar_t *******pppppppwVar1;
  wchar_t ********ppppppppwVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  wchar_t *********pppppppppwVar6;
  HGLOBAL pvVar7;
  undefined1 *puVar8;
  wchar_t *********unaff_EBX;
  int *piVar9;
  int *unaff_ESI;
  wchar_t *********unaff_EDI;
  wchar_t ********ppppppppwStack_8e4;
  undefined4 uStack_8e0;
  wchar_t *****pppppwStack_8dc;
  undefined4 uStack_8d8;
  wchar_t ********ppppppppwStack_8d4;
  undefined4 uStack_8d0;
  wchar_t *****pppppwStack_8cc;
  undefined4 uStack_8c8;
  wchar_t ********ppppppppwStack_8c4;
  wchar_t *******pppppppwStack_8c0;
  wchar_t *****pppppwStack_8bc;
  undefined4 uStack_8b8;
  wchar_t *******pppppppwStack_8b4;
  wchar_t ********ppppppppwStack_8b0;
  wchar_t *******pppppppwStack_8ac;
  wchar_t *********pppppppppwStack_8a8;
  wchar_t ********ppppppppwStack_8a4;
  wchar_t ********ppppppppwStack_8a0;
  wchar_t ********ppppppppwStack_89c;
  short sVar10;
  wchar_t *********pppppppppwVar11;
  wchar_t *******pppppppwStack_888;
  wchar_t *********pppppppppwStack_884;
  wchar_t ********ppppppppwStack_880;
  wchar_t *******pppppppwStack_87c;
  wchar_t ********ppppppppwStack_878;
  wchar_t ********ppppppppwStack_874;
  wchar_t ********ppppppppwStack_870;
  wchar_t *********pppppppppwStack_86c;
  wchar_t *******pppppppwVar12;
  wchar_t *****pppppwVar13;
  short sVar14;
  wchar_t *******pppppppwVar15;
  wchar_t ******ppppppwStack_848;
  int iStack_844;
  wchar_t *******pppppppwStack_840;
  undefined4 *local_83c;
  wchar_t ******local_838;
  short sStack_830;
  wchar_t ********appppppppwStack_820 [4];
  short asStack_810 [8];
  short local_800;
  wchar_t ********ppppppppwStack_28;
  
  if (*(int **)((int)this + 0x238) == (int *)0x0) {
    return (undefined1 *)0x0;
  }
  piVar9 = (int *)0x0;
  local_838 = this;
  bVar3 = FUN_0040ddf0(*(int **)((int)this + 0x238));
  if (CONCAT31(extraout_var,bVar3) != 0) {
    if (param_2 != 0) {
      iVar5 = *(int *)(*(int *)(*(int *)((int)this + 0x23c) + 0x424) + 0x3e);
      if (*(int *)(iVar5 + 0x78) == 0) {
        *(undefined4 *)(iVar5 + 0x74) = 0;
      }
      else {
        *(int *)(iVar5 + 0x74) = iVar5 + 0x7c;
      }
      if (*(int **)((int)this + 0xc) != (int *)0x0) {
        local_83c = (undefined4 *)0x0;
        iVar4 = (**(code **)(**(int **)((int)this + 0xc) + 0x18))();
        if (-1 < iVar4) {
          pppppppppwStack_86c = (wchar_t *********)0x40e0fc;
          iVar4 = (**(code **)*local_83c)();
          if (-1 < iVar4) {
            pppppppppwStack_86c = (wchar_t *********)0x1;
            ppppppppwStack_870 = (wchar_t ********)0x2716;
            ppppppppwStack_878 = (wchar_t ********)0x40e111;
            param_2 = (**(code **)(*unaff_ESI + 0x18))();
            pppppppwStack_87c = (wchar_t *******)0x40e11d;
            (*(code *)(*unaff_EDI)[2])();
          }
          ppppppppwStack_870 = (wchar_t ********)0x40e127;
          (*(code *)(*ppppppwStack_848)[2])();
        }
      }
      this = local_838;
      if (param_2 != 0) {
        pppppppppwStack_86c = (wchar_t *********)0x40e13a;
        piVar9 = FUN_00412200(*(int **)(iVar5 + 0x74),*(int *)(iVar5 + 0x78),1);
        this = local_838;
      }
    }
    pppppppppwStack_86c = *(wchar_t **********)((int)this + 0x238);
    sVar14 = 0x400;
    ppppppppwStack_870 = (wchar_t ********)0x40e15b;
    (*(code *)(*pppppppppwStack_86c)[6])();
    if (asStack_810[0] == 0) {
      if ((piVar9 != (int *)0x0) &&
         (ppppppppwStack_874 = (wchar_t ********)(piVar9 + 3), (short)piVar9[3] != 0)) {
        ppppppppwStack_870 = (wchar_t ********)0x208;
        ppppppppwStack_878 = (wchar_t ********)0x1;
        pppppppwStack_87c = (wchar_t *******)0x47bfd0;
        ppppppppwStack_880 = (wchar_t ********)0x0;
        pppppppppwStack_884 = (wchar_t *********)param_1;
        pppppppwStack_888 = (wchar_t *******)0x40e1a1;
        (*(code *)(*param_1)[6])();
      }
    }
    else {
      ppppppppwStack_874 = (wchar_t ********)asStack_810;
      ppppppppwStack_870 = (wchar_t ********)0x800;
      ppppppppwStack_878 = (wchar_t ********)0x1;
      pppppppwStack_87c = (wchar_t *******)0x47bfd0;
      ppppppppwStack_880 = (wchar_t ********)0x0;
      pppppppppwStack_884 = (wchar_t *********)param_1;
      pppppppwStack_888 = (wchar_t *******)0x40e17c;
      (*(code *)(*param_1)[6])();
    }
    pppppppwStack_87c = *(wchar_t ********)((int)this + 0x238);
    ppppppppwStack_874 = (wchar_t ********)asStack_810;
    ppppppppwStack_870 = (wchar_t ********)0x400;
    ppppppppwStack_878 = (wchar_t ********)0x54524149;
    ppppppppwStack_880 = (wchar_t ********)0x40e1bc;
    (*(code *)(*pppppppwStack_87c)[6])();
    if ((short)appppppppwStack_820[0] == 0) {
      if ((piVar9 != (int *)0x0) &&
         (pppppppppwStack_884 = (wchar_t *********)(piVar9 + 0x85), (short)piVar9[0x85] != 0)) {
        ppppppppwStack_880 = (wchar_t ********)0x208;
        pppppppwStack_888 = (wchar_t *******)0x1;
        (*(code *)(*param_1)[6])();
      }
    }
    else {
      pppppppppwStack_884 = appppppppwStack_820;
      ppppppppwStack_880 = (wchar_t ********)0x800;
      pppppppwStack_888 = (wchar_t *******)0x1;
      (*(code *)(*param_1)[6])();
    }
    pppppppppwStack_884 = appppppppwStack_820;
    ppppppppwStack_880 = (wchar_t ********)0x400;
    pppppppwStack_888 = (wchar_t *******)0x504f4349;
    (*(code *)(**(wchar_t *******)((int)this + 0x238))[6])();
    if (sStack_830 == 0) {
      if ((piVar9 != (int *)0x0) && ((short)piVar9[0x107] != 0)) {
        ppppppppwStack_89c = (wchar_t ********)0x47c014;
        ppppppppwStack_8a0 = (wchar_t ********)0x0;
        ppppppppwStack_8a4 = (wchar_t ********)param_1;
        pppppppppwStack_8a8 = (wchar_t *********)0x40e26f;
        (*(code *)(*param_1)[6])();
      }
    }
    else {
      ppppppppwStack_89c = (wchar_t ********)0x47c014;
      ppppppppwStack_8a0 = (wchar_t ********)0x0;
      ppppppppwStack_8a4 = (wchar_t ********)param_1;
      pppppppppwStack_8a8 = (wchar_t *********)0x40e244;
      (*(code *)(*param_1)[6])();
    }
    ppppppppwStack_89c = *(wchar_t *********)((int)this + 0x238);
    sVar10 = 0x400;
    ppppppppwStack_8a0 = (wchar_t ********)0x40e28a;
    (*(code *)(*ppppppppwStack_89c)[6])();
    if ((short)pppppppwStack_840 == 0) {
      if ((piVar9 != (int *)0x0) &&
         (ppppppppwStack_8a4 = (wchar_t ********)(piVar9 + 0x189), (short)piVar9[0x189] != 0)) {
        ppppppppwStack_8a0 = (wchar_t ********)0x208;
        pppppppppwStack_8a8 = (wchar_t *********)0x1;
        pppppppwStack_8ac = (wchar_t *******)0x47bfec;
        ppppppppwStack_8b0 = (wchar_t ********)0x0;
        pppppppwStack_8b4 = param_1;
        uStack_8b8 = 0x40e2d6;
        (*(code *)(*param_1)[6])();
      }
    }
    else {
      ppppppppwStack_8a4 = &pppppppwStack_840;
      ppppppppwStack_8a0 = (wchar_t ********)0x800;
      pppppppppwStack_8a8 = (wchar_t *********)0x1;
      pppppppwStack_8ac = (wchar_t *******)0x47bfec;
      ppppppppwStack_8b0 = (wchar_t ********)0x0;
      pppppppwStack_8b4 = param_1;
      uStack_8b8 = 0x40e2ab;
      (*(code *)(*param_1)[6])();
    }
    pppppppwStack_8ac = *(wchar_t ********)((int)this + 0x238);
    ppppppppwStack_8a4 = &pppppppwStack_840;
    ppppppppwStack_8a0 = (wchar_t ********)0x400;
    pppppppppwStack_8a8 = (wchar_t *********)0x4a425349;
    ppppppppwStack_8b0 = (wchar_t ********)0x40e2f1;
    (*(code *)(*pppppppwStack_8ac)[6])();
    if ((short)unaff_ESI == 0) {
      if ((piVar9 != (int *)0x0) &&
         (pppppppwStack_8b4 = (wchar_t *******)(piVar9 + 0x20b), (short)piVar9[0x20b] != 0)) {
        ppppppppwStack_8b0 = (wchar_t ********)0x208;
        uStack_8b8 = 1;
        pppppwStack_8bc = (wchar_t *****)0x47c004;
        pppppppwStack_8c0 = (wchar_t *******)0x0;
        ppppppppwStack_8c4 = (wchar_t ********)param_1;
        uStack_8c8 = 0x40e33d;
        (*(code *)(*param_1)[6])();
      }
    }
    else {
      pppppppwStack_8b4 = (wchar_t *******)&stack0xfffff7b0;
      ppppppppwStack_8b0 = (wchar_t ********)0x800;
      uStack_8b8 = 1;
      pppppwStack_8bc = (wchar_t *****)0x47c004;
      pppppppwStack_8c0 = (wchar_t *******)0x0;
      ppppppppwStack_8c4 = (wchar_t ********)param_1;
      uStack_8c8 = 0x40e312;
      (*(code *)(*param_1)[6])();
    }
    pppppwStack_8bc = *(wchar_t ******)((int)this + 0x238);
    pppppppwStack_8b4 = (wchar_t *******)&stack0xfffff7b0;
    ppppppppwStack_8b0 = (wchar_t ********)0x400;
    uStack_8b8 = 0x474e4549;
    pppppppwStack_8c0 = (wchar_t *******)0x40e358;
    (*(code *)(*pppppwStack_8bc)[6])();
    if (sVar14 != 0) {
      ppppppppwStack_8c4 = (wchar_t ********)&stack0xfffff7a0;
      pppppppwStack_8c0 = (wchar_t *******)0x800;
      uStack_8c8 = 1;
      pppppwStack_8cc = (wchar_t *****)0x47c400;
      uStack_8d0 = 0;
      ppppppppwStack_8d4 = (wchar_t ********)param_1;
      uStack_8d8 = 0x40e379;
      (*(code *)(*param_1)[6])();
    }
    pppppwStack_8cc = *(wchar_t ******)((int)this + 0x238);
    ppppppppwStack_8c4 = (wchar_t ********)&stack0xfffff7a0;
    pppppppwStack_8c0 = (wchar_t *******)0x400;
    uStack_8c8 = 0x54524149;
    uStack_8d0 = 0x40e394;
    (*(code *)(*pppppwStack_8cc)[6])();
    if ((short)ppppppppwStack_870 != 0) {
      ppppppppwStack_8d4 = (wchar_t ********)&ppppppppwStack_870;
      uStack_8d0 = 0x800;
      uStack_8d8 = 1;
      pppppwStack_8dc = (wchar_t *****)0x47bc98;
      uStack_8e0 = 0;
      ppppppppwStack_8e4 = (wchar_t ********)param_1;
      (*(code *)(*param_1)[6])();
    }
    pppppwStack_8dc = *(wchar_t ******)((int)this + 0x238);
    ppppppppwStack_8d4 = (wchar_t ********)&ppppppppwStack_870;
    uStack_8d0 = 0x400;
    uStack_8d8 = 0x524e4749;
    uStack_8e0 = 0x40e3d0;
    (*(code *)(*pppppwStack_8dc)[6])();
    if ((short)ppppppppwStack_880 != 0) {
      ppppppppwStack_8e4 = (wchar_t ********)&ppppppppwStack_880;
      uStack_8e0 = 0x800;
      (*(code *)(*param_1)[6])(param_1,0,L"WM/Genre",1);
    }
    ppppppppwStack_8e4 = (wchar_t ********)&ppppppppwStack_880;
    uStack_8e0 = 0x400;
    (*(code *)(**(wchar_t *******)((int)this + 0x238))[6])
              (*(wchar_t *******)((int)this + 0x238),0x43525349);
    if (sVar10 != 0) {
      (*(code *)(*param_1)[6])(param_1,0,L"WM/AlbumTitle",1,&stack0xfffff770,0x800);
    }
    (*(code *)(**(wchar_t *******)((int)this + 0x238))[6])
              (*(wchar_t *******)((int)this + 0x238),0x4b435254,&stack0xfffff770,0x400);
    if ((short)ppppppppwStack_8a0 != 0) {
      WideCharToMultiByte(0,0,(LPCWSTR)&ppppppppwStack_8a0,-1,(LPSTR)&pppppppwStack_8ac,10,
                          (LPCSTR)0x0,(LPBOOL)0x0);
      ppppppppwStack_8a4._0_2_ = (ushort)(byte)ppppppppwStack_8a4;
      ppppppppwStack_8e4 = (wchar_t ********)FUN_0042ccf0(&pppppppwStack_8ac,0);
      (*(code *)(*param_1)[6])(param_1,0,L"WM/Track",0,&ppppppppwStack_8e4,4);
    }
    (*(code *)(**(wchar_t *******)((int)this + 0x238))[6])
              (*(wchar_t *******)((int)this + 0x238),0x4c525554,&ppppppppwStack_8a0,0x400);
    if (local_800 != 0) {
      pppppppppwStack_86c = (wchar_t *********)0x47c058;
      ppppppppwStack_870 = (wchar_t ********)0x0;
      ppppppppwStack_874 = (wchar_t ********)param_1;
      ppppppppwStack_878 = (wchar_t ********)0x40e4d3;
      (*(code *)(*param_1)[6])();
    }
  }
  iVar5 = (*(code *)(**(wchar_t *******)((int)this + 0x238))[4])();
  if (-1 < iVar5) {
    pppppppppwStack_86c = (wchar_t *********)0x0;
    ppppppppwStack_870 = (wchar_t ********)0x0;
    ppppppppwStack_874 = (wchar_t ********)0x0;
    pppppppwStack_87c = (wchar_t *******)0x40e4fe;
    ppppppppwStack_878 = (wchar_t ********)unaff_EBX;
    ppppppppwVar2 = (wchar_t ********)0x0;
    (*(code *)(*unaff_EBX)[5])();
    pppppppwStack_888 = (wchar_t *******)ppppppppwVar2;
    pppppppwStack_87c = (wchar_t *******)&stack0xfffff79c;
    pppppppppwStack_884 = (wchar_t *********)&stack0xfffff7a4;
    ppppppppwStack_880 = (wchar_t ********)0x4;
    iVar5 = (*(code *)(*pppppppwStack_888)[3])();
    if (iVar5 == 0) {
      unaff_EDI = (wchar_t *********)0x0;
      ppppppppwStack_89c = ppppppppwStack_878;
      ppppppppwStack_8a0 = (wchar_t ********)0x40e53a;
      ppppppppwVar2 = (wchar_t ********)0x0;
      (*(code *)(*ppppppppwStack_878)[5])();
      pppppppwStack_8ac = (wchar_t *******)ppppppppwVar2;
      ppppppppwStack_8a4 = ppppppppwStack_880;
      if ((wchar_t *********)0xb < ppppppppwStack_880) {
        ppppppppwStack_8a4 = (wchar_t ********)0xc;
      }
      ppppppppwStack_8a0 = &pppppppwStack_888;
      pppppppppwStack_8a8 = &ppppppppwStack_874;
      ppppppppwStack_8b0 = (wchar_t ********)0x40e55d;
      iVar5 = (*(code *)(*pppppppwStack_8ac)[3])();
      if (iVar5 == 0) {
        ppppppppwStack_89c = ppppppppwStack_878;
        ppppppppwStack_870 = (wchar_t ********)0x0;
        ppppppppwStack_8a0 = (wchar_t ********)0x40e592;
        (*(code *)(*ppppppppwStack_878)[5])();
        param_1 = (wchar_t *******)ppppppppwStack_28;
      }
    }
    (*(code *)(*ppppppppwStack_878)[2])();
    this = pppppppwStack_840;
  }
  pppppppppwStack_86c = *(wchar_t **********)((int)this + 0x238);
  ppppppppwStack_870 = (wchar_t ********)0x40e775;
  iVar5 = (*(code *)(*pppppppppwStack_86c)[3])();
  if (-1 < iVar5) {
    ppppppppwStack_870 = (wchar_t ********)0x0;
    ppppppppwStack_874 = (wchar_t ********)0x0;
    ppppppppwStack_878 = (wchar_t ********)0x0;
    pppppppwStack_87c = (wchar_t *******)0x0;
    pppppppppwStack_884 = (wchar_t *********)0x40e78f;
    ppppppppwStack_880 = (wchar_t ********)unaff_EDI;
    (*(code *)(*unaff_EDI)[5])();
    pppppppppwStack_884 = (wchar_t *********)&pppppppppwStack_86c;
    pppppppwStack_888 = (wchar_t *******)0x4;
    pppppppppwVar11 = (wchar_t *********)ppppppppwStack_870;
    pppppppppwVar6 = (wchar_t *********)(*(code *)(*ppppppppwStack_870)[3])();
    if (pppppppppwVar6 == (wchar_t *********)0x0) {
      pppppppwVar12 = (wchar_t *******)0x0;
      pppppwVar13 = (wchar_t *****)0x0;
      pppppppwVar15 = (wchar_t *******)0x0;
      ppppppppwStack_89c = (wchar_t ********)0x0;
      ppppppppwStack_8a4 = ppppppppwStack_880;
      pppppppppwStack_8a8 = (wchar_t *********)0x40e7cb;
      ppppppppwStack_8a0 = (wchar_t ********)pppppppppwVar6;
      pppppppwVar1 = (wchar_t *******)0x0;
      (*(code *)(*ppppppppwStack_880)[5])();
      pppppppwStack_8b4 = pppppppwVar1;
      pppppppwStack_8ac = pppppppwStack_888;
      if ((wchar_t ********)0xb < pppppppwStack_888) {
        pppppppwStack_8ac = (wchar_t *******)0xc;
      }
      pppppppppwStack_8a8 = (wchar_t *********)&stack0xfffff770;
      ppppppppwStack_8b0 = &pppppppwStack_87c;
      uStack_8b8 = 0x40e7ee;
      iVar5 = (*(code *)(*pppppppwStack_8b4)[3])();
      if ((iVar5 == 0) && (pppppwVar13 < (wchar_t *****)0x65)) {
        iVar5 = 0;
        pppppppppwVar6 = (wchar_t *********)0x0;
        ppppppppwStack_8a0 = (wchar_t ********)(pppppppwVar12 + -3);
        ppppppppwStack_89c = (wchar_t ********)0x0;
        ppppppppwStack_8a4 = ppppppppwStack_880;
        pppppppppwStack_8a8 = (wchar_t *********)0x40e81d;
        (*(code *)(*ppppppppwStack_880)[5])();
        ppppppppwStack_878 = (wchar_t ********)0x0;
        if (0 < (int)pppppppwVar15) {
          do {
            ppppppppwStack_89c = (wchar_t ********)&ppppppppwStack_874;
            ppppppppwStack_8a0 = ppppppppwStack_880;
            ppppppppwStack_8a4 = (wchar_t ********)0x40e843;
            (*(code *)(*ppppppppwStack_880)[3])();
            ppppppppwStack_8b0 = (wchar_t ********)pppppppppwVar11;
            pppppppppwStack_86c = pppppppppwStack_884;
            if ((wchar_t **********)0x1b < pppppppppwStack_884) {
              pppppppppwStack_884 = (wchar_t *********)0x1c;
            }
            ppppppppwStack_8a4 = (wchar_t ********)&stack0xfffff774;
            pppppppppwStack_8a8 = pppppppppwStack_884 + -1;
            pppppppwStack_8ac = (wchar_t *******)&stack0xfffff798;
            pppppppwStack_8b4 = (wchar_t *******)0x40e871;
            pppppppppwVar11 = (wchar_t *********)ppppppppwStack_8b0;
            pppppppppwStack_884 = pppppppppwStack_8a8;
            (*(code *)(*ppppppppwStack_8b0)[3])();
            pppppppwStack_8c0 = pppppppwStack_87c + -7;
            pppppppwStack_8b4 = (wchar_t *******)0x0;
            uStack_8b8 = 1;
            pppppwStack_8bc = (wchar_t *****)0x0;
            ppppppppwStack_8c4 = ppppppppwStack_8a0;
            uStack_8c8 = 0x40e889;
            iVar4 = (*(code *)(*ppppppppwStack_8a0)[5])();
            if (iStack_844 == 0) {
              if (pppppppppwVar6 != (wchar_t *********)0x0) {
                *(undefined2 *)pppppppppwVar6 = 0;
              }
            }
            else {
              if (iVar5 < iStack_844) {
                if (pppppppppwVar6 != (wchar_t *********)0x0) {
                  pvVar7 = GlobalHandle(pppppppppwVar6);
                  GlobalUnlock(pvVar7);
                  pvVar7 = GlobalHandle(pppppppppwVar6);
                  GlobalFree(pvVar7);
                }
                ppppppppwStack_89c = (wchar_t ********)0x40e8c3;
                pvVar7 = GlobalAlloc(0x42,iStack_844 * 2);
                pppppppppwVar6 = GlobalLock(pvVar7);
                iVar5 = iStack_844;
              }
              ppppppppwStack_8a0 = ppppppppwStack_880;
              ppppppppwStack_8a4 = (wchar_t ********)0x40e8e3;
              ppppppppwStack_89c = (wchar_t ********)pppppppppwVar6;
              iVar4 = (*(code *)(*ppppppppwStack_880)[3])();
            }
            if (iVar4 == 0) {
              ppppppppwStack_89c = (wchar_t ********)pppppppppwVar6;
              if (pppppppppwVar6 == (wchar_t *********)0x0) {
                ppppppppwStack_89c = (wchar_t ********)&DAT_0047c3fc;
              }
              ppppppppwStack_8a4 = (wchar_t ********)0x40e90e;
              ppppppppwStack_8a0 = (wchar_t ********)param_1;
              (*(code *)(*param_1)[9])();
            }
            ppppppppwStack_878 = (wchar_t ********)((int)ppppppppwStack_878 + 1);
          } while ((int)ppppppppwStack_878 < (int)pppppppwVar15);
          if (pppppppppwVar6 != (wchar_t *********)0x0) {
            pvVar7 = GlobalHandle(pppppppppwVar6);
            GlobalUnlock(pvVar7);
            pvVar7 = GlobalHandle(pppppppppwVar6);
            GlobalFree(pvVar7);
          }
        }
      }
    }
    (*(code *)(*ppppppppwStack_880)[2])();
    this = ppppppwStack_848;
  }
  ppppppppwStack_874 = (wchar_t ********)0x40e957;
  ppppppppwStack_870 = (wchar_t ********)param_1;
  puVar8 = FUN_0040deb0((int)this);
  return puVar8;
}


