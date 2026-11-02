/* Module: sftrans1.dll
   Function: FUN_004a2200
   Address: 004a2200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004a2200(int *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  HWND pHVar4;
  HWND pHVar5;
  LPARAM LVar6;
  undefined4 uVar7;
  UINT UVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  CHAR local_20 [16];
  CHAR local_10 [12];
  int *piStack_4;
  
  iVar9 = 0;
  uVar10 = (uint)param_3 & 0xffff;
  uVar3 = (uint)param_3 >> 0x10;
  if ((0x9e33 < uVar10) && (uVar10 < 41000)) {
    puVar1 = *(undefined4 **)param_1[2];
    param_3 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00554d40,&param_3);
    }
    iVar9 = (**(code **)*param_3)(param_3,&DAT_00554ba0,&param_5);
    if (-1 < iVar9) {
      (**(code **)(*param_2 + 0x14))(param_2,uVar10 - 0x9e34);
      (**(code **)(*piStack_4 + 8))(piStack_4);
    }
    if (piStack_4 == (int *)0x0) {
      return 0;
    }
    (**(code **)(*piStack_4 + 8))(piStack_4);
    return 0;
  }
  if (uVar10 < 0x718) {
    if (uVar10 == 0x717) goto LAB_004a25f1;
    if (uVar10 < 0x714) {
      if (uVar10 != 0x713) {
        if (0x711 < uVar10) {
          if (uVar10 != 0x712) {
            return 0;
          }
          if (uVar3 != 0x200) {
            return 0;
          }
          FUN_004a2a50(0x712,0x71e,param_1 + 0x1a,0xffffff9c,100,100);
          return 0;
        }
        if (uVar10 == 0x711) {
          if (uVar3 != 0x200) {
            return 0;
          }
          param_3 = (undefined4 *)0x0;
          pHVar4 = GetDlgItem((HWND)param_1[0xc],0x711);
          pHVar5 = GetDlgItem((HWND)param_1[0xc],0x71d);
          param_5 = (undefined4 *)param_1[0x1c];
          iVar9 = GetWindowTextA(pHVar4,local_10,0xf);
          if (iVar9 != 0) {
            fVar11 = (float10)FUN_004d6ed0(local_10,0);
            param_3 = (undefined4 *)(float)fVar11;
            fVar2 = _DAT_00557840;
            if (((fVar11 < (float10)_DAT_00557840) ||
                (fVar2 = _DAT_0055c008, _DAT_0055c008 < (float)param_3)) &&
               ((float)param_3 != fVar2)) {
              FUN_004a19e0();
              return 0;
            }
          }
          FUN_004c6ae0(local_20,&DAT_0055e6e4,(double)(float)param_5);
          fVar11 = (float10)FUN_004d6ed0(local_20,0);
          if (fVar11 != (float10)(float)param_3) {
            param_1[0x1c] = (int)param_3;
            LVar6 = ftol();
            SendMessageA(pHVar5,0x610,0,LVar6);
            (**(code **)(*param_1 + 0x2c))();
          }
        }
        else {
          if (uVar10 == 1000) {
            FUN_004a19e0();
            *param_5 = 1;
            return 0;
          }
          if (uVar10 != 0x710) {
            return 0;
          }
          if (uVar3 != 0x200) {
            return 0;
          }
          param_3 = (undefined4 *)0x0;
          pHVar4 = GetDlgItem((HWND)param_1[0xc],0x710);
          pHVar5 = GetDlgItem((HWND)param_1[0xc],0x71c);
          param_5 = (undefined4 *)param_1[0x1b];
          iVar9 = GetWindowTextA(pHVar4,local_20,0xf);
          if (iVar9 != 0) {
            fVar11 = (float10)FUN_004d6ed0(local_20,0);
            param_3 = (undefined4 *)(float)fVar11;
            fVar2 = _DAT_005649b8;
            if (((fVar11 < (float10)_DAT_005649b8) ||
                (fVar2 = _DAT_005649b4, _DAT_005649b4 < (float)param_3)) &&
               ((float)param_3 != fVar2)) {
              FUN_004a19e0();
              return 0;
            }
          }
          FUN_004c6ae0(local_10,&DAT_0055e6e4,(double)(float)param_5);
          fVar11 = (float10)FUN_004d6ed0(local_10,0);
          if (fVar11 != (float10)(float)param_3) {
            param_1[0x1b] = (int)param_3;
            LVar6 = ftol();
            SendMessageA(pHVar5,0x610,0,LVar6);
            (**(code **)(*param_1 + 0x2c))();
            FUN_004a19e0(pHVar4);
            return 0;
          }
        }
        FUN_004a19e0();
        return 0;
      }
      goto LAB_004a25f5;
    }
    if (uVar10 != 0x714) {
      if (uVar10 != 0x715) {
        if (uVar10 != 0x716) {
          return 0;
        }
        goto LAB_004a25f2;
      }
      goto LAB_004a25f3;
    }
  }
  else {
    if (0x71b < uVar10) {
      if (uVar10 == 0x728) {
        UVar8 = IsDlgButtonChecked((HWND)param_1[0xc],0x728);
        param_1[0x1d] = UVar8;
        (**(code **)(*param_1 + 0x2c))();
        pHVar4 = GetDlgItem((HWND)param_1[0xc],0x712);
        FUN_004a19e0(pHVar4);
        return 0;
      }
      if (uVar10 != 41000) {
        if (uVar10 != 0xa029) {
          return 0;
        }
        FUN_00406390();
        return 0;
      }
      FUN_004c5940(1,param_1[0xc],0x3fd,0xf,0);
      return 0;
    }
    if (uVar10 == 0x71b) {
      iVar9 = 1;
LAB_004a25ee:
      iVar9 = iVar9 + 1;
LAB_004a25ef:
      iVar9 = iVar9 + 1;
    }
    else if (uVar10 != 0x718) {
      if (uVar10 != 0x719) {
        if (uVar10 != 0x71a) {
          return 0;
        }
        goto LAB_004a25ee;
      }
      goto LAB_004a25ef;
    }
    iVar9 = iVar9 + 1;
LAB_004a25f1:
    iVar9 = iVar9 + 1;
LAB_004a25f2:
    iVar9 = iVar9 + 1;
LAB_004a25f3:
    iVar9 = iVar9 + 1;
  }
  iVar9 = iVar9 + 1;
LAB_004a25f5:
  if (uVar3 != 0x200) {
    return 0;
  }
  switch(uVar10) {
  case 0x710:
    uVar7 = 0x71c;
    break;
  case 0x711:
    uVar7 = 0x71d;
    break;
  case 0x712:
    uVar7 = 0x71e;
    break;
  case 0x713:
    uVar7 = 0x71f;
    break;
  case 0x714:
    uVar7 = 0x720;
    break;
  case 0x715:
    uVar7 = 0x721;
    break;
  case 0x716:
    uVar7 = 0x722;
    break;
  case 0x717:
    uVar7 = 0x723;
    break;
  case 0x718:
    uVar7 = 0x724;
    break;
  case 0x719:
    uVar7 = 0x725;
    break;
  case 0x71a:
    uVar7 = 0x726;
    break;
  case 0x71b:
    uVar7 = 0x727;
    break;
  default:
    uVar7 = 0xffffffff;
  }
  FUN_004a2a50(uVar10,uVar7,param_1 + iVar9 + 0x1e,0xffffff9c,100,10);
  return 0;
}


