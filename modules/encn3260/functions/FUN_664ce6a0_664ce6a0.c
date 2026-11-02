/* Module: encn3260.dll
   Function: FUN_664ce6a0
   Address: 664ce6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664ce6a0(void *this,void *param_1,char *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_664ce900(puVar1);
  }
  if (param_2 == (char *)0x0) {
    FUN_664ce980(puVar1,param_1);
  }
  else {
    FUN_664bb5e0(puVar1 + 7,param_2);
    *puVar1 = param_1;
    FUN_664cf580((int)param_1);
    puVar1[1] = DAT_664f2a60;
    DAT_664f2a60 = DAT_664f2a60 + 1;
  }
  FUN_664baab0(*(void **)((int)this + 4),puVar1);
  piVar2 = FUN_664bde70(*(void **)this,(byte *)puVar1[7]);
  *piVar2 = (int)puVar1;
  return 0;
}


