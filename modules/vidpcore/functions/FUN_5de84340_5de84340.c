/* Module: vidpcore.dll
   Function: FUN_5de84340
   Address: 5de84340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de84340(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBX;
  uint uVar3;
  float10 fVar4;
  int *local_10c;
  int *local_108;
  CHAR aCStack_104 [260];
  
  uVar3 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar3 < 0x9e34) || (40999 < uVar3)) {
    if (0x7f00 < uVar3) {
      if (uVar3 == 41000) {
        FUN_5deb3eb0(1,param_1[0xc],0x3f6,0xf,0);
        return 0;
      }
      if (uVar3 != 0xa029) {
        return 0;
      }
      FUN_5de06da0(param_1[0xc]);
      return 0;
    }
    if (uVar3 == 0x7f00) goto LAB_5de847e6;
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17bf0,&local_10c);
    }
    iVar2 = (**(code **)*local_10c)(local_10c,&DAT_5df180c0,&local_108);
    if (-1 < iVar2) {
      (**(code **)(*local_108 + 0x14))(local_108,uVar3 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_10c != (int *)0x0) {
      (**(code **)(*local_10c + 8))(local_10c);
    }
    uVar3 = 0;
  }
  switch(uVar3) {
  case 0x530:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar4) {
          fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar4 <= (float10)_DAT_5df29ff8) {
            fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar4 = (float10)_DAT_5df29ff8;
          }
        }
        else {
          fVar4 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x14))) {
          *(double *)(param_1 + 0x14) = (double)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
LAB_5de847e6:
      FUN_5de84860();
      return 0;
    }
    break;
  case 0x531:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar4) {
          fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar4 <= (float10)_DAT_5df29ff8) {
            fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar4 = (float10)_DAT_5df29ff8;
          }
        }
        else {
          fVar4 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x16))) {
          *(double *)(param_1 + 0x16) = (double)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de847e6;
    }
    break;
  case 0x532:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar4) {
          fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar4 <= (float10)_DAT_5df1eec0) {
            fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar4 = (float10)_DAT_5df1eec0;
          }
        }
        else {
          fVar4 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x18))) {
          *(double *)(param_1 + 0x18) = (double)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de847e6;
    }
    break;
  case 0x533:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar4) {
          fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar4 <= (float10)_DAT_5df1eec0) {
            fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar4 = (float10)_DAT_5df1eec0;
          }
        }
        else {
          fVar4 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x1a))) {
          *(double *)(param_1 + 0x1a) = (double)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de847e6;
    }
    break;
  case 0x534:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar4) {
          fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar4 <= (float10)_DAT_5df29fe8) {
            fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar4 = (float10)_DAT_5df29fe8;
          }
        }
        else {
          fVar4 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x1c))) {
          *(double *)(param_1 + 0x1c) = (double)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de847e6;
    }
    break;
  case 0x535:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar4) {
          fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar4 <= (float10)_DAT_5df29fe8) {
            fVar4 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar4 = (float10)_DAT_5df29fe8;
          }
        }
        else {
          fVar4 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar4 - (float10)*(double *)(param_1 + 0x1e))) {
          *(double *)(param_1 + 0x1e) = (double)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de847e6;
    }
  }
  return 0;
}


