/* Module: pncrt.dll
   Function: FUN_78005bc0
   Address: 78005bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78005bc0(undefined4 *param_1,DName *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *this;
  void *pvVar4;
  DName *pDVar5;
  uint uVar6;
  char cVar7;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  if (*DAT_78041aac == '\0') {
    iVar1 = DName::isEmpty(param_2);
    if (iVar1 == 0) {
      puVar3 = local_20;
      puVar2 = FUN_780061c0(local_8,'(');
      FUN_78006750(puVar2,puVar3,param_2);
      puVar3 = local_10;
      cVar7 = ']';
      puVar2 = local_18;
      uVar6 = 2;
      this = (undefined4 *)FUN_780066a0(local_20,&local_28,")[");
      goto LAB_78005d23;
    }
    puVar3 = local_8;
    puVar2 = local_10;
  }
  else {
    iVar1 = FUN_78002060();
    if (iVar1 != 0) {
      local_28 = 0;
      local_24 = local_24 & 0xffffff80;
      do {
        pDVar5 = FUN_78001fb0(local_18);
        puVar3 = local_20;
        puVar2 = FUN_780061c0(local_10,'[');
        FUN_78006750(puVar2,puVar3,pDVar5);
        pDVar5 = (DName *)FUN_780065f0(local_20,local_8,']');
        FUN_780069e0(&local_28,pDVar5);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      iVar1 = DName::isEmpty(param_2);
      if (iVar1 == 0) {
        puVar3 = local_20;
        puVar2 = FUN_780061c0(local_8,'(');
        FUN_78006750(puVar2,puVar3,param_2);
        pDVar5 = (DName *)&local_28;
        puVar3 = local_10;
        pvVar4 = (void *)FUN_780065f0(local_20,local_18,')');
        puVar3 = (undefined4 *)FUN_78006750(pvVar4,puVar3,pDVar5);
        FUN_78006b80(&local_28,puVar3);
      }
      FUN_78003de0(param_1,(DName *)&local_28);
      return param_1;
    }
    puVar3 = local_20;
    puVar2 = &local_28;
  }
  cVar7 = ']';
  uVar6 = 2;
  this = FUN_780061c0(local_18,'[');
LAB_78005d23:
  pvVar4 = (void *)FUN_78006820(this,puVar2,uVar6);
  pDVar5 = (DName *)FUN_780065f0(pvVar4,puVar3,cVar7);
  FUN_78004550(param_1,pDVar5);
  return param_1;
}


