/* Module: sftrans1.dll
   Function: FUN_00460d50
   Address: 00460d50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00460d50(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  WPARAM WVar4;
  LRESULT LVar5;
  int *unaff_EBX;
  uint uVar6;
  float10 fVar7;
  int *local_10c;
  int *local_108;
  CHAR local_104 [260];
  
  uVar6 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar6 < 0x9e34) || (40999 < uVar6)) {
    if (0x595 < uVar6) {
      if (uVar6 == 41000) {
        FUN_004c5940(1,param_1[0xc],0x3ea,0xf,0);
        return 0;
      }
      if (uVar6 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    if (uVar6 == 0x595) {
      if (param_3 != 1) {
        return 0;
      }
      pHVar3 = GetDlgItem((HWND)param_1[0xc],0x595);
      WVar4 = SendMessageA(pHVar3,0x147,0,0);
      if ((int)WVar4 < 0) {
        return 0;
      }
      LVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
      param_1[0x22] = LVar5;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00554c90,&local_10c);
    }
    iVar2 = (**(code **)*local_10c)(local_10c,&DAT_00554ba0,&local_108);
    if (-1 < iVar2) {
      (**(code **)(*local_108 + 0x14))(local_108,uVar6 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_10c != (int *)0x0) {
      (**(code **)(*local_10c + 8))(local_10c);
    }
    uVar6 = 0;
  }
  if (uVar6 != 1000) {
    if (uVar6 == 0x58e) {
      if (param_3 == 1) {
        pHVar3 = GetDlgItem((HWND)param_1[0xc],0x58e);
        WVar4 = SendMessageA(pHVar3,0x147,0,0);
        if (-1 < (int)WVar4) {
          LVar5 = SendMessageA(pHVar3,0x150,WVar4,0);
          param_1[0x14] = LVar5;
          FUN_00460fc0();
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
    else if ((uVar6 == 0x592) && (param_3 == 0x200)) {
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar7 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00555910 <= fVar7) {
          fVar7 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar7 <= (float10)_DAT_00555908) {
            fVar7 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar7 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar7 = (float10)_DAT_00555910;
        }
        if ((float10)_DAT_0055ca40 <= ABS(fVar7 - (float10)(float)param_1[0x15])) {
          param_1[0x15] = (int)(float)fVar7;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_00460eb4;
    }
    return 0;
  }
LAB_00460eb4:
  FUN_00461070();
  return 0;
}


