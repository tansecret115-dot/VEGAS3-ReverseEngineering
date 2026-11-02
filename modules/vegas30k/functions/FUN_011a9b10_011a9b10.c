/* Module: vegas30k.dll
   Function: FUN_011a9b10
   Address: 011a9b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011a9b10(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_4;
  iVar2 = -0x7fff0001;
  if ((param_4 != (int *)0x0) && (param_2 == 1)) {
    if ((param_1[0x199] == 0) && ((param_1[0x19a] == 0 && (param_1[0x19b] == 0)))) {
      iVar2 = FUN_011b7450(0,&DAT_011d9a40,param_1 + 0x199,0);
      if (iVar2 != 0) goto LAB_011a9bfe;
    }
    iVar2 = _SfList_CreateExZ_32(param_1 + 0x19c,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (-1 < iVar2) {
      iVar2 = FUN_011a9c20();
      if (-1 < iVar2) {
        param_4 = (int *)0x0;
        (**(code **)(*param_1 + 0x1a0))(param_1,&param_4);
        if (param_4 != (int *)0x0) {
          (**(code **)(*param_4 + 8))(param_4);
        }
        param_1[0x180] = 1;
        if (piVar1 == (int *)0x0) {
          piVar1 = (int *)0x1;
        }
        else if ((int *)0x20 < piVar1) {
          piVar1 = (int *)0x20;
        }
        iVar2 = FUN_011aa1f0(param_3,piVar1);
        if (-1 < iVar2) {
          iVar2 = FUN_011a9e80();
        }
      }
    }
  }
LAB_011a9bfe:
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  return iVar2;
}


