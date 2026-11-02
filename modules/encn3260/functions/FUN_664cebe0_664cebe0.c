/* Module: encn3260.dll
   Function: FUN_664cebe0
   Address: 664cebe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664cebe0(void *this,void *param_1,char *param_2,char *param_3)

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
    puVar1 = FUN_664cedf0(puVar1);
  }
  if (puVar1 != (undefined4 *)0x0) {
    if ((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) {
      iVar3 = FUN_664cee80(puVar1,param_1);
    }
    else {
      FUN_664bb5e0(puVar1 + 6,param_2);
      FUN_664bb5e0(puVar1 + 9,param_3);
      *puVar1 = param_1;
      FUN_664cf580((int)param_1);
      puVar1[1] = DAT_664f2a5c;
      DAT_664f2a5c = DAT_664f2a5c + 1;
    }
    if (iVar3 == 0) {
      FUN_664baab0(*(void **)((int)this + 0xc),puVar1);
      piVar2 = FUN_664bde70(*(void **)((int)this + 4),(byte *)puVar1[6]);
      *piVar2 = (int)puVar1;
      piVar2 = FUN_664bde70(*(void **)((int)this + 8),(byte *)puVar1[9]);
      *piVar2 = (int)puVar1;
    }
    return iVar3;
  }
  return 2;
}


