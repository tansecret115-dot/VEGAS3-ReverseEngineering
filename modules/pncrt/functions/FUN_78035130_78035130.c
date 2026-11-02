/* Module: pncrt.dll
   Function: FUN_78035130
   Address: 78035130
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl
FUN_78035130(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  double dVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 local_8;
  undefined4 uStack_4;
  
  dVar1 = (double)CONCAT44(param_5,param_4) + (double)CONCAT44(param_3,param_2);
  if (DAT_7803d0e8 == 0) {
    uStack_4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_8 = SUB84(dVar1,0);
    fVar3 = FUN_780359d0(1,param_1,param_2,param_3,param_4,param_5,local_8,uStack_4);
    return fVar3;
  }
  piVar2 = _errno();
  *piVar2 = 0x21;
  FUN_78035d10();
  return (float10)dVar1;
}


