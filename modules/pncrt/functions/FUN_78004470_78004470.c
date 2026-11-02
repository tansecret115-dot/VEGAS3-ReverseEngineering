/* Module: pncrt.dll
   Function: FUN_78004470
   Address: 78004470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78004470(undefined4 *param_1)

{
  DName *pDVar1;
  undefined4 *puVar2;
  undefined4 *this;
  void *this_00;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  if (*DAT_78041aac == '\0') {
    cVar5 = ')';
    puVar4 = local_8;
    uVar3 = 2;
    puVar2 = param_1;
    this = FUN_780062b0(local_10," throw(");
    this_00 = (void *)FUN_78006820(this,puVar4,uVar3);
    FUN_780065f0(this_00,puVar2,cVar5);
    return param_1;
  }
  if (*DAT_78041aac == 'Z') {
    DAT_78041aac = DAT_78041aac + 1;
    *param_1 = 0;
    uVar3 = param_1[1] & 0xf ^ param_1[1];
    uVar3 = uVar3 & 0x10 ^ uVar3;
    uVar3 = uVar3 & 0x20 ^ uVar3;
    param_1[1] = uVar3 & 0x40 ^ uVar3;
    return param_1;
  }
  pDVar1 = (DName *)FUN_78004140(local_10);
  puVar4 = local_18;
  puVar2 = FUN_780062b0(local_8," throw(");
  FUN_78006750(puVar2,puVar4,pDVar1);
  FUN_780065f0(local_18,param_1,')');
  return param_1;
}


