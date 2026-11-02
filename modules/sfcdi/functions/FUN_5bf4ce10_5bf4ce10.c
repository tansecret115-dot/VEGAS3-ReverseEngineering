/* Module: sfcdi.dll
   Function: FUN_5bf4ce10
   Address: 5bf4ce10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4ce10(int param_1,undefined2 *param_2)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  ushort uVar4;
  
  FUN_5bf4cda0((undefined1 *)param_2);
  piVar3 = (int *)(param_2 + 4);
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x40) = *param_2;
  uVar4 = (ushort)((*(int *)(param_2 + 2) - 7U) / 0xc);
  if (uVar4 == 0) {
    iVar1 = 0;
  }
  else {
    while( true ) {
      FUN_5bf4cdc0((undefined1 *)piVar3);
      iVar1 = FUN_5bf2ade0(*(int **)(param_1 + 0x44),piVar3,0xc,-1,(int *)0x0);
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


