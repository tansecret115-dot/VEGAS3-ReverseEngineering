/* Module: rmme3260.dll
   Function: FUN_66247540
   Address: 66247540
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_66247540(void *this,undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_10;
  uint local_c;
  uint *local_8;
  
  local_8 = this;
  iVar1 = FUN_662406e0(*(int *)((int)this + 0x3a));
  iVar5 = param_4[2] - *param_4;
  iVar6 = param_4[3] - param_4[1];
  iVar2 = FUN_6624fae0(param_2);
  FUN_662408b0(*(int *)((int)local_8 + 0x3a));
  pcVar3 = (code *)FUN_66246030(DAT_6627d0d8,*(undefined4 *)((int)local_8 + 0x4e),
                                *(undefined4 *)((int)local_8 + 0x52));
  local_10 = 0;
  local_c = 0;
  if (pcVar3 != (code *)0x0) {
    local_8 = (uint *)((int)local_8 + 0x56);
    iVar4 = FUN_6624b6a0((uint *)(iVar1 + 0x48),local_8,0,&local_10,&local_c);
    if (iVar4 == 0) {
      (*pcVar3)(local_10,iVar5,iVar6,local_c,*param_4,param_4[1],iVar5,iVar6,param_1,iVar5,iVar6,
                iVar2,*param_4,param_4[1],iVar5,iVar6);
      FUN_6624b7c0((uint *)(iVar1 + 0x48),local_8,0);
      return 0;
    }
  }
  return 0x80004005;
}


