/* Module: encn3260.dll
   Function: FUN_6648c780
   Address: 6648c780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_6648c780(undefined4 param_1,byte *param_2)

{
  undefined4 *this;
  long lVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_50 [11];
  char local_24 [32];
  
  this = operator_new(0x50);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_664bd560(this);
    FUN_664bb2c0(this + 0xd);
    FUN_664bb2c0(this + 0x10);
    *this = &PTR_FUN_664de1f0;
  }
  sprintf(local_24,&DAT_664e2f44,param_1);
  FUN_664bd620(this,&DAT_664e2f3c,local_24,1);
  this[3] = param_1;
  FUN_664bb5e0(this + 0xd,(char *)param_2);
  lVar1 = atol((char *)param_2);
  this[0x13] = lVar1;
  pcVar2 = FUN_6648c5e0(param_2);
  FUN_664bb5e0(this + 0x10,pcVar2);
  FUN_664d1160(local_50);
  iVar3 = 0;
  pcVar2 = (char *)FUN_664d11e0(local_50);
  FUN_664bd620(this,&DAT_664e2f48,pcVar2,iVar3);
  FUN_664c0180(local_50);
  return this;
}


