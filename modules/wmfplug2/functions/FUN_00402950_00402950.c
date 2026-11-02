/* Module: wmfplug2.dll
   Function: FUN_00402950
   Address: 00402950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402950(int param_1,LPWSTR param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  *param_2 = L'\0';
  iVar2 = FUN_00402fc0(param_1);
  if (iVar2 < 0) {
    iVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x18) <= param_4) {
      return -0x7ff8ffa9;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x248) + param_4 * 0x38);
    if (*piVar1 == 1) {
      iVar2 = FUN_004046f0(piVar1[0xc],param_2,param_3,param_5);
      return iVar2;
    }
    if (*piVar1 == 2) {
      iVar2 = FUN_00405de0(piVar1[0xc],param_2,param_3,param_5);
      return iVar2;
    }
  }
  return iVar2;
}


