/* Module: rmto3260.dll
   Function: FUN_662f0810
   Address: 662f0810
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662f0810(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_1fa4 [8068];
  undefined4 uStackY_20;
  
  FUN_663024f0();
  if (*param_1 == 0) {
    return -0x7ffbff7e;
  }
  iVar3 = 0;
  uStackY_20 = 0x662f0849;
  iVar1 = vsprintf(local_1fa4,param_2,&stack0x0000000c);
  if (iVar1 < 0) {
    iVar3 = -0x7ffbff7e;
  }
  if (iVar3 == 0) {
    iVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
    if (iVar2 != iVar1) {
      iVar3 = -0x7ffbff7e;
    }
  }
  return iVar3;
}


