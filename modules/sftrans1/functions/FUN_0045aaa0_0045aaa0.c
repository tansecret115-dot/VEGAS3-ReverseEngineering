/* Module: sftrans1.dll
   Function: FUN_0045aaa0
   Address: 0045aaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045aaa0(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *unaff_EDI;
  float10 fVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *local_10c;
  int local_108;
  CHAR local_104 [260];
  
  uVar3 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar3 < 0x9e34) || (40999 < uVar3)) {
    if (uVar3 < 0x576) {
      if (uVar3 == 0x575) {
        param_1[0x1a] = 1;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      if (uVar3 < 0x537) {
        if (uVar3 == 0x536) {
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
            if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0x13])) {
              param_1[0x13] = (int)(float)fVar4;
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
        }
        else if (uVar3 != 1000) {
          if (uVar3 != 0x4f3) {
            return 0;
          }
          SendMessageA(param_4,0x702,0,(LPARAM)(param_1 + 0x16));
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
LAB_0045ad49:
        FUN_0045ae40();
        return 0;
      }
      if (uVar3 == 0x574) {
        param_1[0x1a] = 0;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else {
      if (uVar3 < 0xa029) {
        if (uVar3 == 41000) {
          FUN_004c5940(1,param_1[0xc],0x3e9,0xf,0);
          return 0;
        }
        if (uVar3 == 0x5a1) {
          if (param_3 != 0x200) {
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
            if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0x14])) {
              param_1[0x14] = (int)(float)fVar4;
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
        }
        else {
          if (uVar3 != 0x5a2) {
            return 0;
          }
          if (param_3 != 0x200) {
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
            if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0x15])) {
              param_1[0x15] = (int)(float)fVar4;
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
        }
        goto LAB_0045ad49;
      }
      if (uVar3 == 0xa029) {
        FUN_00406390(param_1[0xc]);
      }
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00554c40,&local_10c);
    }
    piVar6 = &local_108;
    piVar5 = (int *)&DAT_00554ba0;
    iVar2 = (**(code **)*local_10c)(local_10c);
    if (-1 < iVar2) {
      (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,uVar3 - 0x9e34);
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
      return 0;
    }
  }
  return 0;
}


