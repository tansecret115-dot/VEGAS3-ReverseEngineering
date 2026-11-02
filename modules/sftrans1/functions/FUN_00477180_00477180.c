/* Module: sftrans1.dll
   Function: FUN_00477180
   Address: 00477180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00477180(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  HWND hWnd;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  CHAR local_104 [260];
  
  uVar2 = param_3 >> 0x10;
  hWnd = GetDlgItem((HWND)param_1[0xc],0x603);
  param_3 = param_3 & 0xffff;
  if (param_3 < 0x608) {
    if (param_3 == 0x607) {
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar1 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar1 != 0) {
        fVar3 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00555910 <= fVar3) {
          fVar3 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar3 <= (float10)_DAT_00562e00) {
            fVar3 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar3 = (float10)_DAT_00562e00;
          }
        }
        else {
          fVar3 = (float10)_DAT_00555910;
        }
        if ((float10)_DAT_0055ca40 <= ABS(fVar3 - (float10)*(double *)(param_1 + 0x16))) {
          *(double *)(param_1 + 0x16) = (double)fVar3;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
    else if (param_3 != 1000) {
      if (param_3 == 0x603) {
        SendMessageA(hWnd,0x702,0,(LPARAM)&local_114);
        *(double *)(param_1 + 0x1a) = (double)local_114;
        *(double *)(param_1 + 0x1c) = (double)local_110;
        *(double *)(param_1 + 0x1e) = (double)local_10c;
        *(double *)(param_1 + 0x20) = (double)local_108;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      if (param_3 != 0x606) {
        return 0;
      }
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar1 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar1 != 0) {
        fVar3 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00555910 <= fVar3) {
          fVar3 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar3 <= (float10)_DAT_00555908) {
            fVar3 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar3 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar3 = (float10)_DAT_00555910;
        }
        if ((float10)_DAT_0055ca40 <= ABS(fVar3 - (float10)*(double *)(param_1 + 0x14))) {
          *(double *)(param_1 + 0x14) = (double)fVar3;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
  }
  else {
    if (param_3 != 0x608) {
      if (param_3 == 41000) {
        FUN_004c5940(1,param_1[0xc],0x3ed,0xf,0);
        return 0;
      }
      if (param_3 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    if (uVar2 != 0x200) {
      return 0;
    }
    iVar1 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar1 != 0) {
      fVar3 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_00555910 <= fVar3) {
        fVar3 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar3 <= (float10)_DAT_00555908) {
          fVar3 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar3 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar3 = (float10)_DAT_00555910;
      }
      if ((float10)_DAT_0055ca40 <= ABS(fVar3 - (float10)*(double *)(param_1 + 0x18))) {
        *(double *)(param_1 + 0x18) = (double)fVar3;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  FUN_00477490();
  return 0;
}


