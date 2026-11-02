/* Module: ednt3260.dll
   Function: FUN_630f7420
   Address: 630f7420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f7420(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 *puVar3;
  
  sVar2 = (short)param_2;
  if (sVar2 == 0) {
    FUN_630f74e0((int)this);
    *param_1 = 0x405;
    param_1[1] = 0;
    return;
  }
  if (sVar2 == 0x10) {
    puVar3 = (undefined4 *)FUN_630f2af0(this,&param_2,param_2,param_3);
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar1;
    return;
  }
  if (sVar2 == 0xf) {
    puVar3 = (undefined4 *)FUN_630f8870(this,&param_2,param_2,param_3);
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar1;
    return;
  }
  if (sVar2 == 7) {
    puVar3 = (undefined4 *)FUN_630f42a0(this,&param_2,param_2,param_3);
    uVar1 = puVar3[1];
    *param_1 = *puVar3;
    param_1[1] = uVar1;
    return;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return;
}


