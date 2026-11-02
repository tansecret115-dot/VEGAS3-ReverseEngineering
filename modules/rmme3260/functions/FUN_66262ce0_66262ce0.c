/* Module: rmme3260.dll
   Function: FUN_66262ce0
   Address: 66262ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66262ce0(void *this,void *param_1,char *param_2,char *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = operator_new(0x34);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66262ef0(puVar1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) {
      iVar3 = FUN_66262f80(puVar1,param_1);
    }
    else {
      FUN_66250410(puVar1 + 6,param_2);
      FUN_66250410(puVar1 + 9,param_3);
      *puVar1 = param_1;
      FUN_66263520((int)param_1);
      puVar1[1] = DAT_6627f328;
      DAT_6627f328 = DAT_6627f328 + 1;
    }
    if (iVar3 == 0) {
      FUN_66250b60(*(void **)((int)this + 0xc),puVar1);
      piVar2 = FUN_662529a0(*(void **)((int)this + 4),(byte *)puVar1[6]);
      *piVar2 = (int)puVar1;
      piVar2 = FUN_662529a0(*(void **)((int)this + 8),(byte *)puVar1[9]);
      *piVar2 = (int)puVar1;
    }
    return iVar3;
  }
  return 2;
}


