/* Module: cook3260.dll
   Function: FUN_633a5550
   Address: 633a5550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_633a5550(void *this,float *param_1,int *param_2,int *param_3,uint param_4,float *param_5)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = param_5;
  for (iVar1 = (param_4 & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *param_1;
    param_1 = param_1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)pfVar2 = *(undefined1 *)param_1;
    param_1 = (float *)((int)param_1 + 1);
    pfVar2 = (float *)((int)pfVar2 + 1);
  }
  if ((*param_2 != 0) || (*param_3 != 0)) {
    FUN_633a5450(this,param_5,param_2,param_3,param_4,-1);
  }
  return;
}


