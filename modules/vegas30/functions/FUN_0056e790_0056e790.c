/* Module: vegas30.exe
   Function: FUN_0056e790
   Address: 0056e790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056e790(int param_1,int param_2,int param_3,int param_4)

{
  double *pdVar1;
  int *piVar2;
  HDC hDC;
  int iVar3;
  undefined4 unaff_EBX;
  float10 fVar4;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  piVar2 = *(int **)(param_1 + 0x2b0);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if ((param_2 < 0) || (iVar3 + -1 < param_2)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(piVar2[2] + param_2 * 4);
  }
  if (iVar3 != 0) {
    if (param_3 == 0) {
      local_18 = 1.0;
    }
    else if (param_3 < -0x2cf) {
      local_18 = 0.0;
    }
    else {
      fVar4 = (float10)_CIpow();
      local_18 = (double)fVar4;
    }
    fVar4 = (float10)local_18;
    if ((*(byte *)(iVar3 + 0xc) & 8) == 0) {
      if (param_4 == 0) {
        fVar4 = (float10)_DAT_006106d0;
      }
      else if (param_4 < -0x2cf) {
        fVar4 = (float10)_DAT_00610fd8;
      }
      else {
        fVar4 = (float10)_CIpow();
      }
    }
    pdVar1 = (double *)(iVar3 + 0x20);
    if ((local_18 != *(double *)(iVar3 + 0x20)) || (fVar4 != (float10)*(double *)(iVar3 + 0x28))) {
      *(undefined4 *)pdVar1 = (undefined4)local_18;
      *(double *)(iVar3 + 0x28) = (double)fVar4;
      *(undefined4 *)(iVar3 + 0x24) = local_18._4_4_;
      (**(code **)(**(int **)(iVar3 + 4) + 0x58))(*(int **)(iVar3 + 4),pdVar1);
      if (*(int *)(iVar3 + 8) == 1) {
        _DAT_006484d4 = (float)(double)CONCAT44(uStack_1c,unaff_EBX);
        Mixer_SetMetronomeGain(pdVar1);
      }
      if ((*(uint *)(iVar3 + 0xc) & 0x1000) != 0) {
        hDC = GetDC(*(HWND *)(param_1 + 0x24));
        FUN_0056e180(hDC,iVar3,1);
        ReleaseDC(*(HWND *)(param_1 + 0x24),hDC);
        return;
      }
    }
  }
  return;
}


