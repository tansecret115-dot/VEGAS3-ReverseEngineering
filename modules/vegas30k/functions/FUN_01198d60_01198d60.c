/* Module: vegas30k.dll
   Function: FUN_01198d60
   Address: 01198d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01198d60(int *param_1,double param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  bool bVar3;
  double dVar4;
  LPCRITICAL_SECTION unaff_ESI;
  int local_10;
  int iStack_c;
  
  if (((((param_1[8] & 0x40U) == 0) ||
       ((**(code **)(*param_1 + 0xf8))(param_1,&local_10), local_10 != 0 || iStack_c != 0)) ||
      (_DAT_011db3f0 <= param_2)) || (_DAT_011db3f0 != *(double *)(param_1 + 0x14))) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
    EnterCriticalSection(lpCriticalSection);
    dVar4 = ABS(param_2);
    *(double *)(param_1 + 0x16) = dVar4;
    if ((param_1[8] & 0x20cU) != 0) {
      if (dVar4 != *(double *)(param_1 + 0x14)) {
        param_1[0x20] = 1;
      }
      bVar3 = _DAT_011db3f0 <= param_2;
      param_1[0x1a] = param_3;
      if (bVar3) {
        (**(code **)(*param_1 + 0x34))(param_1,0);
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      (**(code **)(*param_1 + 0x34))(param_1,1);
      LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    *(double *)(param_1 + 0x18) = dVar4;
    *(double *)(param_1 + 0x14) = dVar4;
    (**(code **)(*param_1 + 0x34))(param_1,param_2 < _DAT_011db3f0);
    piVar1 = (int *)param_1[0x182];
    param_1[0x20] = 0;
    param_1[0x1a] = 0;
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x5b]) {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x2c))(piVar2,param_1[0x14],param_1[0x15],param_1[0x1a]);
      }
    }
    LeaveCriticalSection(unaff_ESI);
  }
  return 0;
}


