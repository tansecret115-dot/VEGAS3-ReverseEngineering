/* Module: vidpcore.dll
   Function: FUN_5de7dae0
   Address: 5de7dae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de7dae0(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HWND hWnd;
  LRESULT LVar3;
  int *unaff_ESI;
  uint uVar4;
  float10 fVar5;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  int *local_10c;
  int *local_108;
  CHAR local_104 [260];
  
  uVar4 = param_3 & 0xffff;
  if ((uVar4 < 0x9e34) || (40999 < uVar4)) {
    if (0x47e < uVar4) {
      if (0x7f00 < uVar4) {
        if (uVar4 == 41000) {
          FUN_5deb3eb0(1,param_1[0xc],0x3fe,0xf,0);
          return 0;
        }
        if (uVar4 != 0xa029) {
          return 0;
        }
        FUN_5de06da0(param_1[0xc]);
        return 0;
      }
      if (uVar4 != 0x7f00) {
        if (uVar4 == 0x573) {
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
            if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)(float)param_1[0x15])) {
              param_1[0x15] = (int)(float)fVar5;
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
        }
        else {
          if (uVar4 != 0x574) {
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
            if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)(float)param_1[0x16])) {
              param_1[0x16] = (int)(float)fVar5;
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
        }
      }
      FUN_5de7de30();
      return 0;
    }
    if (uVar4 == 0x47e) {
      SendMessageA(param_4,0x702,0,(LPARAM)(param_1 + 0x17));
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17b90,&local_10c);
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
  }
  switch(uVar4) {
  case 0x447:
    *(undefined2 *)(param_1 + 0x13) = 2;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x448:
    *(undefined2 *)(param_1 + 0x13) = 0;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x449:
    *(undefined2 *)(param_1 + 0x13) = 3;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x44a:
    *(undefined2 *)(param_1 + 0x13) = 1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 1099:
    lParam = 0;
    wParam = 0;
    Msg = 0xf0;
    hWnd = GetDlgItem((HWND)param_1[0xc],1099);
    LVar3 = SendMessageA(hWnd,Msg,wParam,lParam);
    param_1[0x14] = LVar3;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  default:
    return 0;
  }
}


