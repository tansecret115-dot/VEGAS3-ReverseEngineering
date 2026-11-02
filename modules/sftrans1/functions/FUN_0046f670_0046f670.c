/* Module: sftrans1.dll
   Function: FUN_0046f670
   Address: 0046f670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0046f670(int *param_1,undefined4 param_2,uint param_3,HWND param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  UINT UVar4;
  int *unaff_ESI;
  uint uVar5;
  float10 fVar6;
  int *piVar7;
  double *pdVar8;
  double local_118;
  int *local_110;
  CHAR local_10c [264];
  
  uVar5 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((0x9e33 < uVar5) && (uVar5 < 41000)) {
    puVar1 = *(undefined4 **)param_1[2];
    local_110 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00554c70,&local_110);
    }
    pdVar8 = &local_118;
    piVar7 = local_110;
    iVar3 = (**(code **)*local_110)(local_110,&DAT_00554ba0);
    if (-1 < iVar3) {
      (**(code **)(*(int *)pdVar8 + 0x14))(pdVar8,uVar5 - 0x9e34);
      (**(code **)(*piVar7 + 8))(piVar7);
    }
    if (unaff_ESI == (int *)0x0) {
      return 0;
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    return 0;
  }
  if (0x5b7 < uVar5) {
    if (41000 < uVar5) {
      if (uVar5 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    if (uVar5 == 41000) {
      FUN_004c5940(1,param_1[0xc],0x3f4,0xf,0);
      return 0;
    }
    if (uVar5 != 0x5b8) {
      if (uVar5 != 0x5b9) {
        return 0;
      }
      UVar4 = IsDlgButtonChecked((HWND)param_1[0xc],0x5b9);
      param_1[0x24] = UVar4;
      if (UVar4 != 0) {
        param_1[0x22] = param_1[0x20];
        param_1[0x23] = param_1[0x21];
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    if (param_3 != 0x200) {
      return 0;
    }
    local_118 = *(double *)(param_1 + 0x1e);
    *(double *)(param_1 + 0x1e) = local_118;
    iVar3 = GetWindowTextA(param_4,local_10c,0x104);
    if (iVar3 != 0) {
      fVar6 = (float10)FUN_004d6ed0(local_10c,0);
      if ((float10)_DAT_00555910 <= fVar6) {
        fVar6 = (float10)FUN_004d6ed0(local_10c,0);
        if (fVar6 <= (float10)_DAT_00555908) {
          fVar6 = (float10)FUN_004d6ed0(local_10c,0);
        }
        else {
          fVar6 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar6 = (float10)_DAT_00555910;
      }
      *(double *)(param_1 + 0x1e) = (double)fVar6;
      if ((float10)_DAT_0055ca40 < ABS(fVar6 - (float10)local_118)) {
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    goto LAB_0046f7e7;
  }
  if (uVar5 == 0x5b7) {
    if (param_3 != 0x200) {
      return 0;
    }
    local_118 = *(double *)(param_1 + 0x1c);
    *(double *)(param_1 + 0x1c) = local_118;
    iVar3 = GetWindowTextA(param_4,local_10c,0x104);
    if (iVar3 == 0) goto LAB_0046f7e7;
    fVar6 = (float10)FUN_004d6ed0(local_10c,0);
    if ((float10)_DAT_00555910 <= fVar6) {
      fVar6 = (float10)FUN_004d6ed0(local_10c,0);
      if (fVar6 <= (float10)_DAT_00555908) {
        fVar6 = (float10)FUN_004d6ed0(local_10c,0);
      }
      else {
        fVar6 = (float10)_DAT_00555908;
      }
    }
    else {
      fVar6 = (float10)_DAT_00555910;
    }
    *(double *)(param_1 + 0x1c) = (double)fVar6;
    fVar6 = fVar6 - (float10)local_118;
  }
  else {
    if (uVar5 < 0x5b5) {
      if (uVar5 == 0x5b4) {
        if (param_3 != 0x200) {
          return 0;
        }
        local_118 = *(double *)(param_1 + 0x20);
        *(double *)(param_1 + 0x20) = local_118;
        bVar2 = false;
        iVar3 = GetWindowTextA(param_4,local_10c,0x104);
        if (iVar3 != 0) {
          fVar6 = (float10)FUN_004d6ed0(local_10c,0);
          if ((float10)_DAT_0055ca40 <= fVar6) {
            fVar6 = (float10)FUN_004d6ed0(local_10c,0);
            if (fVar6 <= (float10)_DAT_00555908) {
              fVar6 = (float10)FUN_004d6ed0(local_10c,0);
            }
            else {
              fVar6 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar6 = (float10)_DAT_0055ca40;
          }
          *(double *)(param_1 + 0x20) = (double)fVar6;
          if (ABS(fVar6 - (float10)local_118) <= (float10)_DAT_0055ca40) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        if (param_1[0x24] != 0) {
          param_1[0x22] = param_1[0x20];
          param_1[0x23] = param_1[0x21];
        }
        if (bVar2) {
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      else {
        if (uVar5 == 1000) {
          FUN_0046f090();
          *param_5 = 1;
          return 0;
        }
        if (uVar5 != 0x5b1) {
          return 0;
        }
        if (param_3 != 0x200) {
          return 0;
        }
        local_118 = *(double *)(param_1 + 0x1a);
        *(double *)(param_1 + 0x1a) = local_118;
        iVar3 = GetWindowTextA(param_4,local_10c,0x104);
        if (iVar3 != 0) {
          fVar6 = (float10)FUN_004d6ed0(local_10c,0);
          if ((float10)_DAT_00557828 <= fVar6) {
            fVar6 = (float10)FUN_004d6ed0(local_10c,0);
            if (fVar6 <= (float10)_DAT_00555908) {
              fVar6 = (float10)FUN_004d6ed0(local_10c,0);
            }
            else {
              fVar6 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar6 = (float10)_DAT_00557828;
          }
          *(double *)(param_1 + 0x1a) = (double)fVar6;
          if ((float10)_DAT_0055ca40 < ABS(fVar6 - (float10)local_118)) {
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      goto LAB_0046f7e7;
    }
    if (uVar5 != 0x5b6) {
      return 0;
    }
    if (param_3 != 0x200) {
      return 0;
    }
    local_118 = *(double *)(param_1 + 0x22);
    *(double *)(param_1 + 0x22) = local_118;
    iVar3 = GetWindowTextA(param_4,local_10c,0x104);
    if (iVar3 == 0) goto LAB_0046f7e7;
    fVar6 = (float10)FUN_004d6ed0(local_10c,0);
    if ((float10)_DAT_0055ca40 <= fVar6) {
      fVar6 = (float10)FUN_004d6ed0(local_10c,0);
      if (fVar6 <= (float10)_DAT_00555908) {
        fVar6 = (float10)FUN_004d6ed0(local_10c,0);
        *(double *)(param_1 + 0x22) = (double)fVar6;
        fVar6 = fVar6 - (float10)local_118;
      }
      else {
        fVar6 = (float10)_DAT_00555908;
        *(double *)(param_1 + 0x22) = _DAT_00555908;
        fVar6 = fVar6 - (float10)local_118;
      }
    }
    else {
      fVar6 = (float10)_DAT_0055ca40;
      *(double *)(param_1 + 0x22) = _DAT_0055ca40;
      fVar6 = fVar6 - (float10)local_118;
    }
  }
  if ((float10)_DAT_0055ca40 < ABS(fVar6)) {
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
LAB_0046f7e7:
  FUN_0046f090();
  return 0;
}


