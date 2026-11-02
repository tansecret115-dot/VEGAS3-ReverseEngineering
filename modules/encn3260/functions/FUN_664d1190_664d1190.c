/* Module: encn3260.dll
   Function: FUN_664d1190
   Address: 664d1190
   Source: Ghidra pseudocode (Stage 10 batch) */


ulonglong __fastcall FUN_664d1190(int param_1)

{
  tm *ptVar1;
  int iVar2;
  undefined4 extraout_EDX;
  tm *ptVar3;
  ulonglong uVar4;
  
  ptVar1 = gmtime((time_t *)&stack0x00000004);
  if (ptVar1 != (tm *)0x0) {
    ptVar3 = (tm *)(param_1 + 4);
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar3->tm_sec = ptVar1->tm_sec;
      ptVar1 = (tm *)&ptVar1->tm_min;
      ptVar3 = (tm *)&ptVar3->tm_min;
    }
    uVar4 = mktime((tm *)(param_1 + 4));
    *(int *)(param_1 + 0x28) = (int)uVar4;
    return uVar4 & 0xffffffff00000000;
  }
  return CONCAT44(extraout_EDX,0xffffffff);
}


