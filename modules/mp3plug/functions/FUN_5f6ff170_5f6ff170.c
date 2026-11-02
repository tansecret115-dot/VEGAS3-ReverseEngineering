/* Module: mp3plug.dll
   Function: FUN_5f6ff170
   Address: 5f6ff170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ff170(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *param_1;
  uVar5 = 0;
  iVar4 = *param_2;
  do {
    while( true ) {
      iVar1 = (&DAT_5f7474d0)[uVar5];
      iVar2 = iVar4 / iVar1;
      if ((iVar1 * (iVar3 / iVar1) - iVar3 != 0) || (iVar1 * iVar2 - iVar4 != 0)) break;
      *param_1 = iVar3 / iVar1;
      *param_2 = iVar2;
      iVar3 = *param_1;
      iVar4 = iVar2;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  return;
}


