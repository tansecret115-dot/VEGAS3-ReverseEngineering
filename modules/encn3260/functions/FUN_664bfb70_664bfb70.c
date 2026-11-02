/* Module: encn3260.dll
   Function: FUN_664bfb70
   Address: 664bfb70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_664bfb70(int *param_1)

{
  char *_Str;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int local_58 [7];
  undefined4 local_3c [5];
  int local_28 [4];
  char *local_18 [3];
  int local_c;
  long local_8;
  
  FUN_664c4610(local_3c,param_1);
  FUN_664c4750(local_58,local_3c);
  FUN_664c4790(local_58,local_18,(char *)0x0);
  puVar1 = operator_new(0x50);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_664bd560(puVar1);
    FUN_664bb2c0(puVar1 + 0xd);
    FUN_664bb2c0(puVar1 + 0x10);
    *puVar1 = &PTR_FUN_664de1f0;
  }
  iVar2 = FUN_664bec00(local_18,&local_8,(long *)&param_1);
  if (iVar2 == 0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  else {
    puVar1[1] = local_8;
    puVar1[2] = param_1;
  }
  piVar3 = FUN_664c4790(local_58,local_28,(char *)0x0);
  FUN_664bb570(local_18,piVar3);
  local_c = piVar3[3];
  FUN_664bb3e0(local_28);
  _Str = local_18[0];
  FUN_664bb5e0(puVar1 + 0xd,local_18[0]);
  lVar4 = atol(_Str);
  puVar1[0x13] = lVar4;
  piVar3 = FUN_664c4790(local_58,local_28,&DAT_664e3610);
  FUN_664bb570(local_18,piVar3);
  local_c = piVar3[3];
  FUN_664bb3e0(local_28);
  FUN_664bb5e0(puVar1 + 0x10,local_18[0]);
  FUN_664bb3e0((int *)local_18);
  FUN_664c4770(local_58);
  FUN_664c0180(local_3c);
  return puVar1;
}


