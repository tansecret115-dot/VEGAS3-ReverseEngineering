/* Module: vidpcore.dll
   Function: FUN_5de6a420
   Address: 5de6a420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de6a420(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  UINT UVar3;
  int *unaff_ESI;
  uint uVar4;
  float10 fVar5;
  int *local_10c;
  int *local_108;
  CHAR local_104 [260];
  
  uVar4 = param_3 & 0xffff;
  if ((0x9e33 < uVar4) && (uVar4 < 41000)) {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17ab0,&local_10c);
    }
    iVar2 = (**(code **)*local_10c)(local_10c,&DAT_5df180c0,&local_108);
    if (-1 < iVar2) {
      (**(code **)(*local_108 + 0x14))(local_108,uVar4 - 0x9e34);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    if (local_10c != (int *)0x0) {
      (**(code **)(*local_10c + 8))(local_10c);
    }
    uVar4 = 0;
LAB_5de6a4bd:
    switch(uVar4) {
    case 0x3e9:
      UVar3 = IsDlgButtonChecked((HWND)param_1[0xc],0x3e9);
      param_1[0x16] = UVar3;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x3ea:
      UVar3 = IsDlgButtonChecked((HWND)param_1[0xc],0x3ea);
      param_1[0x17] = UVar3;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x3eb:
      UVar3 = IsDlgButtonChecked((HWND)param_1[0xc],0x3eb);
      param_1[0x18] = UVar3;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x3ec:
      UVar3 = IsDlgButtonChecked((HWND)param_1[0xc],0x3ec);
      param_1[0x19] = UVar3;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    default:
      return 0;
    }
  }
  if (uVar4 < 0x3f7) {
    if (uVar4 != 0x3f6) goto LAB_5de6a4bd;
    if (param_3 >> 0x10 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar2 != 0) {
      fVar5 = (float10)FUN_5dec5e20(local_104,0);
      if ((float10)_DAT_5df18838 <= fVar5) {
        fVar5 = (float10)FUN_5dec5e20(local_104,0);
        if (fVar5 <= (float10)_DAT_5df18830) {
          fVar5 = (float10)FUN_5dec5e20(local_104,0);
        }
        else {
          fVar5 = (float10)_DAT_5df18830;
        }
      }
      else {
        fVar5 = (float10)_DAT_5df18838;
      }
      if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)*(double *)(param_1 + 0x14))) {
        *(double *)(param_1 + 0x14) = (double)fVar5;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  else {
    if (41000 < uVar4) {
      if (uVar4 != 0xa029) {
        return 0;
      }
      FUN_5de06da0(param_1[0xc]);
      return 0;
    }
    if (uVar4 == 41000) {
      FUN_5deb3eb0(1,param_1[0xc],0x3ec,0xf,0);
      return 0;
    }
    if (uVar4 != 0x59a) {
      if (uVar4 != 0x7f00) {
        return 0;
      }
      FUN_5de6a750();
      return 0;
    }
    if (param_3 >> 0x10 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar2 != 0) {
      fVar5 = (float10)FUN_5dec5e20(local_104,0);
      if ((float10)_DAT_5df18838 <= fVar5) {
        fVar5 = (float10)FUN_5dec5e20(local_104,0);
        if (fVar5 <= (float10)_DAT_5df18830) {
          fVar5 = (float10)FUN_5dec5e20(local_104,0);
        }
        else {
          fVar5 = (float10)_DAT_5df18830;
        }
      }
      else {
        fVar5 = (float10)_DAT_5df18838;
      }
      if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)*(double *)(param_1 + 0x1a))) {
        *(double *)(param_1 + 0x1a) = (double)fVar5;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  FUN_5de6a750();
  return 0;
}


