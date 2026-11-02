/* Module: pncrt.dll
   Function: FUN_780170a0
   Address: 780170a0
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl FUN_780170a0(int *param_1,int param_2,int *param_3,uint *param_4)

{
  char *pcVar1;
  DWORD *pDVar2;
  void *pvVar3;
  
  pDVar2 = FUN_78009cc0();
  if (pDVar2[0x11] == 0) {
    pvVar3 = malloc(0x15d);
    pDVar2[0x11] = (DWORD)pvVar3;
    if (pvVar3 == (void *)0x0) {
      return (char *)0x0;
    }
  }
  pcVar1 = (char *)pDVar2[0x11];
  if (0x15b < param_2) {
    param_2 = 0x15b;
  }
  FUN_78018100(pcVar1,param_2,(int)param_1);
  *param_4 = (uint)(*param_1 == 0x2d);
  *param_3 = param_1[1];
  return pcVar1;
}


