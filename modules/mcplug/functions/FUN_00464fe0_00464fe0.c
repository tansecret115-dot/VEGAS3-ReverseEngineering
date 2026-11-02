/* Module: mcplug.dll
   Function: FUN_00464fe0
   Address: 00464fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00464fe0(HANDLE param_1,int param_2,int *param_3,int *param_4)

{
  HANDLE hFile;
  int *piVar1;
  uint uVar2;
  BOOL BVar3;
  int local_4;
  
  piVar1 = param_4;
  hFile = param_1;
  while( true ) {
    uVar2 = FUN_00464ec0(hFile,0x5453494c,&param_4,piVar1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((piVar1 != (int *)0x0) && (*piVar1 < 4)) {
      return 0x8004e00a;
    }
    BVar3 = ReadFile(hFile,&local_4,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || (param_1 != (HANDLE)0x4)) {
      return 0x8004e008;
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + -4;
    }
    if (local_4 == param_2) break;
    if (((uint)param_4 & 1) != 0) {
      param_4 = (int *)((int)param_4 + 1);
    }
    SetFilePointer(hFile,(LONG)(param_4 + -1),(PLONG)0x0,1);
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 - (int)param_4;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(param_4 + -1);
  }
  return 0;
}


