/* Module: oggplug.dll
   Function: FUN_00442a30
   Address: 00442a30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_00442a30(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = _errno();
  *piVar1 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  iVar2 = FUN_00441630(param_1 + 6,0x2134);
  iVar2 = (*(code *)param_1[0xb0])(iVar2,1,0x2134,*param_1);
  if (0 < iVar2) {
    FUN_004416b0((int)(param_1 + 6),iVar2);
  }
  if (iVar2 == 0) {
    piVar1 = _errno();
    if (*piVar1 != 0) {
      return -1;
    }
  }
  return iVar2;
}


