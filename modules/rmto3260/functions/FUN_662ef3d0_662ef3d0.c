/* Module: rmto3260.dll
   Function: FUN_662ef3d0
   Address: 662ef3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_662ef3d0(void *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int local_10 [3];
  
  FUN_662eefd0(local_10);
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
  FUN_662ef330(local_10,((undefined4 *)*param_2)[-2],(undefined4 *)*param_2,uVar2,
               (undefined4 *)param_3);
  FUN_662eeff0(param_1,local_10);
  FUN_662ef0f0(local_10);
  return param_1;
}


