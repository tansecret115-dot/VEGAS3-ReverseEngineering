/* Module: vegas30k.dll
   Function: FUN_01056a50
   Address: 01056a50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01056a50(byte *param_1,byte *param_2)

{
  LPSTR pCVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  pCVar1 = CharNextA((LPCSTR)param_1);
  iVar2 = (int)pCVar1 - (int)param_1;
  pCVar1 = CharNextA((LPCSTR)param_2);
  if (iVar2 != (int)pCVar1 - (int)param_2) {
    return iVar2 - ((int)pCVar1 - (int)param_2);
  }
  bVar4 = false;
  iVar3 = 0;
  bVar5 = true;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar4 = *param_1 < *param_2;
    bVar5 = *param_1 == *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
  }
  return iVar3;
}


