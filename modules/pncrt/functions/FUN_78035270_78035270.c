/* Module: pncrt.dll
   Function: FUN_78035270
   Address: 78035270
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl
FUN_78035270(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,uint param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  float10 fVar5;
  uint local_58 [10];
  undefined4 local_30;
  undefined4 local_2c;
  uint local_20;
  
  bVar3 = FUN_780356a0(param_1,(double *)&param_7,param_9);
  uVar2 = param_6;
  uVar1 = param_5;
  if (CONCAT31(extraout_var,bVar3) == 0) {
    local_20 = local_20 & 0xffffffe3 | 3;
    local_30 = param_5;
    local_2c = param_6;
    FUN_78035360(local_58,&param_9,(byte)param_1,param_2,&param_3,&param_7);
  }
  iVar4 = FUN_78035ae0(param_1);
  if ((DAT_7803d0e8 == 0) && (iVar4 != 0)) {
    fVar5 = FUN_780359d0(iVar4,param_2,param_3,param_4,uVar1,uVar2,param_7,param_8);
    return fVar5;
  }
  FUN_78035a80(iVar4);
  FUN_78035d10();
  return (float10)(double)CONCAT44(param_8,param_7);
}


