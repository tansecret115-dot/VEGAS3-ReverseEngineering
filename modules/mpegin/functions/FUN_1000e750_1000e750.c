/* Module: mpegin.dll
   Function: FUN_1000e750
   Address: 1000e750
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl
FUN_1000e750(uint param_1,uint param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [14];
  uint local_24;
  
  bVar1 = FUN_1000ea9b(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xfffffffe;
    FUN_1000e7e8(local_5c,&param_5,param_1,param_2,&param_3,&param_4);
  }
  iVar2 = FUN_1000ed87((byte)param_1);
  if ((DAT_1001b638 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_1000ecb2(iVar2,param_2);
    return fVar3;
  }
  FUN_1000ed3a(iVar2);
  FUN_1000ef27();
  return (float10)param_4;
}


