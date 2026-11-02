/* Module: sftrans1.dll
   Function: FUN_004afd70
   Address: 004afd70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004afd70(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBX;
  uint uVar3;
  float10 fVar4;
  int *local_10c;
  int *local_108;
  CHAR local_104 [260];
  
  uVar3 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar3 < 0x9e34) || (40999 < uVar3)) {
    if (1000 < uVar3) {
      if (uVar3 == 41000) {
        FUN_004c5940(1,param_1[0xc],0x3fb,0xf,0);
        return 0;
      }
      if (uVar3 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    if (uVar3 == 1000) goto LAB_004afed1;
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00554d90,&local_10c);
    }
    iVar2 = (**(code **)*local_10c)(local_10c,&DAT_00554ba0,&local_108);
    if (-1 < iVar2) {
      (**(code **)(*local_108 + 0x14))(local_108,uVar3 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_10c != (int *)0x0) {
      (**(code **)(*local_10c + 8))(local_10c);
    }
    uVar3 = 0;
  }
  if (uVar3 == 0x12e) {
    if (param_3 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_00555908 <= fVar4) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar4 <= (float10)_DAT_005624e8) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar4 = (float10)_DAT_005624e8;
        }
      }
      else {
        fVar4 = (float10)_DAT_00555908;
      }
      if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x14))) {
        *(double *)(param_1 + 0x14) = (double)fVar4;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  else if (uVar3 == 0x130) {
    if (param_3 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_00555910 <= fVar4) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar4 <= (float10)_DAT_00557d68) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar4 = (float10)_DAT_00557d68;
        }
      }
      else {
        fVar4 = (float10)_DAT_00555910;
      }
      if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x16))) {
        *(double *)(param_1 + 0x16) = (double)fVar4;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  else {
    if ((uVar3 != 0x137) || (param_3 != 0x200)) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_00555910 <= fVar4) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar4 <= (float10)_DAT_00555908) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar4 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar4 = (float10)_DAT_00555910;
      }
      if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x18))) {
        *(double *)(param_1 + 0x18) = (double)fVar4;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
LAB_004afed1:
  FUN_004af9a0();
  return 0;
}


