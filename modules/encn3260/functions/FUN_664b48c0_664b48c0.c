/* Module: encn3260.dll
   Function: FUN_664b48c0
   Address: 664b48c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b48c0(void *this,byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = param_1;
  iVar2 = FUN_664bde30(this,param_1,(int *)&param_1);
  if (iVar2 != 0) {
    FUN_664bdee0(this,pbVar1);
    FUN_664b47a0(param_1,param_2);
    pbVar1 = param_1;
    if (param_1 != (byte *)0x0) {
      FUN_664b44b0((int)param_1);
      operator_delete(pbVar1);
    }
  }
  return;
}


