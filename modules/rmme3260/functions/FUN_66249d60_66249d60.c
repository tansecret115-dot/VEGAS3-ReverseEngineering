/* Module: rmme3260.dll
   Function: FUN_66249d60
   Address: 66249d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66249d60(void *this,byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = param_1;
  iVar2 = FUN_66252960(this,param_1,(int *)&param_1);
  if (iVar2 != 0) {
    FUN_66252a10(this,pbVar1);
    FUN_66249c40(param_1,param_2);
    pbVar1 = param_1;
    if (param_1 != (byte *)0x0) {
      FUN_66249950((int)param_1);
      operator_delete(pbVar1);
    }
  }
  return;
}


