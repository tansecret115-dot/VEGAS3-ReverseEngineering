/* Module: mpgaout.dll
   Function: FUN_100064e0
   Address: 100064e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100064e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_3 + 0x10);
  iVar3 = *(int *)(param_3 + 0x14);
  iVar6 = 0;
LAB_100064f8:
  iVar5 = 0;
  iVar1 = iVar6 + 1;
  do {
    if (iVar6 < iVar3) {
      if (iVar2 <= iVar5) break;
    }
    else if (0 < iVar5) break;
    iVar4 = iVar5 * 0x80;
    iVar5 = iVar5 + 1;
    FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*(uint *)(param_2 + iVar4 + iVar6 * 4),4);
  } while( true );
  iVar6 = iVar1;
  if (0x1f < iVar1) {
    return;
  }
  goto LAB_100064f8;
}


