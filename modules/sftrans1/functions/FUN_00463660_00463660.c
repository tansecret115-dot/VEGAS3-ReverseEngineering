/* Module: sftrans1.dll
   Function: FUN_00463660
   Address: 00463660
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00463660(int *param_1,uint param_2,HWND param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  CHAR local_104 [260];
  
  iVar1 = param_1[2];
  if (((short)param_2 == 0x599) && (param_2 >> 0x10 == 0x200)) {
    iVar2 = GetWindowTextA(param_3,local_104,0x104);
    if (iVar2 != 0) {
      fVar3 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_0055f658 <= fVar3) {
        fVar3 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar3 <= (float10)_DAT_0055f650) {
          fVar3 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar3 = (float10)_DAT_0055f650;
        }
      }
      else {
        fVar3 = (float10)_DAT_0055f658;
      }
      if ((float10)_DAT_0055ca40 <= ABS(fVar3 - (float10)*(double *)(iVar1 + 0x80))) {
        *(double *)(iVar1 + 0x80) = (double)fVar3;
        FUN_0045fcb0();
        return 0;
      }
    }
    (**(code **)(*param_1 + 8))();
  }
  return 0;
}


