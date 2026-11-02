/* Module: vidpcore.dll
   Function: FUN_5de97550
   Address: 5de97550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de97550(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  CHAR local_104 [260];
  
  uVar1 = param_3 & 0xffff;
  if (uVar1 < 0xa029) {
    if (uVar1 == 41000) {
      FUN_5deb3eb0(1,param_1[0xc],0x3f2,0xf,0);
      return 0;
    }
    if (uVar1 == 0x567) {
      if (param_3 >> 0x10 == 0x200) {
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar3 = (float10)FUN_5dec5e20(local_104,0);
          if ((float10)_DAT_5df18838 <= fVar3) {
            fVar3 = (float10)FUN_5dec5e20(local_104,0);
            if (fVar3 <= (float10)_DAT_5df18830) {
              fVar3 = (float10)FUN_5dec5e20(local_104,0);
            }
            else {
              fVar3 = (float10)_DAT_5df18830;
            }
          }
          else {
            fVar3 = (float10)_DAT_5df18838;
          }
          if ((float10)_DAT_5df1f300 <= ABS(fVar3 - (float10)*(double *)(param_1 + 0x14))) {
            *(double *)(param_1 + 0x14) = (double)fVar3;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
        FUN_5de97690();
        return 0;
      }
    }
    else if (uVar1 == 0x7f00) {
      FUN_5de97690();
      return 0;
    }
  }
  else if (uVar1 == 0xa029) {
    FUN_5de06da0(param_1[0xc]);
  }
  return 0;
}


