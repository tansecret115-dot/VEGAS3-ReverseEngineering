/* Module: sfcdi.dll
   Function: FUN_5bf20070
   Address: 5bf20070
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5bf20070(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_8;
  uint local_4;
  
  iVar3 = 0;
  iVar5 = 0;
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if (iVar2 <= iVar3) break;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + iVar3 * 4);
    }
    if (iVar5 == 0) {
      *(undefined2 *)(iVar2 + 10) = 0xffff;
      *(undefined2 *)(iVar2 + 0xe) = 0;
      iVar3 = iVar3 + 1;
      iVar5 = iVar2;
    }
    else {
      iVar3 = iVar3 + 1;
      *(undefined2 *)(iVar2 + 10) = *(undefined2 *)(iVar5 + 4);
      *(undefined2 *)(iVar5 + 0xc) = *(undefined2 *)(iVar2 + 4);
      *(undefined2 *)(iVar2 + 0xe) = 0;
      iVar5 = iVar2;
    }
  }
  iVar3 = FUN_5bf2ade0(*(int **)(param_1 + 0x20),(int *)0x0,8,-1,&local_8);
  if (-1 < iVar3) {
    piVar1 = *(int **)(param_1 + 0x20);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((local_8 < 0) || (iVar3 + -1 < local_8)) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = *(undefined4 **)(piVar1[2] + local_8 * 4);
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    *puVar4 = 2;
    *(ushort *)(puVar4 + 1) = *(ushort *)(param_1 + 0x24) >> 3;
    iVar3 = FUN_5bf3f2c0(**(int **)(param_1 + 8));
    if (iVar3 == 0) {
      iVar3 = -0x7ff8ffa9;
    }
    else {
      local_4 = (uint)*(ushort *)(puVar4 + 1);
      iVar3 = FUN_5bf29ae0(*(int **)(iVar3 + 4),-1,(int *)&local_4,1);
      if (-1 < iVar3) {
        *(undefined2 *)(iVar5 + 0xc) = *(undefined2 *)(puVar4 + 1);
        return iVar3;
      }
    }
  }
  return iVar3;
}


