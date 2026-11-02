/* Module: sfmarket2.dll
   Function: FUN_00447d70
   Address: 00447d70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00447d70(int *param_1)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  uVar2 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      if ((FILE *)param_1[1] != (FILE *)0x0) {
        uVar2 = fflush((FILE *)param_1[1]);
      }
    }
    else {
      if (iVar1 == 1) {
        return 0;
      }
      if (iVar1 == 2) {
        BVar3 = FlushFileBuffers((HANDLE)param_1[1]);
        return (uint)(BVar3 == 0);
      }
    }
  }
  return uVar2;
}


