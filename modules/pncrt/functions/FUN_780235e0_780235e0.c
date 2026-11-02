/* Module: pncrt.dll
   Function: FUN_780235e0
   Address: 780235e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_780235e0(char *param_1,undefined4 *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  short *psVar3;
  int *piVar4;
  undefined4 uVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  uint local_24c;
  wchar_t *local_248;
  int local_244;
  int local_240;
  char local_23a;
  char local_239;
  int local_238;
  int local_234;
  int local_230;
  uint local_22c;
  int local_228;
  int local_224;
  int local_220;
  uint local_21c;
  undefined4 local_218;
  char local_214 [4];
  undefined4 local_210;
  undefined4 local_20c;
  uint local_204;
  undefined1 local_200 [511];
  undefined1 uStack_1;
  
  local_220 = 0;
  puVar10 = (undefined1 *)0x0;
  local_240 = 0;
  cVar8 = *param_1;
  local_21c = CONCAT31(local_21c._1_3_,cVar8);
  pcVar11 = param_1;
  do {
    if ((cVar8 == '\0') || (param_1 = pcVar11 + 1, local_240 < 0)) {
      return local_240;
    }
    if ((cVar8 < ' ') || ('x' < cVar8)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)"MessageBoxA"[cVar8 + 4] & 0xf;
    }
    local_220 = (int)(char)(&DAT_78036f98)[uVar2 * 8 + local_220] >> 4;
    switch(local_220) {
    case 0:
switchD_7802365d_caseD_0:
      local_230 = 0;
      if ((_pctype[(local_21c & 0xff) * 2 + 1] & 0x80) != 0) {
        FUN_78023f30((int)cVar8,&local_240);
        cVar8 = *param_1;
        param_1 = pcVar11 + 2;
      }
      FUN_78023f30((int)cVar8,&local_240);
      break;
    case 1:
      local_218 = 0;
      local_228 = 0;
      local_234 = 0;
      local_238 = 0;
      local_24c = 0;
      local_244 = -1;
      local_230 = 0;
      break;
    case 2:
      switch(cVar8) {
      case ' ':
        local_24c = local_24c | 2;
        break;
      case '#':
        local_24c = local_24c | 0x80;
        break;
      case '+':
        local_24c = local_24c | 1;
        break;
      case '-':
        local_24c = local_24c | 4;
        break;
      case '0':
        local_24c = local_24c | 8;
      }
      break;
    case 3:
      if (cVar8 == '*') {
        local_234 = FUN_78023fd0((int *)&param_2);
        if (local_234 < 0) {
          local_24c = local_24c | 4;
          local_234 = -local_234;
        }
      }
      else {
        local_234 = cVar8 + -0x30 + local_234 * 10;
      }
      break;
    case 4:
      local_244 = 0;
      break;
    case 5:
      if (cVar8 == '*') {
        local_244 = FUN_78023fd0((int *)&param_2);
        if (local_244 < 0) {
          local_244 = -1;
        }
      }
      else {
        local_244 = cVar8 + -0x30 + local_244 * 10;
      }
      break;
    case 6:
      switch(cVar8) {
      case 'I':
        if ((*param_1 != '6') || (pcVar11[2] != '4')) {
          local_220 = 0;
          goto switchD_7802365d_caseD_0;
        }
        param_1 = pcVar11 + 3;
        local_24c = local_24c | 0x8000;
        break;
      case 'h':
        local_24c = local_24c | 0x20;
        break;
      case 'l':
        local_24c = local_24c | 0x10;
        break;
      case 'w':
        local_24c = local_24c | 0x800;
      }
      break;
    case 7:
      switch(cVar8) {
      case 'C':
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
      case 'c':
        if ((local_24c & 0x810) == 0) {
          uVar5 = FUN_78023fd0((int *)&param_2);
          local_200[0] = (char)uVar5;
          puVar10 = (undefined1 *)0x1;
        }
        else {
          uVar5 = FUN_78024010(&param_2);
          puVar10 = (undefined1 *)wctomb(local_200,(wchar_t)uVar5);
          if ((int)puVar10 < 0) {
            local_248 = (wchar_t *)local_200;
            local_228 = 1;
            break;
          }
        }
        local_248 = (wchar_t *)local_200;
        break;
      case 'E':
      case 'G':
        local_218 = 1;
        cVar8 = cVar8 + ' ';
      case 'e':
      case 'f':
      case 'g':
        local_248 = (wchar_t *)local_200;
        if (local_244 < 0) {
          local_244 = 6;
        }
        else if ((local_244 == 0) && (cVar8 == 'g')) {
          local_244 = 1;
        }
        local_210 = *param_2;
        local_20c = param_2[1];
        param_2 = param_2 + 2;
        (*(code *)PTR___fptrap_7803fb30)(&local_210,local_200,(int)cVar8,local_244,local_218);
        if (((local_24c & 0x80) != 0) && (local_244 == 0)) {
          (*(code *)PTR___fptrap_7803fb3c)(local_200);
        }
        if ((cVar8 == 'g') && ((local_24c & 0x80) == 0)) {
          (*(code *)PTR___fptrap_7803fb34)(local_200);
        }
        uVar2 = local_24c | 0x40;
        if (local_200[0] == '-') {
          local_248 = (wchar_t *)(local_200 + 1);
          uVar2 = local_24c | 0x140;
        }
        local_24c = uVar2;
        uVar2 = 0xffffffff;
        pwVar6 = local_248;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          wVar1 = *pwVar6;
          pwVar6 = (wchar_t *)((int)pwVar6 + 1);
        } while ((char)wVar1 != '\0');
        puVar10 = (undefined1 *)(~uVar2 - 1);
        break;
      case 'S':
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
      case 's':
        iVar12 = 0x7fffffff;
        if (local_244 != -1) {
          iVar12 = local_244;
        }
        local_248 = (wchar_t *)FUN_78023fd0((int *)&param_2);
        if ((local_24c & 0x810) == 0) {
          pwVar6 = local_248;
          if (local_248 == (wchar_t *)0x0) {
            pwVar6 = (wchar_t *)PTR_DAT_7803fa7c;
            local_248 = (wchar_t *)PTR_DAT_7803fa7c;
          }
          for (; (iVar12 != 0 && (iVar12 = iVar12 + -1, (char)*pwVar6 != '\0'));
              pwVar6 = (wchar_t *)((int)pwVar6 + 1)) {
          }
          puVar10 = (undefined1 *)((int)pwVar6 - (int)local_248);
        }
        else {
          if (local_248 == (wchar_t *)0x0) {
            local_248 = (wchar_t *)PTR_DAT_7803fa80;
          }
          local_230 = 1;
          for (pwVar6 = local_248; (iVar12 != 0 && (iVar12 = iVar12 + -1, *pwVar6 != L'\0'));
              pwVar6 = pwVar6 + 1) {
          }
          puVar10 = (undefined1 *)((int)pwVar6 - (int)local_248 >> 1);
        }
        break;
      case 'X':
        goto switchD_78023861_caseD_58;
      case 'Z':
        psVar3 = (short *)FUN_78023fd0((int *)&param_2);
        if ((psVar3 == (short *)0x0) ||
           (local_248 = *(wchar_t **)(psVar3 + 2), local_248 == (wchar_t *)0x0)) {
          uVar2 = 0xffffffff;
          local_248 = (wchar_t *)PTR_DAT_7803fa7c;
          pcVar11 = PTR_DAT_7803fa7c;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar8 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar8 != '\0');
          puVar10 = (undefined1 *)(~uVar2 - 1);
        }
        else if ((local_24c & 0x800) == 0) {
          puVar10 = (undefined1 *)(int)*psVar3;
          local_230 = 0;
        }
        else {
          local_230 = 1;
          puVar10 = (undefined1 *)((uint)(int)*psVar3 >> 1);
        }
        break;
      case 'd':
      case 'i':
        local_22c = 10;
        local_24c = local_24c | 0x40;
        goto LAB_78023b97;
      case 'n':
        piVar4 = (int *)FUN_78023fd0((int *)&param_2);
        if ((local_24c & 0x20) == 0) {
          local_228 = 1;
          *piVar4 = local_240;
        }
        else {
          local_228 = 1;
          *(undefined2 *)piVar4 = (undefined2)local_240;
        }
        break;
      case 'o':
        local_22c = 8;
        if ((local_24c & 0x80) != 0) {
          local_24c = local_24c | 0x200;
        }
        goto LAB_78023b97;
      case 'p':
        local_244 = 8;
switchD_78023861_caseD_58:
        local_224 = 7;
LAB_78023b52:
        local_22c = 0x10;
        if ((local_24c & 0x80) != 0) {
          local_23a = '0';
          local_239 = (char)local_224 + 'Q';
          local_238 = 2;
        }
        goto LAB_78023b97;
      case 'u':
        local_22c = 10;
LAB_78023b97:
        if ((local_24c & 0x8000) == 0) {
          if ((local_24c & 0x20) == 0) {
            if ((local_24c & 0x40) == 0) {
              uVar2 = FUN_78023fd0((int *)&param_2);
              uVar13 = (ulonglong)uVar2;
            }
            else {
              iVar12 = FUN_78023fd0((int *)&param_2);
              uVar13 = (ulonglong)iVar12;
            }
          }
          else if ((local_24c & 0x40) == 0) {
            uVar2 = FUN_78023fd0((int *)&param_2);
            uVar13 = (ulonglong)uVar2 & 0xffffffff0000ffff;
          }
          else {
            uVar5 = FUN_78023fd0((int *)&param_2);
            uVar13 = (ulonglong)(int)(short)uVar5;
          }
        }
        else {
          uVar13 = FUN_78023ff0((int *)&param_2);
        }
        iVar12 = (int)(uVar13 >> 0x20);
        if ((((local_24c & 0x40) != 0) && (iVar12 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_24c = local_24c | 0x100;
          uVar13 = CONCAT44(-(iVar12 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        iVar12 = (int)(uVar13 >> 0x20);
        if ((local_24c & 0x8000) == 0) {
          iVar12 = 0;
        }
        lVar15 = CONCAT44(iVar12,(int)uVar13);
        if (local_244 < 0) {
          local_244 = 1;
        }
        else {
          local_24c = local_24c & 0xfffffff7;
        }
        local_248 = (wchar_t *)register0x00000010;
        if ((int)uVar13 == 0 && iVar12 == 0) {
          local_238 = 0;
        }
        while( true ) {
          uVar2 = local_22c;
          pwVar6 = (wchar_t *)((int)local_248 + -1);
          iVar12 = local_244 + -1;
          if ((local_244 < 1) && (lVar15 == 0)) break;
          local_204 = (int)local_22c >> 0x1f;
          uVar16 = (uint)((ulonglong)lVar15 >> 0x20);
          uVar14 = __aullrem((uint)lVar15,uVar16,local_22c,local_204);
          iVar7 = (int)uVar14 + 0x30;
          lVar15 = __aulldiv((uint)lVar15,uVar16,uVar2,local_204);
          if (0x39 < iVar7) {
            iVar7 = iVar7 + local_224;
          }
          *(char *)pwVar6 = (char)iVar7;
          local_244 = iVar12;
          local_248 = pwVar6;
        }
        puVar10 = &uStack_1 + -(int)pwVar6;
        local_244 = iVar12;
        if (((local_24c & 0x200) != 0) &&
           (((char)*local_248 != '0' || (puVar10 == (undefined1 *)0x0)))) {
          puVar10 = &stack0x00000000 + -(int)pwVar6;
          *(char *)pwVar6 = '0';
          local_248 = pwVar6;
        }
        break;
      case 'x':
        local_224 = 0x27;
        goto LAB_78023b52;
      }
      if (local_228 == 0) {
        if ((local_24c & 0x40) != 0) {
          if ((local_24c & 0x100) == 0) {
            if ((local_24c & 1) == 0) {
              if ((local_24c & 2) == 0) goto LAB_78023d2f;
              local_23a = ' ';
            }
            else {
              local_23a = '+';
            }
          }
          else {
            local_23a = '-';
          }
          local_238 = 1;
        }
LAB_78023d2f:
        iVar12 = (local_234 - (int)puVar10) - local_238;
        if ((local_24c & 0xc) == 0) {
          FUN_78023f50(0x20,iVar12,&local_240);
        }
        FUN_78023f90(&local_23a,local_238,&local_240);
        if (((local_24c & 8) != 0) && ((local_24c & 4) == 0)) {
          FUN_78023f50(0x30,iVar12,&local_240);
        }
        if ((local_230 == 0) || (pwVar6 = local_248, puVar9 = puVar10, (int)puVar10 < 1)) {
          FUN_78023f90((char *)local_248,(int)puVar10,&local_240);
        }
        else {
          do {
            puVar9 = puVar9 + -1;
            iVar7 = wctomb(local_214,*pwVar6);
            if (iVar7 < 1) break;
            FUN_78023f90(local_214,iVar7,&local_240);
            pwVar6 = pwVar6 + 1;
          } while (puVar9 != (undefined1 *)0x0);
        }
        if ((local_24c & 4) != 0) {
          FUN_78023f50(0x20,iVar12,&local_240);
        }
      }
    }
    cVar8 = *param_1;
    local_21c = CONCAT31(local_21c._1_3_,cVar8);
    pcVar11 = param_1;
  } while( true );
}


