/* Module: vegas30.exe
   Function: FUN_00542f60
   Address: 00542f60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00542f60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  piVar2 = param_1;
  do {
    iVar7 = 0;
    param_1 = (int *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)(*piVar2 + 0xc));
    piVar3 = (int *)*piVar2;
    if (0 < *piVar3) {
      do {
        piVar6 = (int *)(piVar3[1] * iVar7 + piVar3[2]);
        iVar1 = *piVar6;
        iVar4 = piVar6[1];
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar3 + 3));
        local_8 = 0;
        if (iVar4 == 0) {
          iVar4 = _SfGetMillisec_0();
          iVar5 = 0;
        }
        else {
          iVar5 = _SfGetMillisec_0();
          iVar5 = iVar5 - iVar4;
        }
        iVar5 = FUN_00544090(iVar1,iVar5,&local_8);
        if (iVar5 != 0) {
          param_1 = (int *)((int)param_1 + 1);
        }
        if (local_8 != 0) {
          iVar4 = 0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(*piVar2 + 0xc));
        piVar3 = (int *)*piVar2;
        if (*piVar3 <= iVar7) {
          iVar7 = *piVar2;
          goto LAB_00543048;
        }
        if (*(int *)(piVar3[1] * iVar7 + piVar3[2]) == iVar1) {
          *(int *)(piVar3[1] * iVar7 + piVar3[2] + 4) = iVar4;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(*piVar2 + 0xc));
        FUN_00542e90(piVar2,&local_4);
        if (local_4 != 0) goto LAB_0054304e;
        iVar7 = iVar7 + 1;
        EnterCriticalSection((LPCRITICAL_SECTION)(*piVar2 + 0xc));
        piVar3 = (int *)*piVar2;
      } while (iVar7 < *piVar3);
    }
    iVar7 = *piVar2;
LAB_00543048:
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0xc));
LAB_0054304e:
    if ((param_1 == (int *)0x0) || (local_4 != 0)) {
      return;
    }
  } while( true );
}


