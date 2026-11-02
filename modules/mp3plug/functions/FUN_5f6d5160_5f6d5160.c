/* Module: mp3plug.dll
   Function: FUN_5f6d5160
   Address: 5f6d5160
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_5f6d5160(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = (param_5 & 1) != 0;
  iVar2 = 0;
  iVar3 = 0;
  if (bVar5) {
    *param_3 = *param_1;
    iVar2 = param_2;
    iVar3 = param_4;
  }
  for (uVar4 = (uint)bVar5; (int)uVar4 < (int)param_5; uVar4 = uVar4 + 2) {
    uVar1 = param_1[param_2 + iVar2];
    param_3[iVar3] = param_1[iVar2];
    param_3[param_4 + iVar3] = uVar1;
    iVar2 = iVar2 + param_2 * 2;
    iVar3 = iVar3 + param_4 * 2;
  }
  return;
}


