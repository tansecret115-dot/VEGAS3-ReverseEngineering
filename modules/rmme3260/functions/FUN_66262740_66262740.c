/* Module: rmme3260.dll
   Function: FUN_66262740
   Address: 66262740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66262740(void *this,void *param_1,char *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_662629a0(puVar1);
  }
  if (param_2 == (char *)0x0) {
    FUN_66262a20(puVar1,param_1);
  }
  else {
    FUN_66250410(puVar1 + 7,param_2);
    *puVar1 = param_1;
    FUN_66263520((int)param_1);
    puVar1[1] = DAT_6627f32c;
    DAT_6627f32c = DAT_6627f32c + 1;
  }
  FUN_66250b60(*(void **)((int)this + 4),puVar1);
  piVar2 = FUN_662529a0(*(void **)this,(byte *)puVar1[7]);
  *piVar2 = (int)puVar1;
  return 0;
}


