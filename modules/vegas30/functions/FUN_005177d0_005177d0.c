/* Module: vegas30.exe
   Function: FUN_005177d0
   Address: 005177d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005177d0(int *param_1,HWND param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  int iVar6;
  HWND pHVar7;
  LPARAM LVar8;
  undefined4 uVar9;
  WPARAM WVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  code *pcVar13;
  float10 fVar14;
  float local_174;
  CHAR local_164 [24];
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [16];
  float local_128;
  float local_124;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined1 local_104 [16];
  float local_f4;
  float local_f0;
  undefined1 local_e0 [24];
  undefined4 local_c8 [20];
  double local_78;
  float local_68;
  undefined4 local_64 [16];
  float local_24;
  float local_20;
  
  if ((param_1 != (int *)0x0) && (iVar3 = *param_1, iVar3 != 0)) {
    EnableWindow(param_2,(uint)((*(byte *)(iVar3 + 0xa8) & 1) != 0));
    iVar4 = *(int *)(iVar3 + 0x98);
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 4) & 1) != 0)) {
      iVar6 = *(int *)(iVar4 + 0x9c);
      LVar5 = GetWindowLongA(param_2,-0xc);
      if (LVar5 != iVar6) {
        *(undefined4 *)(*(int *)(iVar3 + 0x98) + 0x9c) = 3;
        FUN_0051cff0(iVar3,iVar6);
        return;
      }
      iVar6 = FUN_0050c470(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(iVar4 + 0x88),
                           *(undefined4 *)(iVar4 + 0x8c),local_e0,0,0,0);
      if (iVar6 != -1) {
        puVar11 = local_c8;
        puVar12 = local_64;
        for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        FUN_005a6120(local_64,local_64,-local_78,0);
        fVar14 = (float10)FUN_005a5f80(local_64);
        fVar1 = (float)fVar14;
        fVar14 = (float10)FUN_005a5ff0(local_64);
        fVar2 = (float)fVar14;
        local_174 = fVar2;
        if (fVar2 < fVar1) {
          local_174 = fVar1;
        }
        iVar6 = *(int *)(iVar4 + 0x9c);
        if (iVar6 != 0) {
          if (iVar6 == 1) {
            FUN_0050c470(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(iVar4 + 0x88),
                         *(undefined4 *)(iVar4 + 0x8c),local_164,1,0,0);
            pHVar7 = GetDlgItem(param_2,0x522);
            pcVar13 = SendMessageA_exref;
            SendMessageA(pHVar7,0x703,0,(LPARAM)local_104);
            SfSetDlgItemText(param_2,0x523,"$1.1f",(double)(local_118 * local_174));
            pHVar7 = GetDlgItem(param_2,0x525);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x524,"$1.1f",(double)(local_114 * local_174));
            pHVar7 = GetDlgItem(param_2,0x526);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x527,"$1.1f",(double)(local_110 * fVar1));
            pHVar7 = GetDlgItem(param_2,0x528);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x529,"$1.1f",(double)(local_10c * fVar2));
            pHVar7 = GetDlgItem(param_2,0x52a);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x52b,"$1.1f",(double)(local_108 * (float)_DAT_0061a4d8));
            pHVar7 = GetDlgItem(param_2,0x52c);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x52d,"$1.1f",(double)(local_f4 * local_174));
            pHVar7 = GetDlgItem(param_2,0x52e);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x52f,"$1.2f",(double)local_f0);
            pHVar7 = GetDlgItem(param_2,0x530);
          }
          else {
            if (iVar6 != 2) {
              return;
            }
            FUN_0050c470(*(undefined4 *)(iVar3 + 0x98),*(undefined4 *)(iVar4 + 0x88),
                         *(undefined4 *)(iVar4 + 0x8c),local_164,2,0,0);
            pHVar7 = GetDlgItem(param_2,0x532);
            pcVar13 = SendMessageA_exref;
            SendMessageA(pHVar7,0x703,0,(LPARAM)local_138);
            SfSetDlgItemText(param_2,0x535,"$1.1f",(double)(local_14c * local_174));
            pHVar7 = GetDlgItem(param_2,0x537);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x536,"$1.1f",(double)(local_148 * local_174));
            pHVar7 = GetDlgItem(param_2,0x538);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x539,"$1.1f",(double)(local_144 * fVar1));
            pHVar7 = GetDlgItem(param_2,0x53b);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x53a,"$1.1f",(double)(local_140 * fVar2));
            pHVar7 = GetDlgItem(param_2,0x53c);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x54b,"$1.1f",(double)(local_13c * (float)_DAT_0061a4d8));
            pHVar7 = GetDlgItem(param_2,0x54c);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x53d,"$1.1f",(double)(local_128 * local_174));
            pHVar7 = GetDlgItem(param_2,0x53e);
            LVar8 = ftol();
            SendMessageA(pHVar7,0x610,0,LVar8);
            SfSetDlgItemText(param_2,0x53f,"$1.2f",(double)local_124);
            pHVar7 = GetDlgItem(param_2,0x540);
          }
          uVar9 = ftol();
          (*pcVar13)(pHVar7,0x610,0,uVar9);
          return;
        }
        SfSetDlgItemText(param_2,0x519,"$1.1f",(double)local_24);
        SfSetDlgItemText(param_2,0x51b,"$1.1f",(double)local_20);
        SfSetDlgItemText(param_2,0x515,"$1.1f",(double)fVar1);
        SfSetDlgItemText(param_2,0x516,"$1.1f",(double)fVar2);
        SfSetDlgItemText(param_2,0x51d,"$1.1f",local_78 * _DAT_0061a4d8);
        SfSetDlgItemText(param_2,0x51f,"$1.1f",(double)(local_68 * _DAT_00612ab8));
        pHVar7 = GetDlgItem(param_2,0x51a);
        LVar8 = ftol();
        SendMessageA(pHVar7,0x610,0,LVar8);
        pHVar7 = GetDlgItem(param_2,0x51c);
        LVar8 = ftol();
        SendMessageA(pHVar7,0x610,0,LVar8);
        pHVar7 = GetDlgItem(param_2,0x517);
        LVar8 = ftol();
        SendMessageA(pHVar7,0x610,0,LVar8);
        pHVar7 = GetDlgItem(param_2,0x518);
        LVar8 = ftol();
        SendMessageA(pHVar7,0x610,0,LVar8);
        pHVar7 = GetDlgItem(param_2,0x51e);
        LVar8 = ftol();
        SendMessageA(pHVar7,0x610,0,LVar8);
        pHVar7 = GetDlgItem(param_2,0x520);
        LVar8 = ftol();
        SendMessageA(pHVar7,0x610,0,LVar8);
        SfSetDlgItemText(param_2,0x521,"$1.1f",
                         (double)(*(float *)(*(int *)(iVar3 + 0x98) + 8) * _DAT_00612ab8));
        pHVar7 = GetDlgItem(param_2,0x521);
        GetWindowTextA(pHVar7,local_164,0x7f);
        WVar10 = SendMessageA(pHVar7,0x158,0,(LPARAM)local_164);
        if (-1 < (int)WVar10) {
          SendMessageA(pHVar7,0x14e,WVar10,0);
        }
        SfSetDlgItemText(param_2,0x541,&DAT_0061a540,_DAT_006106d0 / _DAT_006495d0);
        pHVar7 = GetDlgItem(param_2,0x541);
        GetWindowTextA(pHVar7,local_164,0x7f);
        WVar10 = SendMessageA(pHVar7,0x158,0,(LPARAM)local_164);
        if (-1 < (int)WVar10) {
          SendMessageA(pHVar7,0x14e,WVar10,0);
        }
        if ((*(uint *)(*(int *)(iVar3 + 0x98) + 4) & 0x1000) == 0) {
          CheckDlgButton(param_2,0x544,*(uint *)(*(int *)(*(int *)(iVar3 + 0x98) + 0x90) + 0xf8) & 1
                        );
          CheckDlgButton(param_2,0x545,~*(uint *)(*(int *)(iVar3 + 0x98) + 4) >> 1 & 1);
        }
      }
    }
  }
  return;
}


