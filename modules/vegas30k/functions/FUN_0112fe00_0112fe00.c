/* Module: vegas30k.dll
   Function: FUN_0112fe00
   Address: 0112fe00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0112fe00(int param_1,HWND param_2,int param_3,LPCSTR param_4,int param_5,int param_6)

{
  char cVar1;
  LPSTR pCVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  LPCSTR pCVar6;
  CHAR *pCVar7;
  CHAR *pCVar8;
  CHAR local_104 [260];
  
  pCVar8 = local_104;
  if (*param_4 == '*') {
    pCVar8 = local_104;
    pCVar2 = CharNextA(param_4);
    if (param_4 != pCVar2) {
      uVar3 = (int)pCVar2 - (int)param_4;
      pCVar8 = param_4;
      pCVar7 = local_104;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pCVar7 = *(undefined4 *)pCVar8;
        pCVar8 = pCVar8 + 4;
        pCVar7 = pCVar7 + 4;
      }
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pCVar7 = *pCVar8;
        pCVar8 = pCVar8 + 1;
        pCVar7 = pCVar7 + 1;
      }
      pCVar8 = local_104 + uVar3;
    }
    param_4 = CharNextA(param_4);
    cVar1 = *param_4;
    while ((cVar1 != '\0' && (cVar1 != '*'))) {
      pCVar2 = CharNextA(param_4);
      for (pCVar6 = param_4; pCVar6 != pCVar2; pCVar6 = pCVar6 + 1) {
        *pCVar8 = *pCVar6;
        pCVar8 = pCVar8 + 1;
      }
      param_4 = CharNextA(param_4);
      cVar1 = *param_4;
    }
    if (*param_4 == '*') {
      pCVar2 = CharNextA(param_4);
      for (pCVar7 = param_4; pCVar7 != pCVar2; pCVar7 = pCVar7 + 1) {
        *pCVar8 = *pCVar7;
        pCVar8 = pCVar8 + 1;
      }
      param_4 = CharNextA(param_4);
    }
  }
  else {
    cVar1 = *param_4;
    while ((cVar1 != '\0' && (cVar1 != '\\'))) {
      pCVar2 = CharNextA(param_4);
      for (pCVar7 = param_4; pCVar7 != pCVar2; pCVar7 = pCVar7 + 1) {
        *pCVar8 = *pCVar7;
        pCVar8 = pCVar8 + 1;
      }
      param_4 = CharNextA(param_4);
      cVar1 = *param_4;
    }
  }
  *pCVar8 = '\0';
  iVar4 = FUN_0112fbb0(param_2,param_3,local_104);
  if (iVar4 == 0) {
    if ((param_6 != 0) && (param_3 != -0x10000)) {
      SendMessageA(param_2,0x1102,2,param_3);
    }
    if (param_5 == 0) {
      return 0;
    }
    if (param_3 == -0x10000) {
      return 0;
    }
  }
  else {
    if (*param_4 == '\\') {
      FUN_0112ec90(param_1,iVar4,0);
      if ((param_6 != 0) || (param_5 != 0)) {
        SendMessageA(param_2,0x1102,2,iVar4);
      }
      iVar4 = FUN_0112fe00(param_1,param_2,iVar4,param_4 + 1,param_5,param_6);
      return iVar4;
    }
    if (param_6 != 0) {
      SendMessageA(param_2,0x1102,2,iVar4);
    }
    if (param_5 == 0) {
      return iVar4;
    }
    param_3 = iVar4;
    if (*(int *)(param_1 + 0x4e4) != 0) {
      SendMessageA(param_2,0x110b,5,iVar4);
    }
  }
  SendMessageA(param_2,0x110b,9,param_3);
  return iVar4;
}


