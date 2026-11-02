/* Module: vidcap30.exe
   Function: FUN_00467c50
   Address: 00467c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00467c50(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  int *piVar5;
  undefined1 auStack_18 [4];
  int local_14;
  undefined1 auStack_10 [16];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int **)(param_1 + 0x90);
  local_14 = *(int *)(param_1 + 0x94);
  piVar2 = *(int **)(param_1 + 0x98);
  if (((piVar1 == (int *)0x0) || (local_14 == 0)) || (piVar2 == (int *)0x0)) {
    LeaveCriticalSection(lpCriticalSection);
    FUN_0057ca60(3,0x80070057,0);
    return;
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  piVar5 = piVar2;
  (**(code **)(*piVar2 + 4))();
  LeaveCriticalSection(lpCriticalSection);
  iVar3 = FUN_00467560(auStack_10,auStack_18);
  if (iVar3 == 0) {
    iVar4 = -0x7fffbffb;
  }
  else {
    iVar4 = (**(code **)*piVar1)(piVar1,&DAT_005860f0,&stack0xffffffdc);
    if (-1 < iVar4) {
      iVar4 = (**(code **)(iRam00000000 + 0xc))(0,&stack0xffffffe0);
      if ((iVar4 < 0) ||
         (iVar4 = FUN_004677b0(unaff_ESI,0,piVar2,&stack0xffffffe0,auStack_18,iVar3), iVar4 < 0)) {
        FUN_0057ca60(3,iVar4,0);
      }
      (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,unaff_ESI);
      (**(code **)(*piVar5 + 8))(piVar5);
      goto LAB_00467d4e;
    }
  }
  FUN_0057ca60(3,iVar4,0);
LAB_00467d4e:
  FUN_00467650(auStack_10,auStack_18,iVar3);
  (**(code **)(*piVar2 + 8))(piVar2);
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}


