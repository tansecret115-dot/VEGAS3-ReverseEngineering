/* Module: g2plug.dll
   Function: FUN_5f806d60
   Address: 5f806d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f806d60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CHAR *pCVar4;
  char **ppcVar5;
  char *local_6a8 [4];
  uchar local_698 [260];
  uchar local_594 [260];
  CHAR local_490 [1168];
  
  local_6a8[0] = "DT_Plugins";
  local_6a8[1] = "DT_Codecs";
  local_6a8[2] = "DT_EncSDK";
  local_6a8[3] = "DT_Common";
  iVar3 = 0;
  GetModuleFileNameA(DAT_5f877460,(LPSTR)local_698,0x104);
  FUN_5f82a8c0(local_698,local_594,0x104);
  pCVar4 = local_490;
  for (iVar2 = 0x124; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4[0] = '\0';
    pCVar4[1] = '\0';
    pCVar4[2] = '\0';
    pCVar4[3] = '\0';
    pCVar4 = pCVar4 + 4;
  }
  ppcVar5 = local_6a8;
  iVar2 = 4;
  do {
    iVar1 = wsprintfA(local_490 + iVar3,"%s=%s",*ppcVar5,local_594);
    ppcVar5 = ppcVar5 + 1;
    iVar2 = iVar2 + -1;
    iVar3 = iVar3 + 1 + iVar1;
  } while (iVar2 != 0);
  SetDLLAccessPath(local_490);
  return;
}


