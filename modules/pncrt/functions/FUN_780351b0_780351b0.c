/* Module: pncrt.dll
   Function: FUN_780351b0
   Address: 780351b0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl
FUN_780351b0(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_58 [14];
  uint local_20;
  
  bVar1 = FUN_780356a0(param_1,(double *)&param_5,param_7);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_20 = local_20 & 0xfffffffe;
    FUN_78035360(local_58,&param_7,(byte)param_1,param_2,&param_3,&param_5);
  }
  iVar2 = FUN_78035ae0(param_1);
  if ((DAT_7803d0e8 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_780359d0(iVar2,param_2,param_3,param_4,0,0,param_5,param_6);
    return fVar3;
  }
  FUN_78035a80(iVar2);
  FUN_78035d10();
  return (float10)(double)CONCAT44(param_6,param_5);
}


