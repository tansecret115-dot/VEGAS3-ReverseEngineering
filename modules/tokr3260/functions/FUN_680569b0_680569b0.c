/* Module: tokr3260.dll
   Function: FUN_680569b0
   Address: 680569b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_680569b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_0000003c;
  float in_stack_00000040;
  
  iVar1 = *(int *)(*(int *)((int)in_stack_00000040 + 0x3c) + in_stack_00000030 * 4);
  if (iVar1 == -999999) {
    return 0xfff0bdc1;
  }
  in_stack_00000040 = *(float *)(*(int *)((int)in_stack_00000040 + 0x34) + param_2 * 4);
  if (in_stack_00000040 == _DAT_6805b0f8) {
    return 0xfff0bdc1;
  }
  iVar2 = FUN_68053a30(in_stack_0000002c);
  if (iVar2 == -999999) {
    return 0xfff0bdc1;
  }
  if (0 < iVar2) {
    piVar4 = (int *)&stack0x0000000c;
    pfVar3 = (float *)(in_stack_0000003c + param_1 * 4);
    do {
      if ((-1 < param_1) && (param_1 < 0x400)) {
        *pfVar3 = *pfVar3 - ((float)*piVar4 * in_stack_00000040) /
                            ((float)iVar1 - (float)_DAT_6805b100);
      }
      param_1 = param_1 + 1;
      pfVar3 = pfVar3 + 1;
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}


