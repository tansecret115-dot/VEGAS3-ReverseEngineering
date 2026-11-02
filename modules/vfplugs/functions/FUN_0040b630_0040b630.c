/* Module: vfplugs.dll
   Function: FUN_0040b630
   Address: 0040b630
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040b630(void *this,undefined4 param_1,uint param_2,HWND param_3)

{
  uint nIDButton;
  int iVar1;
  UINT UVar2;
  uint uVar3;
  float10 fVar4;
  CHAR local_104 [260];
  
  nIDButton = param_2 & 0xffff;
  uVar3 = param_2 >> 0x10;
  if (nIDButton < 0x7f01) {
    if (nIDButton == 0x7f00) {
LAB_0040b860:
      FUN_0040b970((int)this);
      return 0;
    }
    switch(nIDButton) {
    case 0x6a8:
      if (*(int *)((int)this + 0x68) != 2) {
        *(undefined4 *)((int)this + 0x68) = 2;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
      break;
    case 0x6a9:
      if (*(int *)((int)this + 0x68) != 1) {
        *(undefined4 *)((int)this + 0x68) = 1;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
      break;
    case 0x6aa:
      if (*(int *)((int)this + 0x68) != 0) {
        *(undefined4 *)((int)this + 0x68) = 0;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
      break;
    case 0x6ab:
      UVar2 = IsDlgButtonChecked(*(HWND *)((int)this + 0x30),nIDButton);
      *(UINT *)((int)this + 0x6c) = UVar2;
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    case 0x6b2:
      if (uVar3 == 0x200) {
        iVar1 = GetWindowTextA(param_3,local_104,0x104);
        if (iVar1 != 0) {
          fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if ((float10)_DAT_00487de8 <= fVar4) {
            fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
            if (fVar4 <= (float10)_DAT_00487e20) {
              fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
            }
            else {
              fVar4 = (float10)_DAT_00487e20;
            }
          }
          else {
            fVar4 = (float10)_DAT_00487de8;
          }
          if ((float10)_DAT_00487e90 <= ABS(fVar4 - (float10)*(double *)((int)this + 0x50))) {
            *(double *)((int)this + 0x50) = (double)fVar4;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
        goto LAB_0040b860;
      }
      break;
    case 0x6b3:
      if (uVar3 == 0x200) {
        iVar1 = GetWindowTextA(param_3,local_104,0x104);
        if (iVar1 != 0) {
          fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if ((float10)_DAT_00487de8 <= fVar4) {
            fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
            if (fVar4 <= (float10)_DAT_00487e20) {
              fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
            }
            else {
              fVar4 = (float10)_DAT_00487e20;
            }
          }
          else {
            fVar4 = (float10)_DAT_00487de8;
          }
          if ((float10)_DAT_00487e90 <= ABS(fVar4 - (float10)*(double *)((int)this + 0x58))) {
            *(double *)((int)this + 0x58) = (double)fVar4;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
        goto LAB_0040b860;
      }
      break;
    case 0x6b4:
      if (uVar3 == 0x200) {
        iVar1 = GetWindowTextA(param_3,local_104,0x104);
        if (iVar1 != 0) {
          fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
          if ((float10)_DAT_00487de8 <= fVar4) {
            fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
            if (fVar4 <= (float10)_DAT_00487e20) {
              fVar4 = FUN_0043a430(local_104,(undefined4 *)0x0);
            }
            else {
              fVar4 = (float10)_DAT_00487e20;
            }
          }
          else {
            fVar4 = (float10)_DAT_00487de8;
          }
          if ((float10)_DAT_00487e90 <= ABS(fVar4 - (float10)*(double *)((int)this + 0x60))) {
            *(double *)((int)this + 0x60) = (double)fVar4;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
        goto LAB_0040b860;
      }
    }
  }
  else if (nIDButton == 41000) {
    FUN_00428ea0(1,*(HWND *)((int)this + 0x30),1000,0xf,(uchar *)0x0);
  }
  else if (nIDButton == 0xa029) {
    FUN_00402b20(*(HWND *)((int)this + 0x30));
    return 0;
  }
  return 0;
}


