/* Module: vegas30.exe
   Function: FUN_0056e8e0
   Address: 0056e8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056e8e0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  HDC hDC;
  int iVar2;
  float10 fVar3;
  undefined8 local_18;
  
  piVar1 = *(int **)(param_1 + 0x2b0);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if ((param_2 < 0) || (iVar2 + -1 < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(piVar1[2] + param_2 * 4);
  }
  if (iVar2 != 0) {
    if (param_3 == 0) {
      local_18 = 1.0;
    }
    else if (param_3 < -0x2cf) {
      local_18 = 0.0;
    }
    else {
      fVar3 = (float10)_CIpow();
      local_18 = (double)fVar3;
    }
    fVar3 = (float10)local_18;
    if ((*(byte *)(iVar2 + 0xc) & 8) == 0) {
      if (param_4 == 0) {
        fVar3 = (float10)_DAT_006106d0;
      }
      else if (param_4 < -0x2cf) {
        fVar3 = (float10)_DAT_00610fd8;
      }
      else {
        fVar3 = (float10)_CIpow();
      }
    }
    if ((local_18 != *(double *)(iVar2 + 0x628)) || (fVar3 != (float10)*(double *)(iVar2 + 0x630)))
    {
      *(double *)(iVar2 + 0x630) = (double)fVar3;
      *(undefined4 *)(iVar2 + 0x628) = (undefined4)local_18;
      *(undefined4 *)(iVar2 + 0x62c) = local_18._4_4_;
      (**(code **)(**(int **)(iVar2 + 4) + 0x74))
                (*(int **)(iVar2 + 4),(undefined4 *)(iVar2 + 0x628));
      hDC = GetDC(*(HWND *)(param_1 + 0x24));
      FUN_0056e4c0(hDC,iVar2,1);
      ReleaseDC(*(HWND *)(param_1 + 0x24),hDC);
      return;
    }
  }
  return;
}


