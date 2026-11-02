/* Module: sfcdi.dll
   Function: FUN_5bf4b930
   Address: 5bf4b930
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4b930(int param_1,undefined2 *param_2)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  ushort uVar4;
  
  FUN_5bf4a320((undefined1 *)param_2);
  piVar3 = (int *)(param_2 + 4);
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x34) = *param_2;
  uVar4 = (ushort)((*(int *)(param_2 + 2) - 7U) / 0xc);
  if (uVar4 == 0) {
    iVar1 = 0;
  }
  else {
    while( true ) {
      FUN_5bf4a300((undefined1 *)piVar3);
      iVar1 = FUN_5bf2ade0(*(int **)(param_1 + 0x38),piVar3,0xc,-1,(int *)0x0);
      if (iVar1 < 0) break;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
      if (uVar4 <= uVar2) {
        return iVar1;
      }
    }
  }
  return iVar1;
}


