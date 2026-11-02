/* Module: vidpcore.dll
   Function: FUN_5de9e3e0
   Address: 5de9e3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de9e3e0(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  WPARAM WVar4;
  LRESULT LVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  uint uVar6;
  float10 fVar7;
  int *piVar8;
  undefined4 *local_10c;
  int local_108;
  CHAR local_104 [260];
  
  uVar6 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((0x9e33 < uVar6) && (uVar6 < 41000)) {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17c70,&local_10c);
    }
    piVar8 = &local_108;
    iVar2 = (**(code **)*local_10c)(local_10c,&DAT_5df180c0);
    if (-1 < iVar2) {
      (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,uVar6 - 0x9e34);
      (**(code **)(*piVar8 + 8))(piVar8);
    }
    if (unaff_EDI == (int *)0x0) {
      return 0;
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    return 0;
  }
  if (uVar6 < 0x5c8) {
    if (uVar6 == 0x5c7) {
      if (param_3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar7 = (float10)FUN_5dec5e20(local_104,0);
        if ((float10)_DAT_5df1eec0 <= fVar7) {
          fVar7 = (float10)FUN_5dec5e20(local_104,0);
          if (fVar7 <= (float10)_DAT_5df20c88) {
            fVar7 = (float10)FUN_5dec5e20(local_104,0);
          }
          else {
            fVar7 = (float10)_DAT_5df20c88;
          }
        }
        else {
          fVar7 = (float10)_DAT_5df1eec0;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar7 - (float10)(float)param_1[0x17])) {
          param_1[0x17] = (int)(float)fVar7;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
    else {
      if (0x5c3 < uVar6) {
        if (uVar6 != 0x5c5) {
          return 0;
        }
        if (param_3 != 1) {
          return 0;
        }
        pHVar3 = GetDlgItem((HWND)param_1[0xc],0x5c5);
        WVar4 = SendMessageA(pHVar3,0x147,0,0);
        LVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
        param_1[0x16] = LVar5;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      if (uVar6 == 0x5c3) {
        if (param_3 != 1) {
          return 0;
        }
        pHVar3 = GetDlgItem((HWND)param_1[0xc],0x5c3);
        WVar4 = SendMessageA(pHVar3,0x147,0,0);
        LVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
        param_1[0x15] = LVar5;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      if (uVar6 != 0x44a) {
        if (uVar6 != 0x5c2) {
          return 0;
        }
        if (param_3 != 1) {
          return 0;
        }
        pHVar3 = GetDlgItem((HWND)param_1[0xc],0x5c2);
        WVar4 = SendMessageA(pHVar3,0x147,0,0);
        LVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
        param_1[0x14] = LVar5;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      if (param_3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar7 = (float10)FUN_5dec5e20(local_104,0);
        if ((float10)_DAT_5df1eec0 <= fVar7) {
          fVar7 = (float10)FUN_5dec5e20(local_104,0);
          if (fVar7 <= (float10)_DAT_5df20c88) {
            fVar7 = (float10)FUN_5dec5e20(local_104,0);
          }
          else {
            fVar7 = (float10)_DAT_5df20c88;
          }
        }
        else {
          fVar7 = (float10)_DAT_5df1eec0;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar7 - (float10)(float)param_1[0x18])) {
          param_1[0x18] = (int)(float)fVar7;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
  }
  else if (uVar6 != 0x7f00) {
    if (uVar6 == 41000) {
      FUN_5deb3eb0(1,param_1[0xc],0x407,0xf,0);
      return 0;
    }
    if (uVar6 != 0xa029) {
      return 0;
    }
    FUN_5de06da0(param_1[0xc]);
    return 0;
  }
  FUN_5de9e750();
  return 0;
}


