/* Module: encn3260.dll
   Function: FUN_664d6bc0
   Address: 664d6bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664d6bc0(void *this,int *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  void *this_00;
  int iVar3;
  int *piVar4;
  undefined4 local_28 [4];
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_18 = 0;
  local_14 = 0;
  FUN_664d6960(local_28);
  local_10 = 0;
  FUN_664d69c0(local_28,(char *)param_1);
  FUN_664d6b10(local_28,0,&local_c,(int *)&local_8);
  if (*(int *)this == 0) {
    puVar2 = operator_new(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)FUN_664d6b50(puVar2);
    }
    *(void **)this = this_00;
    FUN_664d6b60(this_00,(undefined4 *)&DAT_664f01ac,1);
  }
  param_1 = *(int **)this;
  do {
    local_10 = local_10 + 1;
    iVar3 = FUN_664d6b10(local_28,local_10,&local_c,(int *)&local_8);
    if (iVar3 == 0) {
      iVar3 = param_1[2];
      param_1[2] = param_2;
      FUN_664d6980((int)local_28);
      return iVar3;
    }
    bVar1 = false;
    iVar3 = *param_1;
    piVar4 = param_1;
    if (iVar3 == 0) {
      bVar1 = true;
      puVar2 = operator_new(0x14);
      if (puVar2 == (undefined4 *)0x0) {
        *param_1 = 0;
      }
      else {
        iVar3 = FUN_664ba900(puVar2);
        *param_1 = iVar3;
      }
    }
    else {
      local_18 = *(int *)(iVar3 + 4);
      local_14 = iVar3;
      while (piVar4 = (int *)0x0, local_18 != 0) {
        piVar4 = (int *)FUN_664bab80(local_18);
        piVar4 = (int *)*piVar4;
        iVar3 = (*DAT_664f2b38)(piVar4[1],local_c,local_8);
        if ((iVar3 == 0) && (*(char *)(local_8 + piVar4[1]) == '\0')) break;
        FUN_664bab40(&local_18);
      }
      if (piVar4 == (int *)0x0) {
        bVar1 = true;
        piVar4 = param_1;
      }
    }
    param_1 = piVar4;
    if (bVar1) {
      puVar2 = operator_new(0xc);
      if (puVar2 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_664d6b50(puVar2);
      }
      FUN_664baab0((void *)*param_1,piVar4);
      FUN_664d6b60(piVar4,local_c,local_8);
      param_1 = piVar4;
    }
  } while( true );
}


