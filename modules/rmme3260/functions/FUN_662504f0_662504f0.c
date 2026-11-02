/* Module: rmme3260.dll
   Function: FUN_662504f0
   Address: 662504f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_662504f0(void *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int local_10 [3];
  
  FUN_662500f0(local_10);
  if (param_3 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    pcVar3 = param_3;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
  }
  FUN_66250450(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,uVar2,
               (undefined4 *)param_3);
  FUN_66250110(param_1,local_10);
  FUN_66250210(local_10);
  return param_1;
}


