/* Module: pncrt.dll
   Function: FUN_7801d3f0
   Address: 7801d3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_7801d3f0(void)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  int *piVar6;
  HANDLE hFile;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint in_stack_00001008;
  int in_stack_0000100c;
  
  FUN_78008b70();
  iVar9 = 0;
  DVar1 = FUN_780116c0(in_stack_00001008,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_780116c0(in_stack_00001008,0,2), DVar2 == 0xffffffff)) {
    return -1;
  }
  uVar10 = in_stack_0000100c - DVar2;
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
      FUN_780116c0(in_stack_00001008,in_stack_0000100c,0);
      hFile = (HANDLE)_get_osfhandle(in_stack_00001008);
      BVar7 = SetEndOfFile(hFile);
      iVar9 = (BVar7 != 0) - 1;
      if (iVar9 == -1) {
        piVar6 = _errno();
        *piVar6 = 0xd;
        DVar2 = GetLastError();
        puVar5 = __doserrno();
        *puVar5 = DVar2;
      }
    }
    FUN_780116c0(in_stack_00001008,DVar1,0);
    return iVar9;
  }
  puVar11 = (undefined4 *)register0x00000010;
  for (iVar8 = 0x400; puVar11 = puVar11 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
  }
  iVar8 = FUN_7801f400(in_stack_00001008,0x8000);
  while( true ) {
    uVar3 = 0x1000;
    if ((int)uVar10 < 0x1000) {
      uVar3 = uVar10;
    }
    iVar4 = FUN_78011300(in_stack_00001008,&stack0x00000004,uVar3);
    if (iVar4 == -1) break;
    uVar10 = uVar10 - iVar4;
    if ((int)uVar10 < 1) {
LAB_7801d4aa:
      FUN_7801f400(in_stack_00001008,iVar8);
      FUN_780116c0(in_stack_00001008,DVar1,0);
      return iVar9;
    }
  }
  puVar5 = __doserrno();
  if (*puVar5 == 5) {
    piVar6 = _errno();
    *piVar6 = 0xd;
  }
  iVar9 = -1;
  goto LAB_7801d4aa;
}


