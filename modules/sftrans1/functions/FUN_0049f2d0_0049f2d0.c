/* Module: sftrans1.dll
   Function: FUN_0049f2d0
   Address: 0049f2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0049f2d0(int *param_1,short param_2,undefined2 param_3,HWND param_4,undefined4 *param_5)

{
  double *pdVar1;
  undefined4 *puVar2;
  int iVar3;
  LRESULT LVar4;
  HWND pHVar5;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar6;
  undefined8 uVar7;
  double dVar8;
  int *piStack_118;
  CHAR aCStack_114 [4];
  int *local_110 [67];
  
  uVar7 = CONCAT44(unaff_ESI,unaff_EDI);
  puVar2 = *(undefined4 **)param_1[2];
  local_110[0] = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00555130,local_110);
  }
  pdVar1 = (double *)(param_1 + 0x1a);
  (**(code **)(*local_110[0] + 0xc))(local_110[0],pdVar1,uVar7);
  switch(param_3) {
  case 0xed:
    if (param_2 == 0x200) {
      dVar8 = *pdVar1;
      *pdVar1 = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
            *pdVar1 = (double)fVar6;
            fVar6 = fVar6 - (float10)dVar8;
          }
          else {
            fVar6 = (float10)_DAT_00555908;
            *pdVar1 = _DAT_00555908;
            fVar6 = fVar6 - (float10)dVar8;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
          *pdVar1 = _DAT_00557828;
          fVar6 = fVar6 - (float10)dVar8;
        }
LAB_0049f9eb:
        if ((float10)_DAT_0055ca40 < ABS(fVar6)) {
          (**(code **)(*param_1 + 0x2c))(param_1);
          *param_5 = 1;
          goto LAB_0049fb75;
        }
      }
LAB_0049fa0e:
      FUN_0049e940();
    }
    break;
  default:
    *param_5 = 0;
    goto LAB_0049fb75;
  case 0xef:
    if (param_2 == 0) {
      LVar4 = SendMessageA(param_4,0xf0,0,0);
      if ((uint)(LVar4 == 1) != param_1[0x1c]) {
        param_1[0x1c] = (uint)(LVar4 == 1);
        (**(code **)(*param_1 + 0x2c))(param_1);
      }
    }
    *param_5 = 1;
    goto LAB_0049fb75;
  case 0xf0:
    if (param_2 == 0xa0a) {
      pHVar5 = GetDlgItem((HWND)param_1[0xc],0xf0);
      iVar3 = FUN_00527460(pHVar5);
      param_1[0x1d] = *(int *)(iVar3 + 0x44);
      param_1[0x1e] = *(int *)(iVar3 + 0x48);
      param_1[0x1f] = *(int *)(iVar3 + 0x4c);
      param_1[0x20] = *(int *)(iVar3 + 0x50);
      (**(code **)(*param_1 + 0x2c))(param_1);
    }
    *param_5 = 1;
    goto LAB_0049fb75;
  case 0xf1:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x26);
      *(double *)(param_1 + 0x26) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
            *(double *)(param_1 + 0x26) = (double)fVar6;
            fVar6 = fVar6 - (float10)dVar8;
          }
          else {
            fVar6 = (float10)_DAT_00555908;
            *(double *)(param_1 + 0x26) = _DAT_00555908;
            fVar6 = fVar6 - (float10)dVar8;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
          *(double *)(param_1 + 0x26) = _DAT_00557828;
          fVar6 = fVar6 - (float10)dVar8;
        }
        goto LAB_0049f9eb;
      }
      goto LAB_0049fa0e;
    }
    break;
  case 0xf3:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x28);
      *(double *)(param_1 + 0x28) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
            *(double *)(param_1 + 0x28) = (double)fVar6;
            fVar6 = fVar6 - (float10)dVar8;
          }
          else {
            fVar6 = (float10)_DAT_00555908;
            *(double *)(param_1 + 0x28) = _DAT_00555908;
            fVar6 = fVar6 - (float10)dVar8;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
          *(double *)(param_1 + 0x28) = _DAT_00557828;
          fVar6 = fVar6 - (float10)dVar8;
        }
LAB_0049faaf:
        if ((float10)_DAT_0055ca40 < ABS(fVar6)) {
          (**(code **)(*param_1 + 0x2c))(param_1);
          *param_5 = 1;
          goto LAB_0049fb75;
        }
      }
LAB_0049fad2:
      FUN_0049e940();
    }
    goto LAB_0049fad9;
  case 0xf5:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x22);
      *(double *)(param_1 + 0x22) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          }
          else {
            fVar6 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
        }
        *(double *)(param_1 + 0x22) = (double)fVar6;
        fVar6 = fVar6 - (float10)dVar8;
        goto LAB_0049f9eb;
      }
      goto LAB_0049fa0e;
    }
    break;
  case 0xf7:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x24);
      *(double *)(param_1 + 0x24) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          }
          else {
            fVar6 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
        }
        *(double *)(param_1 + 0x24) = (double)fVar6;
        fVar6 = fVar6 - (float10)dVar8;
        goto LAB_0049faaf;
      }
      goto LAB_0049fad2;
    }
    goto LAB_0049fad9;
  case 0xf9:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x32);
      *(double *)(param_1 + 0x32) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
            *(double *)(param_1 + 0x32) = (double)fVar6;
            fVar6 = fVar6 - (float10)dVar8;
          }
          else {
            fVar6 = (float10)_DAT_00555908;
            *(double *)(param_1 + 0x32) = _DAT_00555908;
            fVar6 = fVar6 - (float10)dVar8;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
          *(double *)(param_1 + 0x32) = _DAT_00557828;
          fVar6 = fVar6 - (float10)dVar8;
        }
LAB_0049f50d:
        if ((float10)_DAT_0055ca40 < ABS(fVar6)) {
          (**(code **)(*param_1 + 0x2c))(param_1);
          *param_5 = 1;
          goto LAB_0049fb75;
        }
      }
LAB_0049f94a:
      FUN_0049e940();
    }
    goto LAB_0049f951;
  case 0xfb:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x34);
      *(double *)(param_1 + 0x34) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
            *(double *)(param_1 + 0x34) = (double)fVar6;
            fVar6 = fVar6 - (float10)dVar8;
          }
          else {
            fVar6 = (float10)_DAT_00555908;
            *(double *)(param_1 + 0x34) = _DAT_00555908;
            fVar6 = fVar6 - (float10)dVar8;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
          *(double *)(param_1 + 0x34) = _DAT_00557828;
          fVar6 = fVar6 - (float10)dVar8;
        }
        goto LAB_0049f9eb;
      }
      goto LAB_0049fa0e;
    }
    break;
  case 0xfd:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x2e);
      *(double *)(param_1 + 0x2e) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
            *(double *)(param_1 + 0x2e) = (double)fVar6;
            fVar6 = fVar6 - (float10)dVar8;
          }
          else {
            fVar6 = (float10)_DAT_00555908;
            *(double *)(param_1 + 0x2e) = _DAT_00555908;
            fVar6 = fVar6 - (float10)dVar8;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
          *(double *)(param_1 + 0x2e) = _DAT_00557828;
          fVar6 = fVar6 - (float10)dVar8;
        }
        goto LAB_0049faaf;
      }
      goto LAB_0049fad2;
    }
    goto LAB_0049fad9;
  case 0xff:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x30);
      *(double *)(param_1 + 0x30) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
            *(double *)(param_1 + 0x30) = (double)fVar6;
            fVar6 = fVar6 - (float10)dVar8;
          }
          else {
            fVar6 = (float10)_DAT_00555908;
            *(double *)(param_1 + 0x30) = _DAT_00555908;
            fVar6 = fVar6 - (float10)dVar8;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
          *(double *)(param_1 + 0x30) = _DAT_00557828;
          fVar6 = fVar6 - (float10)dVar8;
        }
        goto LAB_0049f50d;
      }
      goto LAB_0049f94a;
    }
    goto LAB_0049f951;
  case 0x101:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x2a);
      *(double *)(param_1 + 0x2a) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
            *(double *)(param_1 + 0x2a) = (double)fVar6;
            fVar6 = fVar6 - (float10)dVar8;
          }
          else {
            fVar6 = (float10)_DAT_00555908;
            *(double *)(param_1 + 0x2a) = _DAT_00555908;
            fVar6 = fVar6 - (float10)dVar8;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
          *(double *)(param_1 + 0x2a) = _DAT_00557828;
          fVar6 = fVar6 - (float10)dVar8;
        }
        goto LAB_0049faaf;
      }
      goto LAB_0049fad2;
    }
LAB_0049fad9:
    *param_5 = 1;
    goto LAB_0049fb75;
  case 0x103:
    if (param_2 == 0x200) {
      dVar8 = *(double *)(param_1 + 0x2c);
      *(double *)(param_1 + 0x2c) = dVar8;
      iVar3 = GetWindowTextA(param_4,aCStack_114,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
        if ((float10)_DAT_00557828 <= fVar6) {
          fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          if (fVar6 <= (float10)_DAT_00555908) {
            fVar6 = (float10)FUN_004d6ed0(aCStack_114,0);
          }
          else {
            fVar6 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar6 = (float10)_DAT_00557828;
        }
        *(double *)(param_1 + 0x2c) = (double)fVar6;
        fVar6 = fVar6 - (float10)dVar8;
        goto LAB_0049f50d;
      }
      goto LAB_0049f94a;
    }
LAB_0049f951:
    *param_5 = 1;
    goto LAB_0049fb75;
  }
  *param_5 = 1;
LAB_0049fb75:
  if (piStack_118 != (int *)0x0) {
    (**(code **)(*piStack_118 + 8))(piStack_118);
  }
  return 0;
}


