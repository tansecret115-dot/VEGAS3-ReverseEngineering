/* Module: pncrt.dll
   Function: FUN_78003cc0
   Address: 78003cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78003cc0(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  DName *pDVar5;
  DName local_20 [8];
  undefined4 local_18;
  uint local_14;
  undefined1 local_10 [8];
  undefined4 local_8 [2];
  
  FUN_78006240(local_20,param_2);
  cVar1 = *DAT_78041aac;
  if (cVar1 == '\0') {
    pDVar5 = local_20;
    puVar4 = param_1;
    puVar3 = FUN_78006450(local_10,2);
    FUN_78006750(puVar3,puVar4,pDVar5);
    return param_1;
  }
  if (cVar1 == '?') {
    DAT_78041aac = DAT_78041aac + 1;
    local_14 = local_14 & 0xffffff80;
    local_18 = 0;
    puVar4 = FUN_78005780(local_8,local_20,'\0',(DName *)&local_18,0);
    FUN_78006b80(local_20,puVar4);
    FUN_78003de0(param_1,local_20);
    return param_1;
  }
  if (cVar1 != 'X') {
    FUN_78003de0(param_1,local_20);
    return param_1;
  }
  DAT_78041aac = DAT_78041aac + 1;
  iVar2 = DName::isEmpty(local_20);
  if (iVar2 != 0) {
    FUN_780062b0(param_1,"void");
    return param_1;
  }
  pDVar5 = local_20;
  puVar4 = param_1;
  puVar3 = FUN_780062b0(local_10,"void ");
  FUN_78006750(puVar3,puVar4,pDVar5);
  return param_1;
}


