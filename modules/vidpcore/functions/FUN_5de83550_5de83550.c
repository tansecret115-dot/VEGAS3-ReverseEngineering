/* Module: vidpcore.dll
   Function: FUN_5de83550
   Address: 5de83550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de83550(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

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
  if ((uVar3 < 0x9e34) || (40999 < uVar3)) {
    if (uVar3 < 0xa029) {
      if (uVar3 == 41000) {
        FUN_5deb3eb0(1,param_1[0xc],0x3f5,0xf,0);
        return 0;
      }
      if (uVar3 == 0x465) {
        if (param_3 >> 0x10 == 0x200) {
          iVar2 = GetWindowTextA(param_4,local_104,0x104);
          if (iVar2 != 0) {
            fVar4 = (float10)FUN_5dec5e20(local_104,0);
            if ((float10)_DAT_5df18838 <= fVar4) {
              fVar4 = (float10)FUN_5dec5e20(local_104,0);
              if (fVar4 <= (float10)_DAT_5df18830) {
                fVar4 = (float10)FUN_5dec5e20(local_104,0);
              }
              else {
                fVar4 = (float10)_DAT_5df18830;
              }
            }
            else {
              fVar4 = (float10)_DAT_5df18838;
            }
            if ((float10)_DAT_5df1a910 <= ABS(fVar4 - (float10)(float)param_1[0x13])) {
              param_1[0x13] = (int)(float)fVar4;
              (**(code **)(*param_1 + 0x2c))(param_1);
              return 0;
            }
          }
          FUN_5de83720();
          return 0;
        }
      }
      else if (uVar3 == 0x7f00) {
        FUN_5de83720();
        return 0;
      }
    }
    else if (uVar3 == 0xa029) {
      FUN_5de06da0(param_1[0xc]);
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17be0,&local_10c);
    }
    piVar6 = &local_108;
    piVar5 = (int *)&DAT_5df180c0;
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


