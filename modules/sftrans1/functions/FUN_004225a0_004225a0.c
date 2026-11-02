/* Module: sftrans1.dll
   Function: FUN_004225a0
   Address: 004225a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004225a0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x34,4,0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  if (-1 < iVar1) {
    iVar3 = 0;
    piVar2 = (int *)(param_1 + 0x38);
    do {
      iVar1 = (**(code **)(*param_2 + 0x10))(param_2,piVar2,4,0);
      lpCriticalSection = unaff_ESI;
      if ((iVar1 < 0) ||
         ((0 < *piVar2 &&
          (iVar1 = (**(code **)(*param_2 + 0x10))(param_2,piVar2[1],*piVar2 * 0x68,0), iVar1 < 0))))
      break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < 4);
  }
  LeaveCriticalSection(lpCriticalSection);
  return iVar1;
}


