/* Module: rnco3260.dll
   Function: FUN_636f7f40
   Address: 636f7f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7f40(uint *param_1,int param_2,undefined1 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2 >> 1;
  iVar5 = param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *param_3;
    uVar2 = param_3[2];
    uVar3 = param_3[1];
    param_3 = param_3 + 3;
    do {
      *param_1 = (uint)CONCAT21(CONCAT11(uVar1,uVar3),uVar2);
      param_1 = param_1 + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return;
      }
      iVar4 = iVar4 - param_4;
    } while (-1 < iVar4);
    iVar4 = iVar4 + param_2;
  } while( true );
}


