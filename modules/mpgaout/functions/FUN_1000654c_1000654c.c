/* Module: mpgaout.dll
   Function: FUN_1000654c
   Address: 1000654c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000654c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_3 + 0x10);
  iVar3 = *(int *)(param_3 + 0x18);
  iVar4 = *(int *)(param_3 + 0x14);
  iVar5 = *(int *)(param_3 + 8);
  iVar8 = 0;
  if (iVar3 < 1) {
    return;
  }
LAB_10006578:
  iVar7 = 0;
  iVar1 = iVar8 + 1;
  do {
    if (iVar8 < iVar4) {
      if (iVar2 <= iVar7) break;
    }
    else if (0 < iVar7) break;
    iVar6 = iVar7 * 0x80;
    iVar7 = iVar7 + 1;
    FUN_1000ad4c(*(int **)(param_1 + 0x44e00),*(uint *)(param_2 + iVar6 + iVar8 * 4),
                 *(uint *)(iVar5 + 4 + iVar8 * 0x100));
  } while( true );
  iVar8 = iVar1;
  if (iVar3 <= iVar1) {
    return;
  }
  goto LAB_10006578;
}


