/* Module: pncrt.dll
   Function: FUN_780285a0
   Address: 780285a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_780285a0(FILE *param_1,short *param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  ushort uVar9;
  undefined4 unaff_EBX;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint local_44c;
  byte *local_448;
  byte *local_444;
  int local_440;
  int local_43c;
  int local_438;
  int local_434;
  int local_430;
  char local_42a;
  undefined1 local_429;
  undefined2 local_428;
  short local_426;
  int local_424;
  undefined4 local_420;
  uint local_41c;
  int local_418;
  int local_414;
  undefined4 local_410;
  undefined4 local_40c;
  uint local_404;
  undefined2 local_400;
  byte local_201 [513];
  
  local_414 = 0;
  sVar2 = *param_2;
  uVar10 = CONCAT22((short)((uint)unaff_EBX >> 0x10),sVar2);
  local_444 = (byte *)0x0;
  local_43c = 0;
  pbVar13 = (byte *)0x0;
  psVar4 = param_2;
  pbVar11 = local_448;
  do {
    if ((sVar2 == 0) || (param_2 = psVar4 + 1, local_43c < 0)) {
      return local_43c;
    }
    uVar9 = (ushort)uVar10;
    if ((uVar9 < 0x20) || (0x78 < uVar9)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (byte)"MessageBoxA"[(uVar10 & 0xffff) + 4] & 0xf;
    }
    local_414 = (int)(char)(&DAT_78036f98)[uVar3 * 8 + local_414] >> 4;
    pbVar12 = pbVar11;
    pbVar8 = pbVar13;
    switch(local_414) {
    case 0:
switchD_78028631_caseD_0:
      local_434 = 1;
      FUN_78028f00(uVar10,param_1,&local_43c);
      break;
    case 1:
      local_440 = -1;
      local_420 = 0;
      local_424 = 0;
      local_430 = 0;
      local_438 = 0;
      local_44c = 0;
      local_434 = 0;
      break;
    case 2:
      uVar3 = uVar10 & 0xffff;
      uVar10 = uVar3 - 0x20;
      switch(uVar3) {
      case 0x20:
        local_44c = local_44c | 2;
        break;
      case 0x23:
        local_44c = local_44c | 0x80;
        break;
      case 0x2b:
        local_44c = local_44c | 1;
        break;
      case 0x2d:
        local_44c = local_44c | 4;
        break;
      case 0x30:
        local_44c = local_44c | 8;
      }
      break;
    case 3:
      if (uVar9 == 0x2a) {
        local_430 = FUN_78023fd0((int *)&param_3);
        pbVar12 = local_448;
        pbVar8 = local_444;
        if (local_430 < 0) {
          local_44c = local_44c | 4;
          local_430 = -local_430;
          pbVar12 = pbVar11;
          pbVar8 = pbVar13;
        }
      }
      else {
        uVar10 = uVar10 & 0xffff;
        local_430 = (uVar10 - 0x30) + local_430 * 10;
      }
      break;
    case 4:
      local_440 = 0;
      break;
    case 5:
      if (uVar9 == 0x2a) {
        local_440 = FUN_78023fd0((int *)&param_3);
        pbVar12 = local_448;
        pbVar8 = local_444;
        if (local_440 < 0) {
          local_440 = -1;
          pbVar12 = pbVar11;
          pbVar8 = pbVar13;
        }
      }
      else {
        uVar10 = uVar10 & 0xffff;
        local_440 = (uVar10 - 0x30) + local_440 * 10;
      }
      break;
    case 6:
      uVar3 = uVar10 & 0xffff;
      if (uVar3 == 0x49) {
        if ((*param_2 != 0x36) || (psVar4[2] != 0x34)) {
          local_414 = 0;
          goto switchD_78028631_caseD_0;
        }
        param_2 = psVar4 + 3;
        local_44c = local_44c | 0x8000;
      }
      else if (uVar3 == 0x68) {
        local_44c = local_44c | 0x20;
      }
      else if (uVar3 == 0x77) {
        local_44c = local_44c | 0x800;
      }
      break;
    case 7:
      pbVar12 = local_448;
      switch(uVar10 & 0xffff) {
      case 0x43:
        if ((local_44c & 0x830) == 0) {
          local_44c = local_44c | 0x20;
        }
      case 99:
        pbVar13 = (byte *)0x1;
        local_434 = 1;
        local_41c = FUN_78023fd0((int *)&param_3);
        local_444 = pbVar13;
        if ((local_44c & 0x20) == 0) {
          local_400 = (wchar_t)local_41c;
        }
        else {
          local_42a = (char)local_41c;
          local_429 = 0;
          iVar7 = mbtowc(&local_400,&local_42a,__mb_cur_max);
          if (iVar7 < 0) {
            pbVar11 = (byte *)&local_400;
            local_424 = 1;
            pbVar12 = pbVar11;
            break;
          }
        }
        pbVar11 = (byte *)&local_400;
        pbVar12 = pbVar11;
        break;
      case 0x45:
      case 0x47:
        local_420 = 1;
        uVar10 = uVar10 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        if (local_440 < 0) {
          local_440 = 6;
        }
        else if ((local_440 == 0) && ((short)uVar10 == 0x67)) {
          local_440 = 1;
        }
        local_410 = *param_3;
        local_40c = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_7803fb30)
                  (&local_410,&local_400,(int)(char)uVar10,local_440,local_420);
        if (((local_44c & 0x80) != 0) && (local_440 == 0)) {
          (*(code *)PTR___fptrap_7803fb3c)(&local_400);
        }
        if (((short)uVar10 == 0x67) && ((local_44c & 0x80) == 0)) {
          (*(code *)PTR___fptrap_7803fb34)(&local_400);
        }
        pbVar13 = (byte *)&local_400;
        uVar3 = local_44c | 0x40;
        if ((byte)local_400 == 0x2d) {
          pbVar13 = (byte *)((int)&local_400 + 1);
          uVar3 = local_44c | 0x140;
        }
LAB_78028ad5:
        local_44c = uVar3;
        pbVar11 = pbVar13;
        uVar3 = 0xffffffff;
        pbVar13 = pbVar11;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar1 != 0);
        pbVar13 = (byte *)(~uVar3 - 1);
        pbVar12 = pbVar11;
        local_444 = pbVar13;
        break;
      case 0x53:
        if ((local_44c & 0x830) == 0) {
          local_44c = local_44c | 0x20;
        }
      case 0x73:
        iVar7 = 0x7fffffff;
        if (local_440 != -1) {
          iVar7 = local_440;
        }
        pbVar11 = (byte *)FUN_78023fd0((int *)&param_3);
        if ((local_44c & 0x20) == 0) {
          if (pbVar11 == (byte *)0x0) {
            pbVar11 = PTR_DAT_7803fa80;
          }
          local_434 = 1;
          for (pbVar13 = pbVar11; (iVar7 != 0 && (iVar7 = iVar7 + -1, *(short *)pbVar13 != 0));
              pbVar13 = pbVar13 + 2) {
          }
          pbVar13 = (byte *)((int)pbVar13 - (int)pbVar11 >> 1);
          pbVar12 = pbVar11;
          local_444 = pbVar13;
        }
        else {
          if (pbVar11 == (byte *)0x0) {
            pbVar11 = PTR_DAT_7803fa7c;
          }
          local_444 = (byte *)0x0;
          pbVar8 = pbVar11;
          pbVar13 = (byte *)0x0;
          pbVar12 = pbVar11;
          if (0 < iVar7) {
            do {
              pbVar13 = local_444;
              if (*pbVar8 == 0) break;
              if ((_pctype[(uint)*pbVar8 * 2 + 1] & 0x80) != 0) {
                pbVar8 = pbVar8 + 1;
              }
              pbVar13 = local_444 + 1;
              pbVar8 = pbVar8 + 1;
              local_444 = pbVar13;
            } while ((int)pbVar13 < iVar7);
          }
        }
        break;
      case 0x58:
        goto switchD_78028819_caseD_58;
      case 0x5a:
        psVar4 = (short *)FUN_78023fd0((int *)&param_3);
        pbVar13 = PTR_DAT_7803fa7c;
        uVar3 = local_44c;
        if ((psVar4 != (short *)0x0) && (pbVar11 = *(byte **)(psVar4 + 2), pbVar11 != (byte *)0x0))
        {
          pbVar12 = pbVar11;
          if ((local_44c & 0x800) == 0) {
            pbVar13 = (byte *)(int)*psVar4;
            local_434 = 0;
            local_444 = pbVar13;
          }
          else {
            local_434 = 1;
            pbVar13 = (byte *)((uint)(int)*psVar4 >> 1);
            local_444 = pbVar13;
          }
          break;
        }
        goto LAB_78028ad5;
      case 100:
      case 0x69:
        local_444 = (byte *)0xa;
        local_44c = local_44c | 0x40;
        goto LAB_78028b63;
      case 0x6e:
        piVar5 = (int *)FUN_78023fd0((int *)&param_3);
        if ((local_44c & 0x20) == 0) {
          local_424 = 1;
          *piVar5 = local_43c;
        }
        else {
          local_424 = 1;
          *(undefined2 *)piVar5 = (undefined2)local_43c;
        }
        break;
      case 0x6f:
        local_444 = (byte *)0x8;
        if ((local_44c & 0x80) != 0) {
          local_44c = local_44c | 0x200;
        }
        goto LAB_78028b63;
      case 0x70:
        local_440 = 8;
switchD_78028819_caseD_58:
        local_418 = 7;
LAB_78028b1a:
        local_444 = (byte *)0x10;
        if ((local_44c & 0x80) != 0) {
          local_426 = (short)local_418 + 0x51;
          local_428 = 0x30;
          local_438 = 2;
        }
        goto LAB_78028b63;
      case 0x75:
        local_444 = (byte *)0xa;
LAB_78028b63:
        if ((local_44c & 0x8000) == 0) {
          if ((local_44c & 0x20) == 0) {
            if ((local_44c & 0x40) == 0) {
              uVar10 = FUN_78023fd0((int *)&param_3);
              uVar14 = (ulonglong)uVar10;
            }
            else {
              iVar7 = FUN_78023fd0((int *)&param_3);
              uVar14 = (ulonglong)iVar7;
            }
          }
          else if ((local_44c & 0x40) == 0) {
            uVar10 = FUN_78023fd0((int *)&param_3);
            uVar14 = (ulonglong)uVar10 & 0xffffffff0000ffff;
          }
          else {
            uVar6 = FUN_78023fd0((int *)&param_3);
            uVar14 = (ulonglong)(int)(short)uVar6;
          }
        }
        else {
          uVar14 = FUN_78023ff0((int *)&param_3);
        }
        iVar7 = (int)(uVar14 >> 0x20);
        if ((((local_44c & 0x40) != 0) && (iVar7 == 0 || (longlong)uVar14 < 0)) &&
           ((longlong)uVar14 < 0)) {
          local_44c = local_44c | 0x100;
          uVar14 = CONCAT44(-(iVar7 + (uint)((int)uVar14 != 0)),-(int)uVar14);
        }
        iVar7 = (int)(uVar14 >> 0x20);
        if ((local_44c & 0x8000) == 0) {
          iVar7 = 0;
        }
        lVar16 = CONCAT44(iVar7,(int)uVar14);
        if (local_440 < 0) {
          local_440 = 1;
        }
        else {
          local_44c = local_44c & 0xfffffff7;
        }
        if ((int)uVar14 == 0 && iVar7 == 0) {
          local_438 = 0;
        }
        local_448 = local_201;
        iVar7 = local_440;
        uVar10 = local_44c;
        while ((local_440 = iVar7 + -1, 0 < iVar7 || (lVar16 != 0))) {
          local_404 = 0;
          uVar3 = (uint)((ulonglong)lVar16 >> 0x20);
          uVar15 = __aullrem((uint)lVar16,uVar3,(uint)local_444,0);
          uVar10 = (int)uVar15 + 0x30;
          lVar16 = __aulldiv((uint)lVar16,uVar3,(uint)local_444,local_404);
          if (0x39 < (int)uVar10) {
            uVar10 = uVar10 + local_418;
          }
          *local_448 = (byte)uVar10;
          local_448 = local_448 + -1;
          iVar7 = local_440;
        }
        pbVar13 = local_201 + -(int)local_448;
        pbVar11 = local_448 + 1;
        pbVar12 = pbVar11;
        local_444 = pbVar13;
        if (((local_44c & 0x200) != 0) && ((*pbVar11 != 0x30 || (pbVar13 == (byte *)0x0)))) {
          pbVar13 = local_201 + -(int)local_448 + 1;
          *local_448 = 0x30;
          pbVar11 = local_448;
          pbVar12 = local_448;
          local_444 = pbVar13;
        }
        break;
      case 0x78:
        local_418 = 0x27;
        goto LAB_78028b1a;
      }
      local_448 = pbVar12;
      pbVar12 = pbVar11;
      pbVar8 = pbVar13;
      if (local_424 == 0) {
        if ((local_44c & 0x40) != 0) {
          if ((local_44c & 0x100) == 0) {
            if ((local_44c & 1) == 0) {
              if ((local_44c & 2) == 0) goto LAB_78028d0c;
              local_428 = 0x20;
            }
            else {
              local_428 = 0x2b;
            }
          }
          else {
            local_428 = 0x2d;
          }
          local_438 = 1;
        }
LAB_78028d0c:
        uVar10 = (local_430 - local_438) - (int)pbVar13;
        if ((local_44c & 0xc) == 0) {
          FUN_78028f30(0x20,uVar10,param_1,&local_43c);
        }
        FUN_78028f70(&local_428,local_438,param_1,&local_43c);
        if (((local_44c & 8) != 0) && ((local_44c & 4) == 0)) {
          FUN_78028f30(0x30,uVar10,param_1,&local_43c);
        }
        if ((local_434 == 0) && (pbVar8 = local_448, pbVar12 = local_444, 0 < (int)pbVar13)) {
          do {
            pbVar12 = pbVar12 + -1;
            iVar7 = mbtowc((wchar_t *)&local_41c,(char *)pbVar8,__mb_cur_max);
            if (iVar7 < 1) break;
            FUN_78028f00(local_41c,param_1,&local_43c);
            pbVar8 = pbVar8 + iVar7;
          } while (0 < (int)pbVar12);
        }
        else {
          FUN_78028f70((undefined2 *)pbVar11,(int)pbVar13,param_1,&local_43c);
        }
        pbVar12 = local_448;
        pbVar8 = local_444;
        if ((local_44c & 4) != 0) {
          FUN_78028f30(0x20,uVar10,param_1,&local_43c);
        }
      }
    }
    sVar2 = *param_2;
    uVar10 = CONCAT22((short)(uVar10 >> 0x10),sVar2);
    pbVar13 = pbVar8;
    psVar4 = param_2;
    pbVar11 = pbVar12;
  } while( true );
}


