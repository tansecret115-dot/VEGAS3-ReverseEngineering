/* Module: sftrans1.dll
   Function: FUN_004738a0
   Address: 004738a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004738a0(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  UINT UVar4;
  HWND pHVar5;
  WPARAM WVar6;
  LRESULT LVar7;
  float10 fVar8;
  undefined8 local_20;
  float local_18;
  float local_14;
  float local_10;
  
  uVar3 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if (uVar3 < 0x450) {
    if (uVar3 == 0x44f) {
      if (param_3 == 0x200) {
        GetWindowTextA(param_4,(LPSTR)&local_18,10);
        fVar8 = (float10)FUN_004d6ed0(&local_18,0);
        if ((float10)_DAT_00555910 <= fVar8) {
          if ((float10)_DAT_00555908 <= fVar8) {
            fVar8 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar8 = (float10)_DAT_00555910;
        }
        if (fVar8 != (float10)*(double *)(param_1 + 0x18)) {
          *(double *)(param_1 + 0x18) = (double)fVar8;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
    else {
      switch(uVar3) {
      case 1000:
        FUN_00473d10();
        return 0;
      case 0x3f7:
        if (param_3 == 1) {
          pHVar5 = GetDlgItem((HWND)param_1[0xc],0x3f7);
          WVar6 = SendMessageA(pHVar5,0x147,0,0);
          LVar7 = SendMessageA(pHVar5,0x150,WVar6,0);
          FUN_00473750(LVar7);
          return 0;
        }
        break;
      case 0x3fc:
        pHVar5 = GetDlgItem((HWND)param_1[0xc],0x3f7);
        WVar6 = SendMessageA(pHVar5,0x147,0,0);
        LVar7 = SendMessageA(pHVar5,0x150,WVar6,0);
        UVar4 = IsDlgButtonChecked((HWND)param_1[0xc],0x3fc);
        param_1[LVar7 * 8 + 0x28] = UVar4;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      case 0x402:
        UVar4 = IsDlgButtonChecked((HWND)param_1[0xc],0x402);
        param_1[0x16] = (uint)(UVar4 == 1);
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      case 0x44e:
        if (param_3 == 0x200) {
          GetWindowTextA(param_4,(LPSTR)&local_18,10);
          fVar8 = (float10)FUN_004d6ed0(&local_18,0);
          if ((float10)_DAT_00555910 <= fVar8) {
            if ((float10)_DAT_00555908 <= fVar8) {
              fVar8 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar8 = (float10)_DAT_00555910;
          }
          if (fVar8 != (float10)*(double *)(param_1 + 0x14)) {
            *(double *)(param_1 + 0x14) = (double)fVar8;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
    }
  }
  else if (uVar3 < 0xa029) {
    if (uVar3 == 41000) {
      FUN_004c5940(1,param_1[0xc],0x3f6,0xf,0);
      return 0;
    }
    if (uVar3 == 0x453) {
      if (param_3 == 0x200) {
        pHVar5 = GetDlgItem((HWND)param_1[0xc],0x3f7);
        WVar6 = SendMessageA(pHVar5,0x147,0,0);
        LVar7 = SendMessageA(pHVar5,0x150,WVar6,0);
        pdVar1 = (double *)(param_1 + LVar7 * 8 + 0x22);
        GetWindowTextA(param_4,(LPSTR)&local_18,10);
        fVar8 = (float10)FUN_004d6ed0(&local_18,0);
        local_20 = (double)fVar8;
        dVar2 = _DAT_00555910;
        if ((fVar8 < (float10)_DAT_00555910) ||
           (dVar2 = _DAT_00561950, (float10)_DAT_00561950 < fVar8)) {
          local_20 = dVar2;
          fVar8 = (float10)local_20;
        }
        if (fVar8 != (float10)pdVar1[2]) {
          pdVar1[2] = (double)fVar8;
          *pdVar1 = (double)(fVar8 * (float10)_DAT_00561978 * (float10)_DAT_00561960);
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
        fVar8 = (float10)FUN_004d6ed0(&local_18,0);
        if (fVar8 != (float10)local_20) {
          FUN_004d6250(&local_18,(undefined4)local_20,local_20._4_4_,3,0);
          SetWindowTextA(param_4,(LPCSTR)&local_18);
          return 0;
        }
      }
    }
    else if ((uVar3 == 0x5c8) && ((param_3 == 0xa0a || (param_3 == 0xa33)))) {
      SendMessageA(param_4,0xa06,0,(LPARAM)&local_18);
      param_1[0x20] = 0;
      *(double *)(param_1 + 0x1e) = (double)local_10;
      param_1[0x21] = 0x3ff00000;
      *(double *)(param_1 + 0x1c) = (double)local_14;
      *(double *)(param_1 + 0x1a) = (double)local_18;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else if (uVar3 == 0xa029) {
    FUN_00406390(param_1[0xc]);
    return 0;
  }
  return 0;
}


