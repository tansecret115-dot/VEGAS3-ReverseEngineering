/* Module: sftrans1.dll
   Function: FUN_00461f10
   Address: 00461f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00461f10(int *param_1,uint param_2,HWND param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  CHAR local_104 [260];
  
  iVar1 = param_1[2];
  uVar3 = param_2 >> 0x10;
  switch(param_2 & 0xffff) {
  case 0x586:
    if (uVar3 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_3,local_104,0x104);
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
      if ((float10)_DAT_0055c078 <= ABS(fVar4 - (float10)*(float *)(iVar1 + 0x58))) {
        *(float *)(iVar1 + 0x58) = (float)fVar4;
        FUN_0045fcb0();
        return 0;
      }
    }
    break;
  case 0x587:
    if (uVar3 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_3,local_104,0x104);
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
      if ((float10)_DAT_0055c078 <= ABS(fVar4 - (float10)*(float *)(iVar1 + 0x5c))) {
        *(float *)(iVar1 + 0x5c) = (float)fVar4;
        FUN_0045fcb0();
        return 0;
      }
    }
    break;
  default:
    goto switchD_00461f44_caseD_588;
  case 0x58a:
    if (uVar3 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_3,local_104,0x104);
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
      if ((float10)_DAT_0055c078 <= ABS(fVar4 - (float10)*(float *)(iVar1 + 0x60))) {
        *(float *)(iVar1 + 0x60) = (float)fVar4;
        FUN_0045fcb0();
        return 0;
      }
    }
    break;
  case 0x58b:
    if (uVar3 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_3,local_104,0x104);
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
      if ((float10)_DAT_0055c078 <= ABS(fVar4 - (float10)*(float *)(iVar1 + 100))) {
        *(float *)(iVar1 + 100) = (float)fVar4;
        FUN_0045fcb0();
        return 0;
      }
    }
    break;
  case 0x596:
    if (uVar3 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_3,local_104,0x104);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_0055f548 <= fVar4) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar4 <= (float10)_DAT_0055f540) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar4 = (float10)_DAT_0055f540;
        }
      }
      else {
        fVar4 = (float10)_DAT_0055f548;
      }
      if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)*(float *)(iVar1 + 0x68))) {
        *(float *)(iVar1 + 0x68) = (float)fVar4;
        FUN_0045fcb0();
        return 0;
      }
    }
  }
  (**(code **)(*param_1 + 8))();
switchD_00461f44_caseD_588:
  return 0;
}


