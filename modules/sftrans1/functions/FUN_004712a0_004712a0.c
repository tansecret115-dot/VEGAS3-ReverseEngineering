/* Module: sftrans1.dll
   Function: FUN_004712a0
   Address: 004712a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004712a0(int *param_1,undefined4 param_2,uint param_3,HWND param_4,undefined4 *param_5)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UINT UVar5;
  float10 fVar6;
  CHAR local_10c [264];
  
  uVar3 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if (0x5b7 < uVar3) {
    if (uVar3 < 0xa029) {
      if (uVar3 == 41000) {
        FUN_004c5940(1,param_1[0xc],0x3ef,0xf,0);
        return 0;
      }
      if (uVar3 == 0x5b8) {
        if (param_3 == 0x200) {
          dVar1 = *(double *)(param_1 + 0x1e);
          *(double *)(param_1 + 0x1e) = dVar1;
          iVar4 = GetWindowTextA(param_4,local_10c,0x104);
          if (iVar4 != 0) {
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
            *(double *)(param_1 + 0x1e) = (double)fVar6;
            if ((float10)_DAT_0055ca40 < ABS(fVar6 - (float10)dVar1)) {
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
          goto LAB_00471397;
        }
      }
      else if (uVar3 == 0x5b9) {
        UVar5 = IsDlgButtonChecked((HWND)param_1[0xc],0x5b9);
        param_1[0x24] = UVar5;
        if (UVar5 != 0) {
          param_1[0x22] = param_1[0x20];
          param_1[0x23] = param_1[0x21];
        }
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else if (uVar3 == 0xa029) {
      FUN_00406390(param_1[0xc]);
    }
    return 0;
  }
  if (uVar3 == 0x5b7) {
    if (param_3 != 0x200) {
      return 0;
    }
    dVar1 = *(double *)(param_1 + 0x1c);
    *(double *)(param_1 + 0x1c) = dVar1;
    iVar4 = GetWindowTextA(param_4,local_10c,0x104);
    if (iVar4 == 0) goto LAB_00471397;
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
    *(double *)(param_1 + 0x1c) = (double)fVar6;
    fVar6 = fVar6 - (float10)dVar1;
  }
  else {
    if (uVar3 < 0x5b5) {
      if (uVar3 == 0x5b4) {
        if (param_3 != 0x200) {
          return 0;
        }
        dVar1 = *(double *)(param_1 + 0x20);
        *(double *)(param_1 + 0x20) = dVar1;
        bVar2 = false;
        iVar4 = GetWindowTextA(param_4,local_10c,0x104);
        if (iVar4 != 0) {
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
          if (ABS(fVar6 - (float10)dVar1) <= (float10)_DAT_0055ca40) {
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
        if (uVar3 == 1000) {
          FUN_00470cc0();
          *param_5 = 1;
          return 0;
        }
        if (uVar3 != 0x5b1) {
          return 0;
        }
        if (param_3 != 0x200) {
          return 0;
        }
        dVar1 = *(double *)(param_1 + 0x1a);
        *(double *)(param_1 + 0x1a) = dVar1;
        iVar4 = GetWindowTextA(param_4,local_10c,0x104);
        if (iVar4 != 0) {
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
          if ((float10)_DAT_0055ca40 < ABS(fVar6 - (float10)dVar1)) {
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      goto LAB_00471397;
    }
    if (uVar3 != 0x5b6) {
      return 0;
    }
    if (param_3 != 0x200) {
      return 0;
    }
    dVar1 = *(double *)(param_1 + 0x22);
    *(double *)(param_1 + 0x22) = dVar1;
    iVar4 = GetWindowTextA(param_4,local_10c,0x104);
    if (iVar4 == 0) goto LAB_00471397;
    fVar6 = (float10)FUN_004d6ed0(local_10c,0);
    if ((float10)_DAT_0055ca40 <= fVar6) {
      fVar6 = (float10)FUN_004d6ed0(local_10c,0);
      if (fVar6 <= (float10)_DAT_00555908) {
        fVar6 = (float10)FUN_004d6ed0(local_10c,0);
        *(double *)(param_1 + 0x22) = (double)fVar6;
        fVar6 = fVar6 - (float10)dVar1;
      }
      else {
        fVar6 = (float10)_DAT_00555908;
        *(double *)(param_1 + 0x22) = _DAT_00555908;
        fVar6 = fVar6 - (float10)dVar1;
      }
    }
    else {
      fVar6 = (float10)_DAT_0055ca40;
      *(double *)(param_1 + 0x22) = _DAT_0055ca40;
      fVar6 = fVar6 - (float10)dVar1;
    }
  }
  if ((float10)_DAT_0055ca40 < ABS(fVar6)) {
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
LAB_00471397:
  FUN_00470cc0();
  return 0;
}


