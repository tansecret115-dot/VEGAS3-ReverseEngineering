/* Module: encn3260.dll
   Function: FUN_664d1bf0
   Address: 664d1bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_664d1bf0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int local_6c [22];
  uint local_14 [4];
  
  FUN_664d6d50(local_6c);
  FUN_664d6d80(local_6c,param_1,param_2);
  FUN_664d6e40((int)local_14,local_6c);
  uVar2 = 0;
  puVar3 = local_14;
  iVar4 = 3;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 ^ uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return uVar2;
}


