/* Module: rmme3260.dll
   Function: FUN_66248970
   Address: 66248970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66248970(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint local_8;
  
  puVar1 = (uint *)((int)this + 0x48);
  iVar2 = FUN_6624b7c0(puVar1,(uint *)((int)this + 0xd40),0);
  if ((iVar2 == 0) && (*(undefined4 *)((int)this + 0x30) = 0, *(int *)((int)this + 0x119c) == 0)) {
    FUN_6624c010(puVar1,&local_8);
    if (local_8 != *param_1) {
      FUN_6624bfc0(puVar1,*param_1);
    }
    iVar2 = FUN_6624b950(puVar1,(uint *)((int)this + 0xd40),(int *)((int)this + 0x1184),
                         (int *)((int)this + 0x1184));
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 0x80004005;
}


