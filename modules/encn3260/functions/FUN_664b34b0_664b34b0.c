/* Module: encn3260.dll
   Function: FUN_664b34b0
   Address: 664b34b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664b34b0(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint local_8;
  
  puVar1 = (uint *)((int)this + 0x48);
  iVar2 = FUN_664b6320(puVar1,(uint *)((int)this + 0xd40),0);
  if ((iVar2 == 0) && (*(undefined4 *)((int)this + 0x30) = 0, *(int *)((int)this + 0x119c) == 0)) {
    FUN_664b6b70(puVar1,&local_8);
    if (local_8 != *param_1) {
      FUN_664b6b20(puVar1,*param_1);
    }
    iVar2 = FUN_664b64b0(puVar1,(uint *)((int)this + 0xd40),(int *)((int)this + 0x1184),
                         (int *)((int)this + 0x1184));
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 0x80004005;
}


