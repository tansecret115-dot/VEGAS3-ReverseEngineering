/* Module: tokr3260.dll
   Function: FUN_680527d0
   Address: 680527d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_680527d0(int *param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 2) && (param_3 == 1)) {
    iVar3 = 0x400;
    iVar2 = *param_1 - param_1[1];
    pfVar1 = (float *)param_1[1];
    do {
      iVar3 = iVar3 + -1;
      *(float *)(iVar2 + -4 + (int)(pfVar1 + 1)) =
           (*(float *)(iVar2 + (int)pfVar1) + *pfVar1) * _DAT_6805b068;
      *pfVar1 = 0.0;
      pfVar1 = pfVar1 + 1;
    } while (iVar3 != 0);
  }
  return 0;
}


