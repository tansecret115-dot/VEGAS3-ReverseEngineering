/* Module: oggplug.dll
   Function: FUN_00441630
   Address: 00441630
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00441630(int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    sVar3 = param_1[2] - iVar1;
    param_1[2] = sVar3;
    if (0 < (int)sVar3) {
      memmove((void *)*param_1,(void *)(iVar1 + *param_1),sVar3);
    }
    param_1[3] = 0;
  }
  if (param_1[1] - param_1[2] < param_2) {
    sVar3 = param_1[2] + 0x1000 + param_2;
    if ((void *)*param_1 != (void *)0x0) {
      pvVar2 = realloc((void *)*param_1,sVar3);
      param_1[1] = sVar3;
      *param_1 = (int)pvVar2;
      return (int)pvVar2 + param_1[2];
    }
    pvVar2 = malloc(sVar3);
    param_1[1] = sVar3;
    *param_1 = (int)pvVar2;
  }
  return *param_1 + param_1[2];
}


