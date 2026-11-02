/* Module: vegas30.exe
   Function: FUN_00590570
   Address: 00590570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00590570(int param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,double param_7,double param_8)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  uint _NewValue;
  
  _NewValue = _controlfp(0,0);
  _controlfp(0x300,0x300);
  if (param_6 == 1) {
    if (0 < param_3) {
      do {
        iVar2 = (int)ROUND(param_8);
        if ((float)param_8 - (float)iVar2 == (float)_DAT_00610fd8) {
          *param_2 = *(float *)(param_1 + iVar2 * 4);
        }
        else {
          *param_2 = (*(float *)(param_1 + 4 + iVar2 * 4) - *(float *)(param_1 + iVar2 * 4)) *
                     ((float)param_8 - (float)iVar2) + *(float *)(param_1 + iVar2 * 4);
        }
        param_8 = param_7 + param_8;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if ((param_6 == 2) && (0 < param_3)) {
    do {
      iVar2 = (int)ROUND(param_8);
      fVar3 = (float)param_8 - (float)iVar2;
      if (fVar3 == (float)_DAT_00610fd8) {
        *param_2 = *(float *)(param_1 + iVar2 * 8);
        param_2[1] = *(float *)(param_1 + 4 + iVar2 * 8);
      }
      else {
        pfVar1 = (float *)(param_1 + 4 + iVar2 * 8);
        *param_2 = (*(float *)(param_1 + 8 + iVar2 * 8) - *(float *)(param_1 + iVar2 * 8)) * fVar3 +
                   *(float *)(param_1 + iVar2 * 8);
        param_2[1] = (*(float *)(param_1 + 0xc + iVar2 * 8) - *pfVar1) * fVar3 + *pfVar1;
      }
      param_8 = param_7 + param_8;
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  _controlfp(_NewValue,0xffffffff);
  return;
}


