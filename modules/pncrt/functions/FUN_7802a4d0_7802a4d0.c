/* Module: pncrt.dll
   Function: FUN_7802a4d0
   Address: 7802a4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_7802a4d0(void *param_1,uint param_2,void *param_3,uint param_4,undefined *param_5,void *param_6,
            wchar_t *param_7,int param_8,int param_9,longlong param_10,undefined4 param_11,
            int param_12,void *param_13,undefined4 *param_14,wchar_t param_15)

{
  size_t _Size;
  byte bVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  char cVar5;
  wint_t wVar6;
  wchar_t wVar7;
  int iVar8;
  undefined2 extraout_var;
  uint uVar9;
  undefined2 extraout_var_00;
  undefined4 *puVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  char *_Dest;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *pvVar14;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  undefined *this;
  undefined *extraout_ECX_04;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  undefined *extraout_ECX_07;
  undefined *puVar15;
  undefined *extraout_ECX_08;
  undefined *extraout_ECX_09;
  undefined *extraout_ECX_10;
  undefined *extraout_ECX_11;
  undefined *extraout_ECX_12;
  undefined *extraout_ECX_13;
  undefined *extraout_ECX_14;
  undefined *puVar16;
  undefined *extraout_ECX_15;
  undefined *extraout_ECX_16;
  undefined *extraout_ECX_17;
  undefined *extraout_ECX_18;
  void *this_00;
  void *extraout_ECX_19;
  void *extraout_ECX_20;
  void *extraout_ECX_21;
  undefined *extraout_ECX_22;
  undefined *extraout_ECX_23;
  uint uVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  wchar_t wVar20;
  wchar_t *pwVar21;
  wchar_t wVar22;
  undefined4 *puVar23;
  wchar_t *pwVar24;
  bool bVar25;
  longlong lVar26;
  char cVar27;
  FILE *in_stack_00002300;
  wchar_t *in_stack_00002304;
  undefined4 *in_stack_00002308;
  FILE *pFVar28;
  
  FUN_78008b70();
  wVar22 = *in_stack_00002304;
  param_4._0_2_ = (ushort)(byte)param_4;
  param_1 = (void *)0x0;
  param_9 = 0;
  puVar10 = param_14;
  do {
    if (wVar22 == L'\0') {
LAB_7802b2af:
      if (((((uint)puVar10 & 0xffff) == 0xffffffff) && (param_9 == 0)) && (param_4._1_1_ == '\0')) {
        param_9 = -1;
      }
      return param_9;
    }
    wVar7 = L'\0';
    iVar8 = iswctype(wVar22,8);
    pvVar14 = extraout_ECX;
    if (iVar8 != 0) {
      param_1 = (void *)((int)param_1 + -1);
      pFVar28 = in_stack_00002300;
      wVar6 = FUN_7802b450(param_1,(int *)&param_1,in_stack_00002300);
      FUN_7802b430(CONCAT22(extraout_var,wVar6),(int *)pFVar28);
      iVar8 = iswspace(in_stack_00002304[1]);
      pvVar14 = extraout_ECX_00;
      pwVar19 = in_stack_00002304;
      while (in_stack_00002304 = pwVar19 + 1, iVar8 != 0) {
        iVar8 = iswspace(pwVar19[2]);
        pvVar14 = extraout_ECX_01;
        pwVar19 = in_stack_00002304;
      }
    }
    if (*in_stack_00002304 != L'%') {
      param_1 = (void *)((int)param_1 + 1);
      puVar10 = (undefined4 *)FUN_7802b420(pvVar14,in_stack_00002300);
      wVar22 = *in_stack_00002304;
      in_stack_00002304 = in_stack_00002304 + 1;
      if (wVar22 == (wchar_t)puVar10) goto LAB_7802b230;
      param_1 = (void *)((int)param_1 + -1);
      FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
      goto LAB_7802b2af;
    }
    param_13 = (void *)0x0;
    param_6 = (void *)0x0;
    param_8 = 0;
    param_3 = (void *)0x0;
    cVar27 = '\0';
    param_4 = (param_4 >> 8 & 0xff) << 8;
    param_2._0_2_ = (ushort)(byte)param_2;
    param_2._0_3_ = CONCAT12(1,(ushort)param_2);
    param_2 = (uint)(uint3)param_2;
    param_12 = 0;
    pvVar14 = (void *)0x0;
    do {
      pwVar19 = in_stack_00002304 + 1;
      uVar17 = (uint)(ushort)*pwVar19;
      if ((*pwVar19 & 0xff00U) == 0) {
        if ((int)__mb_cur_max < 2) {
          uVar9 = (byte)_pctype[(uVar17 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = _isctype(uVar17 & 0xff,4);
          pvVar14 = param_3;
        }
        if (uVar9 == 0) goto LAB_7802a60f;
        param_8 = param_8 + 1;
        pvVar14 = (void *)((uVar17 - 0x30) + (int)pvVar14 * 10);
        param_3 = pvVar14;
      }
      else {
LAB_7802a60f:
        uVar9 = param_2;
        uVar3 = (ushort)param_2;
        switch(uVar17) {
        case 0x2a:
          param_2 = CONCAT13(param_2._3_1_ + '\x01',(uint3)param_2);
          break;
        default:
switchD_7802a61f_caseD_2b:
          cVar27 = cVar27 + '\x01';
          break;
        case 0x46:
        case 0x4e:
          break;
        case 0x49:
          if ((in_stack_00002304[2] != L'6') || (in_stack_00002304[3] != L'4'))
          goto switchD_7802a61f_caseD_2b;
          pwVar19 = in_stack_00002304 + 3;
          param_12 = param_12 + 1;
          param_10 = 0;
          break;
        case 0x4c:
          param_2._0_3_ = CONCAT12(param_2._2_1_ + '\x01',(ushort)param_2);
          break;
        case 0x68:
          cVar5 = param_2._1_1_ + -1;
          param_2._0_3_ = CONCAT12(param_2._2_1_ + -1,uVar3);
          param_2._0_1_ = (undefined1)uVar9;
          param_2._0_2_ = CONCAT11(cVar5,(undefined1)param_2);
          break;
        case 0x6c:
          param_2._0_3_ = CONCAT12(param_2._2_1_ + '\x01',(ushort)param_2);
        case 0x77:
          param_2._0_2_ = CONCAT11(param_2._1_1_ + '\x01',(undefined1)param_2);
        }
      }
      in_stack_00002304 = pwVar19;
    } while (cVar27 == '\0');
    if (param_2._3_1_ == '\0') {
      param_7 = (wchar_t *)*in_stack_00002308;
      param_14 = in_stack_00002308;
      in_stack_00002308 = in_stack_00002308 + 1;
    }
    bVar25 = false;
    if (param_2._1_1_ == '\0') {
      if (*pwVar19 != L'S') {
        param_2._0_2_ = CONCAT11(1,(undefined1)param_2);
        if (*pwVar19 != L'C') goto LAB_7802a6d9;
      }
      param_2._0_2_ = CONCAT11(0xff,(undefined1)param_2);
    }
LAB_7802a6d9:
    param_5 = (undefined *)((ushort)*pwVar19 | 0x20);
    if (param_5 != (undefined *)0x6e) {
      if ((param_5 == (undefined *)0x63) || (param_5 == (undefined *)0x7b)) {
        param_1 = (void *)((int)param_1 + 1);
        puVar10 = (undefined4 *)FUN_7802b420(pvVar14,in_stack_00002300);
      }
      else {
        wVar6 = FUN_7802b450(in_stack_00002300,(int *)&param_1,in_stack_00002300);
        puVar10 = (undefined4 *)CONCAT22(extraout_var_00,wVar6);
      }
    }
    pwVar21 = param_7;
    puVar15 = param_5;
    if ((param_8 != 0) && (param_3 == (void *)0x0)) {
      param_1 = (void *)((int)param_1 + -1);
      FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
      goto LAB_7802b2af;
    }
    wVar22 = (wchar_t)puVar10;
    uVar4 = param_4._3_1_;
    uVar3 = (ushort)param_4;
    pwVar24 = pwVar19;
    switch(param_5) {
    case (undefined *)0x63:
      if (param_8 == 0) {
        param_8 = 1;
        param_3 = (void *)((int)param_3 + 1);
      }
      if ('\0' < param_2._1_1_) {
        param_4 = CONCAT31(param_4._1_3_,1);
      }
      pwVar18 = (wchar_t *)&DAT_78040cf4;
      goto LAB_7802a7b5;
    case (undefined *)0x64:
    case (undefined *)0x6f:
    case (undefined *)0x75:
      goto switchD_7802a751_caseD_64;
    case (undefined *)0x65:
    case (undefined *)0x66:
    case (undefined *)0x67:
      pwVar21 = &param_15;
      if (wVar22 == L'-') {
        pwVar21 = (wchar_t *)&stack0x00000042;
        param_15 = L'-';
LAB_7802aeba:
        param_3 = (void *)((int)param_3 + -1);
        param_1 = (void *)((int)param_1 + 1);
        puVar10 = (undefined4 *)FUN_7802b420(in_stack_00002300,in_stack_00002300);
      }
      else if (wVar22 == L'+') goto LAB_7802aeba;
      if ((param_8 == 0) || (pvVar14 = param_3, 0x15d < (int)param_3)) {
        param_3 = (void *)0x15d;
        pvVar14 = param_3;
      }
      while (((uint)puVar10 & 0xff00) == 0) {
        if ((int)__mb_cur_max < 2) {
          uVar17 = (byte)_pctype[((uint)puVar10 & 0xff) * 2] & 4;
        }
        else {
          uVar17 = _isctype((uint)puVar10 & 0xff,4);
        }
        if ((uVar17 == 0) ||
           (pvVar11 = (void *)((int)pvVar14 + -1), param_3 = pvVar11, pvVar14 == (void *)0x0))
        break;
        *pwVar21 = (wchar_t)puVar10;
        param_6 = (void *)((int)param_6 + 1);
        pwVar21 = pwVar21 + 1;
        param_1 = (void *)((int)param_1 + 1);
        puVar10 = (undefined4 *)FUN_7802b420(param_6,in_stack_00002300);
        pvVar14 = pvVar11;
      }
      mbtowc((wchar_t *)((int)&param_11 + 2),&DAT_7803f558,__mb_cur_max);
      pvVar11 = this_00;
      pvVar14 = param_6;
      if ((param_11._2_2_ == (wchar_t)puVar10) &&
         (pvVar12 = (void *)((int)param_3 + -1), bVar25 = param_3 != (void *)0x0, param_3 = pvVar12,
         bVar25)) {
        param_1 = (void *)((int)param_1 + 1);
        puVar10 = (undefined4 *)FUN_7802b420(this_00,in_stack_00002300);
        pvVar14 = param_6;
        *pwVar21 = param_11._2_2_;
        pvVar11 = extraout_ECX_19;
        while (pwVar21 = pwVar21 + 1, ((uint)puVar10 & 0xff00) == 0) {
          if ((int)__mb_cur_max < 2) {
            uVar17 = (byte)_pctype[((uint)puVar10 & 0xff) * 2] & 4;
          }
          else {
            uVar17 = _isctype((uint)puVar10 & 0xff,4);
            pvVar11 = extraout_ECX_20;
          }
          pvVar12 = param_3;
          if (uVar17 == 0) break;
          pvVar13 = (void *)((int)param_3 + -1);
          bVar25 = param_3 == (void *)0x0;
          pvVar11 = (void *)0x0;
          param_3 = pvVar13;
          if (bVar25) break;
          *pwVar21 = (wchar_t)puVar10;
          pvVar14 = (void *)((int)pvVar14 + 1);
          param_1 = (void *)((int)param_1 + 1);
          puVar10 = (undefined4 *)FUN_7802b420(pvVar12,in_stack_00002300);
          pvVar11 = extraout_ECX_21;
        }
      }
      if ((pvVar14 != (void *)0x0) &&
         ((((short)puVar10 == 0x65 || ((short)puVar10 == 0x45)) &&
          (pvVar12 = (void *)((int)param_3 + -1), bVar25 = param_3 != (void *)0x0, param_3 = pvVar12
          , bVar25)))) {
        *pwVar21 = L'e';
        pwVar24 = pwVar21 + 1;
        param_1 = (void *)((int)param_1 + 1);
        puVar10 = (undefined4 *)FUN_7802b420(pvVar11,in_stack_00002300);
        puVar15 = _pctype;
        if ((short)puVar10 == 0x2d) {
          *pwVar24 = L'-';
          pwVar24 = pwVar21 + 2;
LAB_7802b0ad:
          pvVar11 = param_3;
          pvVar12 = (void *)((int)param_3 + -1);
          bVar25 = param_3 != (void *)0x0;
          param_3 = (void *)0x0;
          pwVar21 = pwVar24;
          if (bVar25) {
            param_1 = (void *)((int)param_1 + 1);
            param_3 = pvVar12;
            puVar10 = (undefined4 *)FUN_7802b420(pvVar11,in_stack_00002300);
            puVar15 = _pctype;
          }
        }
        else {
          pwVar21 = pwVar24;
          if ((short)puVar10 == 0x2b) goto LAB_7802b0ad;
        }
        while (_pctype = puVar15, ((uint)puVar10 & 0xff00) == 0) {
          if ((int)__mb_cur_max < 2) {
            uVar17 = (byte)puVar15[((uint)puVar10 & 0xff) * 2] & 4;
          }
          else {
            uVar17 = _isctype((uint)puVar10 & 0xff,4);
            puVar15 = extraout_ECX_22;
          }
          if ((uVar17 == 0) ||
             (pvVar11 = (void *)((int)param_3 + -1), bVar25 = param_3 == (void *)0x0,
             param_3 = pvVar11, bVar25)) break;
          *pwVar21 = (wchar_t)puVar10;
          pvVar14 = (void *)((int)pvVar14 + 1);
          param_1 = (void *)((int)param_1 + 1);
          puVar10 = (undefined4 *)FUN_7802b420(puVar15,in_stack_00002300);
          pwVar21 = pwVar21 + 1;
          puVar15 = _pctype;
        }
      }
      param_1 = (void *)((int)param_1 + -1);
      FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
      if (pvVar14 == (void *)0x0) goto LAB_7802b2af;
      if (param_2._3_1_ == '\0') {
        *pwVar21 = L'\0';
        param_9 = param_9 + 1;
        _Size = ((int)pwVar21 - (int)&param_15 >> 1) * 2 + 2;
        _Dest = malloc(_Size);
        wcstombs(_Dest,&param_15,_Size);
        (*(code *)PTR___fptrap_7803fb38)();
        free(_Dest);
        param_4._0_2_ = CONCAT11(param_4._1_1_ + '\x01',(byte)param_4);
        in_stack_00002304 = pwVar19 + 1;
        goto LAB_7802b230;
      }
      break;
    default:
      if (*pwVar19 != wVar22) {
        param_1 = (void *)((int)param_1 + -1);
        FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
        goto LAB_7802b2af;
      }
      param_4._0_2_ = CONCAT11(param_4._1_1_ + -1,(byte)param_4);
      if (param_2._3_1_ == '\0') {
        in_stack_00002308 = param_14;
      }
      break;
    case (undefined *)0x69:
      param_5 = (undefined *)0x64;
    case (undefined *)0x78:
      if (wVar22 == L'-') {
        param_4._0_3_ = CONCAT12(1,uVar3);
        param_4 = CONCAT13(uVar4,(undefined3)param_4);
LAB_7802aa02:
        param_3 = (void *)((int)param_3 + -1);
        if ((param_3 == (void *)0x0) && (param_8 != 0)) {
          bVar25 = true;
        }
        else {
          param_1 = (void *)((int)param_1 + 1);
          puVar10 = (undefined4 *)FUN_7802b420(puVar15,in_stack_00002300);
          puVar15 = extraout_ECX_23;
        }
      }
      else if (wVar22 == L'+') goto LAB_7802aa02;
      if ((short)puVar10 == 0x30) {
        param_1 = (void *)((int)param_1 + 1);
        puVar10 = (undefined4 *)FUN_7802b420(puVar15,in_stack_00002300);
        if (((short)puVar10 == 0x78) || ((short)puVar10 == 0x58)) {
          param_1 = (void *)((int)param_1 + 1);
          puVar10 = (undefined4 *)FUN_7802b420(this,in_stack_00002300);
          param_5 = (undefined *)0x78;
          puVar15 = extraout_ECX_05;
        }
        else {
          param_6 = (void *)0x1;
          if (param_5 == (undefined *)0x78) {
            param_1 = (void *)((int)param_1 + -1);
            FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
            puVar10 = (undefined4 *)0x30;
            puVar15 = extraout_ECX_04;
          }
          else {
            param_5 = (undefined *)0x6f;
            puVar15 = this;
          }
        }
      }
      goto LAB_7802aaea;
    case (undefined *)0x6e:
      pvVar14 = param_1;
      if (param_2._3_1_ != '\0') break;
      goto LAB_7802ae2e;
    case (undefined *)0x70:
      param_2._0_3_ = CONCAT12(1,(ushort)param_2);
switchD_7802a751_caseD_64:
      if (wVar22 == L'-') {
        param_4._0_3_ = CONCAT12(1,uVar3);
        param_4 = CONCAT13(uVar4,(undefined3)param_4);
LAB_7802aab9:
        param_3 = (void *)((int)param_3 + -1);
        if ((param_3 == (void *)0x0) && (param_8 != 0)) {
          bVar25 = true;
        }
        else {
          param_1 = (void *)((int)param_1 + 1);
          puVar10 = (undefined4 *)FUN_7802b420(param_5,in_stack_00002300);
          puVar15 = extraout_ECX_06;
        }
      }
      else if (wVar22 == L'+') goto LAB_7802aab9;
LAB_7802aaea:
      puVar16 = _pctype;
      uVar17 = param_4;
      puVar2 = param_5;
      pvVar14 = param_13;
      if (param_12 == 0) {
        while (_pctype = puVar16, param_4 = uVar17, param_5 = puVar2, !bVar25) {
          if ((puVar2 == (undefined *)0x78) || (puVar2 == (undefined *)0x70)) {
            if (((uint)puVar10 & 0xff00) == 0) {
              if ((int)__mb_cur_max < 2) {
                uVar17 = (byte)puVar16[((uint)puVar10 & 0xff) * 2] & 0x80;
                puVar15 = puVar16;
              }
              else {
                uVar17 = _isctype((uint)puVar10 & 0xff,0x80);
                puVar15 = extraout_ECX_15;
              }
              if (uVar17 != 0) {
                pvVar14 = (void *)((int)pvVar14 << 4);
                puVar10 = (undefined4 *)FUN_7802b3c0((uint)puVar10);
                puVar16 = extraout_ECX_16;
                goto LAB_7802ad5c;
              }
            }
LAB_7802ad5a:
            bVar25 = true;
            puVar16 = puVar15;
          }
          else {
            if (((uint)puVar10 & 0xff00) != 0) goto LAB_7802ad5a;
            if ((int)__mb_cur_max < 2) {
              uVar17 = (byte)puVar16[((uint)puVar10 & 0xff) * 2] & 4;
            }
            else {
              uVar17 = _isctype((uint)puVar10 & 0xff,4);
              puVar16 = extraout_ECX_14;
            }
            puVar15 = puVar16;
            if (uVar17 == 0) goto LAB_7802ad5a;
            if (puVar2 == (undefined *)0x6f) {
              if (0x37 < (ushort)puVar10) goto LAB_7802ad5a;
              pvVar14 = (void *)((int)pvVar14 << 3);
            }
            else {
              pvVar14 = (void *)((int)pvVar14 * 10);
            }
          }
LAB_7802ad5c:
          if (bVar25) {
            param_1 = (void *)((int)param_1 + -1);
            FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
            puVar15 = extraout_ECX_18;
            puVar16 = _pctype;
            uVar17 = param_4;
            puVar2 = param_5;
          }
          else {
            param_6 = (void *)((int)param_6 + 1);
            pvVar14 = (void *)((int)pvVar14 + (((uint)puVar10 & 0xffff) - 0x30));
            if ((param_8 == 0) || (param_3 = (void *)((int)param_3 + -1), param_3 != (void *)0x0)) {
              param_1 = (void *)((int)param_1 + 1);
              puVar10 = (undefined4 *)FUN_7802b420(puVar16,in_stack_00002300);
              puVar15 = extraout_ECX_17;
              puVar16 = _pctype;
              uVar17 = param_4;
              puVar2 = param_5;
            }
            else {
              bVar25 = true;
              puVar15 = puVar16;
              puVar16 = _pctype;
              uVar17 = param_4;
              puVar2 = param_5;
            }
          }
        }
        param_4._2_1_ = (char)(uVar17 >> 0x10);
        bVar25 = param_4._2_1_ != '\0';
        if (bVar25) {
          pvVar14 = (void *)-(int)pvVar14;
        }
      }
      else {
        cVar27 = '\0';
        lVar26 = param_10;
        if (!bVar25) {
          do {
            puVar16 = param_5;
            iVar8 = (int)((ulonglong)lVar26 >> 0x20);
            if (param_5 == (undefined *)0x78) {
              if (((uint)puVar10 & 0xff00) == 0) {
                if ((int)__mb_cur_max < 2) {
                  puVar15 = (undefined *)((uint)puVar10 & 0xff);
                  uVar17 = (byte)_pctype[(int)puVar15 * 2] & 0x80;
                }
                else {
                  uVar17 = _isctype((uint)puVar10 & 0xff,0x80);
                  puVar15 = extraout_ECX_07;
                }
                if (uVar17 != 0) {
                  lVar26 = __allshl(4,iVar8);
                  puVar10 = (undefined4 *)FUN_7802b3c0((uint)puVar10);
                  puVar15 = extraout_ECX_08;
                  goto LAB_7802abed;
                }
              }
LAB_7802abe9:
              cVar27 = cVar27 + '\x01';
            }
            else {
              if (((uint)puVar10 & 0xff00) != 0) goto LAB_7802abe9;
              if ((int)__mb_cur_max < 2) {
                puVar15 = (undefined *)((uint)puVar10 & 0xff);
                uVar17 = (byte)_pctype[(int)puVar15 * 2] & 4;
              }
              else {
                uVar17 = _isctype((uint)puVar10 & 0xff,4);
                puVar15 = extraout_ECX_09;
              }
              if (uVar17 == 0) goto LAB_7802abe9;
              if (puVar16 == (undefined *)0x6f) {
                if (0x37 < (ushort)puVar10) goto LAB_7802abe9;
                lVar26 = __allshl(3,iVar8);
                puVar15 = extraout_ECX_10;
              }
              else {
                lVar26 = __allmul((uint)lVar26,iVar8,10,0);
                puVar15 = extraout_ECX_11;
              }
            }
LAB_7802abed:
            if (cVar27 == '\0') {
              param_6 = (void *)((int)param_6 + 1);
              iVar8 = ((uint)puVar10 & 0xffff) - 0x30;
              if ((param_8 == 0) || (param_3 = (void *)((int)param_3 + -1), param_3 != (void *)0x0))
              {
                param_1 = (void *)((int)param_1 + 1);
                puVar10 = (undefined4 *)FUN_7802b420(puVar15,in_stack_00002300);
                puVar15 = extraout_ECX_12;
                lVar26 = lVar26 + iVar8;
              }
              else {
                cVar27 = '\x01';
                lVar26 = lVar26 + iVar8;
              }
            }
            else {
              param_1 = (void *)((int)param_1 + -1);
              FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
              puVar15 = extraout_ECX_13;
            }
          } while (cVar27 == '\0');
        }
        param_10 = lVar26;
        pvVar14 = param_13;
        if (param_4._2_1_ != '\0') {
          param_10 = CONCAT44(-((int)((ulonglong)param_10 >> 0x20) + (uint)((int)param_10 != 0)),
                              -(int)param_10);
        }
      }
      pvVar11 = param_6;
      if (param_5 == (undefined *)0x46) {
        pvVar11 = (void *)0x0;
      }
      if (pvVar11 != (void *)0x0) {
        if (param_2._3_1_ != '\0') break;
        param_9 = param_9 + 1;
LAB_7802ae2e:
        if (param_12 == 0) {
          if (param_2._2_1_ == '\0') {
            *param_7 = (wchar_t)pvVar14;
            param_4._0_2_ = CONCAT11(param_4._1_1_ + '\x01',(byte)param_4);
            in_stack_00002304 = pwVar19 + 1;
          }
          else {
            *(void **)param_7 = pvVar14;
            param_4._0_2_ = CONCAT11(param_4._1_1_ + '\x01',(byte)param_4);
            in_stack_00002304 = pwVar19 + 1;
          }
        }
        else {
          *(longlong *)param_7 = param_10;
          param_4._0_2_ = CONCAT11(param_4._1_1_ + '\x01',(byte)param_4);
          in_stack_00002304 = pwVar19 + 1;
        }
        goto LAB_7802b230;
      }
      goto LAB_7802b2af;
    case (undefined *)0x73:
      if ('\0' < param_2._1_1_) {
        param_4 = CONCAT31(param_4._1_3_,1);
      }
      pwVar18 = u_____78040ce8;
LAB_7802a7b5:
      param_4 = CONCAT13(0xff,(undefined3)param_4);
LAB_7802a7ba:
      puVar23 = (undefined4 *)&stack0x000002fc;
      for (iVar8 = 0x800; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar23 = 0;
        puVar23 = puVar23 + 1;
      }
      if ((param_5 == (undefined *)0x7b) && (*pwVar18 == L']')) {
        wVar7 = L']';
        pwVar18 = pwVar18 + 1;
      }
      wVar22 = *pwVar18;
      while (wVar20 = wVar22, wVar20 != L']') {
        pwVar19 = pwVar18 + 1;
        if (((wVar20 == L'-') && (wVar7 != L'\0')) && (wVar22 = *pwVar19, wVar22 != L']')) {
          pwVar19 = pwVar18 + 2;
          wVar20 = wVar22;
          if ((ushort)wVar7 < (ushort)wVar22) {
            wVar20 = wVar7;
            wVar7 = wVar22;
          }
          if ((ushort)wVar20 <= (ushort)wVar7) {
            uVar17 = (uint)(ushort)wVar20;
            iVar8 = ((ushort)wVar7 - uVar17) + 1;
            do {
              uVar9 = uVar17 >> 3;
              bVar1 = (byte)uVar17;
              uVar17 = uVar17 + 1;
              iVar8 = iVar8 + -1;
              (&stack0x000002fc)[uVar9] = (&stack0x000002fc)[uVar9] | '\x01' << (bVar1 & 7);
            } while (iVar8 != 0);
          }
          wVar20 = L'\0';
        }
        else {
          (&stack0x000002fc)[(ushort)wVar20 >> 3] =
               (&stack0x000002fc)[(ushort)wVar20 >> 3] | '\x01' << ((byte)wVar20 & 7);
        }
        pwVar18 = pwVar19;
        wVar7 = wVar20;
        wVar22 = *pwVar19;
      }
      if (*pwVar18 != L'\0') {
        pwVar19 = pwVar24;
        if (param_5 == (undefined *)0x7b) {
          pwVar19 = pwVar18;
        }
        param_1 = (void *)((int)param_1 + -1);
        FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
        bVar1 = param_4._3_1_;
        pvVar14 = extraout_ECX_02;
        pwVar24 = pwVar21;
        while( true ) {
          if ((param_8 != 0) &&
             (pvVar11 = (void *)((int)param_3 + -1), bVar25 = param_3 == (void *)0x0,
             pvVar14 = param_3, param_3 = pvVar11, pwVar18 = pwVar21, bVar25)) goto LAB_7802a973;
          param_1 = (void *)((int)param_1 + 1);
          puVar10 = (undefined4 *)FUN_7802b420(pvVar14,in_stack_00002300);
          wVar22 = (wchar_t)puVar10;
          if ((wVar22 == L'\xffff') ||
             (pvVar14 = (void *)(int)(char)bVar1,
             ((int)(char)((&stack0x000002fc)[((uint)puVar10 & 0xffff) >> 3] ^ bVar1) &
             1 << ((byte)((uint)puVar10 & 0xffff) & 7)) == 0)) break;
          if (param_2._3_1_ == '\0') {
            if ((byte)param_4 == '\0') {
              iVar8 = wctomb((char *)pwVar21,wVar22);
              pwVar21 = (wchar_t *)((int)pwVar21 + iVar8);
              pvVar14 = extraout_ECX_03;
            }
            else {
              *pwVar21 = wVar22;
              pwVar21 = pwVar21 + 1;
            }
          }
          else {
            pwVar24 = pwVar24 + 1;
          }
        }
        param_1 = (void *)((int)param_1 + -1);
        param_7 = pwVar21;
        FUN_7802b430((uint)puVar10,(int *)in_stack_00002300);
        pwVar18 = param_7;
LAB_7802a973:
        param_7 = pwVar18;
        if (pwVar24 != pwVar21) {
          if ((param_2._3_1_ != '\0') || (param_9 = param_9 + 1, param_5 == (undefined *)0x63))
          break;
          if ((byte)param_4 == '\0') {
            *(undefined1 *)param_7 = 0;
            in_stack_00002304 = pwVar19 + 1;
            param_4 = (uint)CONCAT21(param_4._2_2_,param_4._1_1_ + '\x01') << 8;
          }
          else {
            *param_7 = L'\0';
            param_4._0_2_ = CONCAT11(param_4._1_1_ + '\x01',(byte)param_4);
            in_stack_00002304 = pwVar19 + 1;
          }
          goto LAB_7802b230;
        }
      }
      goto LAB_7802b2af;
    case (undefined *)0x7b:
      if ('\0' < param_2._1_1_) {
        param_4 = CONCAT31(param_4._1_3_,1);
      }
      pwVar24 = pwVar19 + 1;
      pwVar18 = pwVar24;
      if (*pwVar24 == L'^') {
        pwVar18 = pwVar19 + 2;
        goto LAB_7802a7b5;
      }
      goto LAB_7802a7ba;
    }
    in_stack_00002304 = pwVar19 + 1;
    param_4._0_2_ = CONCAT11(param_4._1_1_ + '\x01',(byte)param_4);
LAB_7802b230:
    if ((((uint)puVar10 & 0xffff) == 0xffffffff) &&
       ((*in_stack_00002304 != L'%' || (in_stack_00002304[1] != L'n')))) goto LAB_7802b2af;
    wVar22 = *in_stack_00002304;
  } while( true );
}


