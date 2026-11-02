/* Module: oggplug.dll
   Function: FUN_0042fca0
   Address: 0042fca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_0042fca0(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
  
  pvVar3 = realloc((void *)*param_1,param_1[2] * 4 + 8);
  *param_1 = (int)pvVar3;
  pvVar3 = realloc((void *)param_1[1],param_1[2] * 4 + 8);
  param_1[1] = (int)pvVar3;
  pcVar4 = _strdup(param_2);
  *(char **)(*param_1 + param_1[2] * 4) = pcVar4;
  uVar5 = 0xffffffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  *(uint *)(param_1[1] + param_1[2] * 4) = ~uVar5 - 1;
  iVar2 = param_1[2];
  param_1[2] = iVar2 + 1;
  *(undefined4 *)(*param_1 + (iVar2 + 1) * 4) = 0;
  return;
}


